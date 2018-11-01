//
// Created by Сергей on 10.10.17.
//

#ifndef FACTORY_AIRCRAFT_H
#define FACTORY_AIRCRAFT_H

class Aircraft {
private:
    double Volum;
    double cost;
public:
    Aircraft(int v,int c) : Volum(v) , cost(c){};

    double getVolum() const {
        return Volum;
    }

    double getCost() const {
        return cost;
    }
};

class AircraftChina : public Aircraft {
public:
    AircraftChina() : Aircraft(400, 80) {};
};

class AircraftRussia : public Aircraft {
public:
    AircraftRussia() : Aircraft(100,250 ){};
};

class AircraftChinaWW : public Aircraft {
public:
    AircraftChinaWW() : Aircraft(600,100) {}
};

#endif //FACTORY_AIRCRAFT_H
