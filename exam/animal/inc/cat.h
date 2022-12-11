#pragma once
#include "food.h"

class cat
{
public:
    cat(/* args */):energy(0){}
    ~cat(){}

    void eat(food s)
    {
        energy += s.Nutrition();
    }

    unsigned int getEnergy(void)
    {
        return energy;
    }
private:
    unsigned int energy;
};



