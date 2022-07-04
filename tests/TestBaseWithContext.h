// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2012 Alistair Riddoch
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA


#ifndef TEST_BASE_WITH_CONTEXT_H
#define TEST_BASE_WITH_CONTEXT_H

#ifdef NDEBUG
#undef NDEBUG
#endif
#ifndef DEBUG
#define DEBUG
#endif

#include "common/compose.hpp"
#include "AssertBase.h"

#include <Atlas/Message/Element.h>

#include <boost/bind/bind.hpp>
#include <boost/function.hpp>

#include <iostream>
#include <cmath>
#include <sstream>

//debug.cpp is linked to all tests, but we don't want to include debug.h since the "debug" macro creates conflicts.
template<typename T>
void debug_dump(const T& t, std::ostream&);


// If tests fail, and print out the message below, you'll have to actually
// implement this function to find out the details.
std::ostream& operator<<(std::ostream& os, const Atlas::Message::MapType& v)
{
    os << "[ATLAS_MAP]";
    return os;
}

std::ostream& operator<<(std::ostream& os,
                         const Atlas::Message::Element& e)
{
    debug_dump(e, os);
    return os;
}
namespace Atlas
{
namespace Message
{
std::ostream& operator<<(std::ostream& os, const Atlas::Message::MapType& v)
{
    os << "[ATLAS_MAP]";
    return os;
}

std::ostream& operator<<(std::ostream& os, const Atlas::Message::Element& e)
{
    debug_dump(e, os);
    return os;
}
}
}

//std::ostringstream& operator<<(std::ostringstream& os,
//                               const Atlas::Message::Element& e)
//{
//    debug_dump(e, os);
//    return os;
//}

namespace Cyphesis {

    template<typename ContextT>
    struct Test
    {
        const char* name;
        std::function<void(ContextT&)> method;
    };

    /**
     * Base class for tests. The template parameter ContextT declares a "context" class.
     * Before each test is invoked an instance of ContextT will be created, and destroyed after invokation.
     * The intent is that ContextT should contain all structures that are relevant to the tests.
     * @tparam ContextT
     */
    template<typename ContextT>
    class TestBaseWithContext : public AssertBase
    {
        protected:

            std::list<Test<ContextT>> m_tests;

        public:
            virtual ~TestBaseWithContext();

            void addTest(Test<ContextT> t);

            void addTest(const char* test_name, std::function<void(ContextT&)> method);

            int run();

    };

    template<typename ContextT>
    inline TestBaseWithContext<ContextT>::~TestBaseWithContext()
    {
    }

    template<typename ContextT>
    void TestBaseWithContext<ContextT>::addTest(Test<ContextT> t)
    {
        m_tests.emplace_back(t);
    }

    template<typename ContextT>
    void TestBaseWithContext<ContextT>::addTest(const char* test_name, std::function<void(ContextT&)> method)
    {
        m_tests.emplace_back(Test<ContextT>{test_name, method});
    }

    template<typename ContextT>
    int TestBaseWithContext<ContextT>::run()
    {
        int error_count = 0;

        for (auto& test : m_tests) {
            std::cerr << "Starting test " << test.name << std::endl << std::flush;
            {
                ContextT context{};
                test.method(context);
            }
            std::cerr << "Completed test " << test.name << std::endl << std::flush;

            if (!m_errorReports.empty()) {
                ++error_count;

                std::cerr << "Test \"" << test.name << "\" failed:" << std::endl;

                for (auto& report : m_errorReports) {
                    std::cerr << report << std::endl;
                }

                m_errorReports.clear();
            }
        }

        return error_count;
    }
}

#define ADD_TEST(_function) {\
    this->addTest(#_function, [&](auto& context){this->_function(context);});\
}

#endif // TEST_BASE_WITH_CONTEXT_H
