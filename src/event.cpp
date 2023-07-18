#include "event.h"
#include <iostream>
#include <string>


//Constructors
Event::Event() : name(' '), outcomes({0.0}) {};


Event::Event(char name) : name(name), outcomes({0.0}){};


Event::Event(char name, double prob) : name(name), outcomes({prob}){};


Event::Event(char name, std::vector<double> outs) : name(name), outcomes(outs){};


void Event::addOutcome(double prob){
    outcomes.push_back(prob);
}


double Event::getProbability() {
    double result = 0.0;
    for ( double& x: outcomes ) {
        result+=x;
    }

    return result;
}

Event::~Event() {
    std::cout << "Event " << name << " has been destroyed!" << std::endl;
}






