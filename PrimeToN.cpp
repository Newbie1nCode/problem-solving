#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 2; i <= a; ++i){
        bool isPrima = true;
        for (int x = 2; x < sqrt(i); ++x){
            if (i % x == 0){
                isPrima = false;
                break;
            }
        }
        if (isPrima){
            cout<<i<<" ";
        }
    }
}