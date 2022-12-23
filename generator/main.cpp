#include <iostream>
#include <string>
#include "./inc/generator.h"
using namespace std;


int main(int argc, char const *argv[])
{
    ConcreteBuilder * builder = new ConcreteBuilder;
    Diector dircter((Builder *)builder); 
    string type = "All";
    dircter.make(type);
    
    Product1 product = builder->getResult();
    product.show();    

    return 0;
}

