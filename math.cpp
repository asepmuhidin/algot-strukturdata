#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,d;
    float x1,x2;

    cout<<"Input nilai a ?";cin>>a;
    cout<<"Input nilai b ?";cin>>b;
    cout<<"Input nilai c ?";cin>>c;

    d=pow(b,2)-(4*a*c);

    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);

    cout<<"Nila X1="<<x1<<endl;
    cout<<"Nila X2="<<x2<<endl;
}
