//
// Created by Сергей on 14.10.17.
//

#ifndef ADAPTER_BEHAVIOR_H
#define ADAPTER_BEHAVIOR_H

class FlyBehavior {
public:
    virtual void fly() = 0;
};

class SoundBehavior {
public:
    virtual void sound() = 0;
};

#endif //ADAPTER_BEHAVIOR_H
