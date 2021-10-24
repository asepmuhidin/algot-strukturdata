#include <iostream>

using namespace std;

int main()
{
    int tugas,absen,uts,uas;
    float nilai;

    cout<<"Input nilai absen ?";cin>>absen;
    cout<<"Input nilai Tugas ?";cin>>tugas;
    cout<<"Input nilai UTS ?";cin>>uts;
    cout<<"Input nilai UAS ?";cin>>uas;


    nilai=(0.4*absen)+(0.1*tugas)+(0.2*uts)+(0.3*uas);

    if (nilai>=50)
        cout<<"Nilai anda :"<<nilai<<" Anda Lulus";
    else
        cout<<"Nilai anda :"<<nilai<<" Anda Mengulang";

    cout<<endl;

    return 0;    
}

