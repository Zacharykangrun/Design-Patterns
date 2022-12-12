#include <iostream>
#include "inc/creator.h"
#include "inc/product.h"


int main(int argc, char const *argv[])
{
    creator * Trunk = new TrunkCreator(); 
    Trunk->UsingProductToWork();

    creator * Ship = new ShipCreator();
    Ship->UsingProductToWork();

    return 0;
}
