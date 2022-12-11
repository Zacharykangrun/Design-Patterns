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

    friend A operator+(A&, A&);
};
 
A operator+(A& a1, A& a2){
    A result = a1.a + a2.a;    
    return result; 
}

int main(int argc, char const *argv[])
{
    /* code */
    A a = string("this is a string param\n");
    A b = string("this is b string param\n");
    A c = a + b;
    cout << c.get() << endl; 
    return 0;
}



