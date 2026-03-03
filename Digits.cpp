#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 1; i <= a; ++i){
        long long j;
        cin>>j;
        if (j == 0){
            cout<<0;
        }else{
            while(j > 0){
            int digit = j % 10; //ambil digit teerakhir
            cout<<digit<<" ";
            j/=10;  //hapus digit terakhir
        }
        }
        cout<<endl;
    }
}