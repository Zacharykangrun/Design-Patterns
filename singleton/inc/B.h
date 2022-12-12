
#pragma once
#include <iostream>
#include "singleton.h"
using namespace std;
using namespace Singleton;
using namespace SingletonOne;

class B
{
    friend class singleton<B>;
    friend class singletonOne<B>;

private:
    B(/* args */):m_name("B"){}
    B(const B &){}
    ~B(){}
    B & operator = (const B &);

private:
    string m_name;

public:
    void show(){
        std::cout << "Instance:" << m_name << std::endl;
    }
};
