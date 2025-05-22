#include <iostream>
using namespace std;

int main(){
    char nama[5][20];
    int i, banyakNama;
    cout<<"Berapa nama yang ingin diinput = ";
    cin>>banyakNama;

    for(i=0;i<banyakNama;i++){
        cout<<"Masukkan nama"<<i+1<<" =";
        cin>>nama[i];
    }

    for(i=0;i<banyakNama;i++){
        cout<<endl<<"Nama"<< i+1<< "="<<nama[i];
    }
    return 0;
}