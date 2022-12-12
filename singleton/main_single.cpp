#include <iostream>
#include <thread>
#include "inc/A.h"
#include "inc/B.h"
#include "inc/C.h"
#include "inc/singleton.h"

using namespace Singleton;
using namespace SingletonOne;

void Cat(){
    singletonSecond<C>::Instance("cat")->show();
}
void Dog(){
    singletonSecond<C>::Instance("dog")->show();
}

int main(int argc, char const *argv[])
{

    // singleton<A>::Get_Instance()->show();
    // singleton<B>::Get_Instance()->show();

    // singletonOne<A>::Instance()->show();
    // singletonOne<B>::Instance()->show();

    // singletonOne<A>::Instance()->show();
    // singletonOne<A>::Instance()->show();

    // singletonSecond<C>::Instance("cat")->show();
    // singletonSecond<C>::Instance("dog")->show();
    

    std::thread c1(Cat);
    std::thread c2(Dog);
    c1.join();
    c2.join();
    /* code */
    return 0;
}
