#pragma once
#include <iostream>

using namespace std;

class product
{
private:
    /* data */
public:
    product(/* args */){}
    virtual ~product(){}
    virtual void work() const = 0;
};


class productA:public product
{
private:
    /* data */
public:
    productA(/* args */){}
    ~productA(){}

    void work() const override{       //ps: const override
        cout << "This is productA work function" << endl;
    }
};

class productB:public product
{
private:
    /* data */
public:
    productB(/* args */){}
    ~productB(){}

    void work() const override{       //ps: const override
        cout << "This is productB work function" << endl;
    }
};

class Trunk:public product
{
private:
    unsigned int capability=0;
    /* data */
public:
    Trunk(/* args */);
    ~Trunk();

    void work() const override{       //ps: const override
        cout << "Using Trunk delive stuff" << endl;
    }
};

class Ship:public product
{
private:
    /* data */
public:
    Ship(/* args */);
    ~Ship();
    
    void work() const override{       //ps: const override
        cout << "Using Trunk delive stuff" << endl;
    }
};
