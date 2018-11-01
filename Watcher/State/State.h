//
// Created by Сергей on 15.10.17.
//

#ifndef WATCHER_STATE_H
#define WATCHER_STATE_H

#include <iostream>
class State;

class System {
private:
    State* sa;
public:
    System();

    void AnAction();

    void SetState(State* s);

    ~System(){delete sa;}

};

//---------------------------------------------

class State {
public:
    virtual void Action() = 0;
};

class Locked : public State {
private:
    System* sa;
public:
    Locked(System*a){sa=a;}
    void Action() override ;
};

class Performance : public State {
private:
    System* sa;
public:
    Performance(System* a){sa = a;}
    void Action() override ;
};

//--------------------------------------------

System::System() {
    sa = new Locked(this);
}

void System::AnAction() {
    sa->Action();
}

void System::SetState(State *s) {
    sa = s;
}

void Performance::Action() {
        std::cout<<"Performance System..."<<std::endl;
        sa->SetState(new Locked(sa));
};

void Locked::Action() {
    std::cout<<"Locked System..."<<std::endl;
    sa->SetState(new Performance(sa));

}

#endif //WATCHER_STATE_H
