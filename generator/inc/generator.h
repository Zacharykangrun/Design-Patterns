#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Builder
{
public:
    Builder(/* args */){}
    virtual ~Builder(){}

    virtual void reset() = 0;
    virtual void buildStepA() = 0;
    virtual void buildStepB() = 0;
    virtual void buildStepZ() = 0;
};

class Product1
{
private:
    vector<string> content;

public:
    Product1(/* args */){}
    ~Product1(){}

    void UpLOad(string & s){
        content.push_back(s);
    }
    void Reset(){
        content.clear();
    }
    void show(){
        for (auto i:content){
            cout << "Include: " << i << endl;
        }
    }

};




class ConcreteBuilder: public Builder
{
private:
    Product1 product;
public:
    ConcreteBuilder(/* args */){}
    ~ConcreteBuilder(){}

    void reset() override {
        product.Reset();  
    }

    void buildStepA() override{
        string type = "stepA";
        product.UpLOad(type);
    }
    void buildStepB() override{
        string type = "stepB";
        product.UpLOad(type);
    }
    void buildStepZ() override{
        string type = "stepZ";
        product.UpLOad(type);
    }

    Product1 &getResult(){
        return product;
    } 
};


class Diector
{
private:
    Builder * m_builder;
public:
    Diector(Builder * builder):m_builder(builder){}
    ~Diector(){}

    void ChangeBuilder(Builder * builder){
        delete m_builder;
        m_builder = builder;
    }

    void make(string type){
        m_builder->reset();
        if (type == "A"){
            m_builder->buildStepA();
        }
        if (type == "B"){
            m_builder->buildStepB();
        }
        if (type == "Z"){
            m_builder->buildStepZ();
        }
        if (type == "All")    
        {
            m_builder->buildStepA();
            m_builder->buildStepB();
            m_builder->buildStepZ();
        }
    }

};

