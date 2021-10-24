#include <iostream>

using namespace std;

int main()
{
    int tugas,absen,uts,uas;
    float nilai;
    char nilai_hurup;

    cout<<"Input nilai absen ?";cin>>absen;
    cout<<"Input nilai Tugas ?";cin>>tugas;
    cout<<"Input nilai UTS ?";cin>>uts;
    cout<<"Input nilai UAS ?";cin>>uas;


    nilai=(0.4*absen)+(0.1*tugas)+(0.2*uts)+(0.3*uas);
    
    if(nilai>=85)
        nilai_hurup='A';
    else if(nilai>=75)
        nilai_hurup='B';
    else if(nilai>=50)
        nilai_hurup='C';
    else if(nilai>=40)
        nilai_hurup='D';
    else
        nilai_hurup='E';       

    cout<<"Nilai angka :"<<nilai<<" Nilai Hurup :"<<nilai_hurup; 
    cout<<endl;
    return 0;
}