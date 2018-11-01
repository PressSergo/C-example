//
// Created by Сергей on 14.10.17.
//

#ifndef PATTERNS_SHABLON_CONNECTORSERVER_H
#define PATTERNS_SHABLON_CONNECTORSERVER_H

#include <string>
#include <iostream>

class ConectServer {
protected:
    std::string nameThreat;
public:
    void GetConnetcon(){
        std::cout<<"Thream \""<<nameThreat<<"\" connect "<<std::endl;
    };

    virtual void Getinformation() = 0;

    void CloseConnetion(){
        std::cout<<"Thream \""<<nameThreat<<"\" closing connect "<<std::endl;
    }

    void Action(){
        GetConnetcon();
        Getinformation();
        CloseConnetion();
        std::cout<<"-------------------------------------------"<<std::endl;
    }

};

#endif //PATTERNS_SHABLON_CONNECTORSERVER_H
