#include <iostream>
using namespace std;

int main(){
    char nama[5][20];
    int i;

    for(i=0;i<4;i++){
        cout<<"Masukkan data "<<i+1 <<"=";
        cin>>nama[i];
    }
    return 0;
}