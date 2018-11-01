//
// Created by Сергей on 06.10.17.
//

#ifndef OBSERVE_OBSERVE_H
#define OBSERVE_OBSERVE_H

#include <vector>

class Subject {
public:
    virtual void update(int)=0;
};

class Peopele : public Subject {
private:
    int ID;
public:
    void update(int i) override;
};

class Object {
public:
    virtual void addElement(Subject&) = 0;
    virtual void notifyPeople(int)= 0;
};

class Magazine : public Object {
private:
    std::vector<Subject*> arr;
    int size;
public:
    Magazine();
    ~Magazine();

    void addElement(Subject &subject) override;

    void notifyPeople(int) override;
};


#endif //OBSERVE_OBSERVE_H
