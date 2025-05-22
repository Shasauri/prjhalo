#include <iostream>
using namespace std;

int main(){
    char nama[5][20];
    int i;

    for(i=0;i<5;i++){
        cout<<"Masukkan nama"<<i+1<<" =";
        cin>>nama[i];
    }

    for(i=0;i<5;i++){
        cout<<endl<<"Nama = "<<nama[i];
    }
    return 0;
}