#pragma once
#include <iostream>
#include "abstractProduct.h"
using namespace std;


class abstractFactory
{
private:
    /* data */
public:
    abstractFactory(/* args */){}
    virtual ~abstractFactory(){}

    virtual AbstractProductA* CreateProductA() const = 0;
    virtual AbstractProductB* CreateProductB() const = 0;

};

class FirstStyleFactroy:public abstractFactory
{
private:
    /* data */
public:
    FirstStyleFactroy(/* args */){}
    ~FirstStyleFactroy(){}

    AbstractProductA* CreateProductA() const override{
        return (new ProductA1());
    }
    AbstractProductB* CreateProductB() const override{
        return (new ProductB1());
    }
};

class SecondStyleFactroy:public abstractFactory
{
private:
    /* data */
public:
    SecondStyleFactroy(/* args */){}
    ~SecondStyleFactroy(){}

    AbstractProductA* CreateProductA() const override{
        return (new ProductA2());
    }
    AbstractProductB* CreateProductB() const override{
        return (new ProductB2());
    }
};
