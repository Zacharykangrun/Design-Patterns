
#include <iostream>
#include "inc/cat.h"
#include "inc/food.h"
#include "inc/sausage.h"


int main(int argc, char const *argv[])
{

    class cat green_cat;
    class sausage  small_sausage = sausage(20);
    class sausage  big_sausage = sausage(100);

    green_cat.eat((food &)small_sausage);  
    std::cout << green_cat.getEnergy() << std::endl; 
    green_cat.eat((food &)big_sausage);  
    std::cout << green_cat.getEnergy() << std::endl; 

    return 0;
}



