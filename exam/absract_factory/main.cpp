#include <iostream>
#include "inc/abstractFactory.h"
#include "inc/abstractProduct.h"
#include "inc/client.h"

int main(int argc, char const *argv[])
{
    abstractFactory* firstFactory = new FirstStyleFactroy();
    client enterpriser(firstFactory);

    enterpriser.buyProduct();
    enterpriser.usingProductA();
    enterpriser.usingProductA();
    enterpriser.usingProductA();
    enterpriser.usingProductB();

    return 0;
}
