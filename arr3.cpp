#include <iostream>

using namespace std;

int main()
{
    int arrNilai[5];
    int i,jumNilai;
    float avgNilai;

    cout<<"Mengghitung Nilai rata-rata "<<endl;

    //Input data nilai mahasiswa
    //Masukan nilai mahasiswa ke-1 ? 60
    
    jumNilai=0;

    for(i=0;i<5;i++){
        cout<<"Masukan nilai mahasiswa ke-"<<i+1<<"?";cin>>arrNilai[i];
        jumNilai =jumNilai+arrNilai[i];
    }

    avgNilai=(float)jumNilai/5;

    cout<<"Jumlah Nilai Mahasiswa adalah : "<<jumNilai<<endl;
    cout<<"Rata-rata nilai mahasiswa adalah : "<<avgNilai<<endl;


    int x_cari;
    bool found=false;
    
    cout<<"Masukan nilai yang akan dicari?";cin>>x_cari;
    i=0;
    
    while((i<5)&&(!found)){
       if (arrNilai[i]==x_cari)
          found=true;  
       else
          i=i+1;      
    }

    if(found)
        cout<<"Nilai "<<x_cari<<" ditemukan pada index ke-"<<i<<endl;
    else
        cout<<"Nilai "<<x_cari<<" tidak ditemukan"<<endl;


    return 0;
}
