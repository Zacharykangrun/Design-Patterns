#include <iostream>
#include "inc/command.h"
using namespace std;


int main(int argc, char const *argv[])
{
    Client Arxbibye;
    Waitress waitress; 
    vector<string> order;
    order.push_back("波士顿大龙虾");
    order.push_back("刀削面");
    order.push_back("猫屎咖啡");
    Arxbibye.orderFood(waitress, order);

    return 0;
}
