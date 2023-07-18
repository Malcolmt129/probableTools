#include <iostream>
#include <string>
#include "event.h"



int main() {

    Event a;

    a.name = 'a';
    a.probability = .8;

    std::cout << "The probability of event " << a.name << " is " << a.probability << std::endl;
    
    return 0;
    

}