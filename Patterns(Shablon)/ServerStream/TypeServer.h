//
// Created by Сергей on 14.10.17.
//

#ifndef PATTERNS_SHABLON_LOCALSERVER_H
#define PATTERNS_SHABLON_LOCALSERVER_H

#include "/Users/sergei/CLionProjects/Patterns(Shablon)/ConnectServer/ConnectorServer.h"

class LocalServer : public ConectServer {
public:
    LocalServer(std::string n) {nameThreat = n;}
    void Getinformation() override {
        std::cout<<"Get information for local server"<<std::endl;
    }
};

class EthernetServer : public ConectServer {
public:
    EthernetServer(std::string n) {nameThreat = n;};
    void Getinformation(){
        std::cout<<"Get information for Global(Ethernet) server"<<std::endl;
    }

};

#endif //PATTERNS_SHABLON_LOCALSERVER_H
