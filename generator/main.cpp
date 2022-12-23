#include <iostream>
#include <string>
#include "./inc/generator.h"
using namespace std;


int main(int argc, char const *argv[])
{
    ConcreteBuilder * builder = new ConcreteBuilder;
    Diector dircter((Builder *)builder); 
    string type = "All";
    string s = string("All");
    dircter.make(s);
    dircter.make(string("Z"));
    
    Product1 product = builder->getResult();
    product.show();    


    return 0;
}

