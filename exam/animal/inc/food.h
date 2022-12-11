#pragma once


class food
{
public:
    food(){}
    ~food(){}

private:
    unsigned int _nutrition;

public:
    unsigned int Nutrition(){return _nutrition;}
    void Nutrition(unsigned int x){_nutrition = x;}
};



