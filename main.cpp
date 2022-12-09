#include <iostream>
#include "inc/A.h"
#include "inc/B.h"
#include "inc/singleton.h"

int main(int argc, char const *argv[])
{

    singleton<A>::Get_Instance()->show();
    singleton<B>::Get_Instance()->show();
    
    /* code */
    return 0;
}
