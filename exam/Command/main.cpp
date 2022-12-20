#include <iostream>
#include "inc/command.h"
using namespace std;


int main(int argc, char const *argv[])
{
    Client Arxbibye;
    Waitress waitress; 
    vector<string> order;
    order.push_back("lobster");
    order.push_back("noodles");
    order.push_back("coffee");
    Arxbibye.orderFood(waitress, order);

    return 0;
}
