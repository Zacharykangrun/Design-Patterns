#include <iostream>
#include <string>
#include "./inc/strategy.h"

using namespace std;

int main(int argc, char const *argv[])
{
    FlyAction *wing_Fly = new WingFly();
    Strategy strategy(wing_Fly);
    strategy.fly();
    strategy.setFlyAction(new NoFly());
    strategy.fly();
    return 0;
}
