// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2001 Alistair Riddoch

#ifndef CLIENT_CONNECTION_H
#define CLIENT_CONNECTION_H

#include <Atlas/Objects/Decoder.h>
#include <Atlas/Codec.h>

#include <skstream/skstream.h>

#include <deque>

namespace Atlas { namespace Objects {
    class Encoder;
} }

/// \brief Class to handle socket connection to a cyphesis server from an
/// an admin client
class ClientConnection : public Atlas::Objects::Decoder {
  private:
    bool reply_flag;
    bool error_flag;
    int client_fd;
    tcp_socket_stream ios;
    Atlas::Codec<std::iostream> * codec;
    Atlas::Objects::Encoder * encoder;
    Atlas::Message::MapType reply;
    int serialNo;

    std::deque<Atlas::Objects::Operation::RootOperation *> operationQueue;

    template<class O>
    void push(const O &);

    void operation(const Atlas::Objects::Operation::RootOperation&);

    int negotiate();

    virtual void objectArrived(const Atlas::Objects::Operation::Error&);
    virtual void objectArrived(const Atlas::Objects::Operation::Info&);

    virtual void objectArrived(const Atlas::Objects::Operation::Action&);
    virtual void objectArrived(const Atlas::Objects::Operation::Appearance&);
    virtual void objectArrived(const Atlas::Objects::Operation::Combine&);
    virtual void objectArrived(const Atlas::Objects::Operation::Communicate&);
    virtual void objectArrived(const Atlas::Objects::Operation::Create&);
    virtual void objectArrived(const Atlas::Objects::Operation::Delete&);
    virtual void objectArrived(const Atlas::Objects::Operation::Disappearance&);
    virtual void objectArrived(const Atlas::Objects::Operation::Divide&);
    virtual void objectArrived(const Atlas::Objects::Operation::Feel&);
    virtual void objectArrived(const Atlas::Objects::Operation::Get&);
    virtual void objectArrived(const Atlas::Objects::Operation::Imaginary&);
    virtual void objectArrived(const Atlas::Objects::Operation::Listen&);
    virtual void objectArrived(const Atlas::Objects::Operation::Login&);
    virtual void objectArrived(const Atlas::Objects::Operation::Logout&);
    virtual void objectArrived(const Atlas::Objects::Operation::Look&);
    virtual void objectArrived(const Atlas::Objects::Operation::Move&);
    virtual void objectArrived(const Atlas::Objects::Operation::Perceive&);
    virtual void objectArrived(const Atlas::Objects::Operation::Perception&);
    virtual void objectArrived(const Atlas::Objects::Operation::RootOperation&);
    virtual void objectArrived(const Atlas::Objects::Operation::Set&);
    virtual void objectArrived(const Atlas::Objects::Operation::Sight&);
    virtual void objectArrived(const Atlas::Objects::Operation::Smell&);
    virtual void objectArrived(const Atlas::Objects::Operation::Sniff&);
    virtual void objectArrived(const Atlas::Objects::Operation::Sound&);
    virtual void objectArrived(const Atlas::Objects::Operation::Talk&);
    virtual void objectArrived(const Atlas::Objects::Operation::Touch&);

  public:
    ClientConnection();
    ~ClientConnection();

    int read();
    int connectLocal(const std::string &);
    int connect(const std::string &);
    void login(const std::string &, const std::string &);
    void create(const std::string &, const std::string &);
    int wait();
    void send(Atlas::Objects::Operation::RootOperation & op);

    int peek() {
        return ios.peek();
    }
    int eof() {
        return ios.eof();
    }
    int get_fd() {
        return client_fd;
    }
    const Atlas::Message::MapType & getReply() {
        return reply;
    }

    void poll(int timeOut = 0);
    Atlas::Objects::Operation::RootOperation * pop();
    bool pending();
};

#endif // CLIENT_CONNECTION_H
