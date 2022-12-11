#include <iostream>

using namespace std;

class A 
{
private:
    string a;
public:
    A(string n):a(n){}
    ~ A(){}
    string get(void){return a;}
    A operator+(A& b){
        A result = a + b.a;
        return result;
    }
};
 

int main(int argc, char const *argv[])
{
    /* code */
    A a = string("this is a string param\n");
    A b = string("this is b string param\n");

    A d = a + b;
    cout << d.get() << endl; 
    return 0;
}



