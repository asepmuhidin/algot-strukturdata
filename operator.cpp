#include <iostream>
using namespace std;

int main()
{
    int a=11;
    int b=3;

    cout <<a<<"+"<<b<<"="<<a+b<<endl;
    cout <<a<<"-"<<b<<"="<<a-b<<endl;
    cout <<a<<"*"<<b<<"="<<a*b<<endl;
    cout <<a<<"/"<<b<<"="<<static_cast<float>(a)/b<<endl;
    cout <<a<<"%"<<b<<"="<<a%b<<endl;
}