//
// Created by Сергей on 12.10.17.
//

#ifndef SINGLETON_SINGELTON_H
#define SINGLETON_SINGELTON_H


class Singelton {
private:
    static Singelton *object;
    Singelton(int);
    int count;
public:
    static Singelton* GetInstance(int);
    void Display();
    ~Singelton(){delete object;}
};


#endif //SINGLETON_SINGELTON_H
