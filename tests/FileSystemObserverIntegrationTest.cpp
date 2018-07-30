/*
 Copyright (C) 2018 Erik Ogenvik

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "TestBase.h"
#include "common/FileSystemObserver.h"

class FileSystemObserverIntegrationTest : public Cyphesis::TestBase
{

    public:

        void setup() override {

        }

        void teardown() override {

        }

        void test_createAndShutdown() {
            boost::asio::io_service io_service;
            {
                FileSystemObserver fileSystemObserver(io_service);
            }
            io_service.run();
        }

        FileSystemObserverIntegrationTest() {
            ADD_TEST(FileSystemObserverIntegrationTest::test_createAndShutdown);
        }
};


int main()
{
    FileSystemObserverIntegrationTest t;

    return t.run();
}