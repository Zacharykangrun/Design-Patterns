#pragma once
#include <iostream>
#include "product.h"


class creator
{
public:
    creator(/* args */){}
    virtual ~creator(){
        delete actualProduct;
    }
private:
    product * actualProduct;

public:
    virtual product * factoryProduct() const = 0;
    void UsingProductToWork(){
        actualProduct = factoryProduct();
        actualProduct->work();
    };
};


class ProductACreator:public creator
{
public:
    ProductACreator(/* args */){}
    ~ProductACreator(){}

public:
    product * factoryProduct() const override{
        return (new productA());
    }
};

class ProductBCreator:public creator
{
public:
    ProductBCreator(/* args */){}
    ~ProductBCreator(){}

public:
    product * factoryProduct() const override{
        return (new productB());
    }
};

class TrunkCreator:public creator
{
public:
    TrunkCreator(/* args */){}
    ~TrunkCreator(){}

public:
    product * factoryProduct() const override{
        return (new Trunk());
    }
};

class ShipCreator:public creator
{
public:
    ShipCreator(/* args */){}
    ~ShipCreator(){}

public:
    product * factoryProduct() const override{
        return (new Ship());
    }
};