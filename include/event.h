#pragma once
#include <vector>

class Event {
    public:
        char name;
        double probability;
        std::vector<double> outcomes;

        Event();
        Event(char name);
        Event(char name, double prob);
        Event(char name, std::vector<double> outs);
        
        ~Event();
        
        void addOutcome(double prob);
        
        double getProbability();


    
};