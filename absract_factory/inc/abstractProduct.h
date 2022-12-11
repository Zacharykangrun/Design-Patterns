#pragma once
#include <iostream>
using namespace std;

class AbstractProductA
{
private:
    /* data */
public:
    AbstractProductA(/* args */){}
    virtual ~AbstractProductA(){}
    virtual void productA_Work() const = 0;
};

class ProductA1:public AbstractProductA
{
private:
    /* data */
public:
    ProductA1(/* args */){}
    virtual ~ProductA1(){}
    void productA_Work() const override{
        cout << "This a ProductA1, it is working now" << endl;
    }
};

class ProductA2:public AbstractProductA
{
private:
    /* data */
public:
    ProductA2(/* args */){}
    virtual ~ProductA2(){}
    void productA_Work() const override{
        cout << "This a ProductA2, it is working now" << endl;
    }
};

class AbstractProductB
{
private:
    /* data */
public:
    AbstractProductB(/* args */){}
    virtual ~AbstractProductB(){}
    virtual void productB_Work() const = 0;
};


class ProductB1:public AbstractProductB
{
private:
    /* data */
public:
    ProductB1(/* args */){}
    virtual ~ProductB1(){}
    void productB_Work() const override{
        cout << "This a ProductB1, it is working now" << endl;
    }
};

class ProductB2:public AbstractProductB
{
private:
    /* data */
public:
    ProductB2(/* args */){}
    virtual ~ProductB2(){}
    void productB_Work() const override{
        cout << "This a ProductB2, it is working now" << endl;
    }
};

