#pragma once
#include <iostream>
#include <string>

using namespace std;

class FlyAction
{
public:
    FlyAction(/* args */){}
    virtual ~FlyAction(){}

    virtual bool fly() const = 0;
};

class WingFly:public FlyAction
{
public:
    WingFly(/* args */){}
    ~WingFly(){}

    bool fly() const override{
        cout << "using wing to fly..."<< endl;
        return true;
    }
};

class NoFly : public FlyAction
{
public:
    NoFly(/* args */){}
    ~NoFly(){}

    bool fly() const override{
        cout << "No stuff to fly..." << endl;
        return true;
    }
};

class Strategy
{
private:
    FlyAction * flyAction;

public:
    Strategy(FlyAction * fly):flyAction(fly){}
    ~Strategy(){
        delete flyAction;
    }

    bool setFlyAction(FlyAction * p){
        delete flyAction;
        flyAction = p; 
    }

    bool fly(){
        return flyAction->fly();
    }
};

