#ifndef COMM_SERVER_H
#define COMM_SERVER_H

#include <common/const.h>

class CommClient;

typedef std::map<int, CommClient *> client_map_t;

class CommServer {
    int server_fd;
    int server_port;
    client_map_t clients;

    int accept();
    void idle();

  public:
    ServerRouting * server;

    int setup(int port);
    void loop();
    void remove_client(CommClient * client, char * msg);
    void remove_client(CommClient * client);
};

#endif /* COMM_SERVER_H */
