#pragma once
#include <iostream>
#include "abstractFactory.h"
#include "abstractProduct.h"

class client
{
private:
    abstractFactory* m_factroy = NULL;
    AbstractProductA* productA = NULL; 
    AbstractProductB* productB = NULL;
public:
    client(abstractFactory * factory):m_factroy(factory){}
    ~client(){
        delete productA;
        delete productB;
    }
    
    void buyProduct(){
        if (m_factroy == NULL) return;
        productA = m_factroy->CreateProductA();
        productB = m_factroy->CreateProductB();
    } 
    
    void usingProductA(){
        if (productA == NULL) return;
        productA->productA_Work();
    }
   
    void usingProductB(){
        if (productB == NULL) return;
        productB->productB_Work();
    }

};


