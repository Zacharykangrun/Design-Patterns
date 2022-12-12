#pragma once
#include <iostream>
#include "singleton.h"
using namespace std;
using namespace Singleton;
using namespace SingletonOne;

class A
{
    friend class singleton<A>;
    friend class singletonOne<A>;

private:
    A(/* args */):m_name("A"){}
    A(const A &){}
    ~A(){}
    A & operator = (const A &);

private:
    string m_name;

public:
    void show(){
        std::cout << "Instance:" << m_name << std::endl;
    }
};
