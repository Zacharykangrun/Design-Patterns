
#include <iostream>
#include <string>
#include "inc/cat.h"
#include "inc/food.h"
#include "inc/sausage.h"

using namespace std;

int main(int argc, char const *argv[])
{

    class cat green_cat;
    class sausage  small_sausage = sausage(20);
    class sausage  big_sausage = sausage(100);

    green_cat.eat((food &)small_sausage);  
    cout << green_cat.getEnergy() << endl; 
    green_cat.eat((food &)big_sausage);  
    cout << green_cat.getEnergy() << endl; 

    return 0;
}



