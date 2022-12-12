#pragma once
#include <iostream>
#include "singleton.h"
using namespace std;
using namespace SingletonSecond;

class C
{
    friend class singletonSecond<C>;
private:
    C(const string name):m_name(name){}
    C(const C &){}
    ~C(){}
    C & operator = (const C &);

private:
    string m_name;

public:
    void show(){
        std::cout << "Instance:" << m_name << std::endl;
    }
};
