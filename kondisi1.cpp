#include <iostream>

using namespace std;

int main()
{
    int a;

    cout<<"Masukan sembarang bilangan ? "; cin>>a;
  
    if(a> 0){
        cout<<"Bilangan "<<a<<" adalah bilangan Positif"<<endl;
    }else if(a<0){
        cout<<"Bilangan "<<a<<" adalah bilangan Negatif"<<endl;
    }else{
        cout<<"Bilangan "<<a<<" adalah bilangan Nol"<<endl;
    }
    return 0;
}
  
  
  