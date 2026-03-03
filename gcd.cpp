#include<iostream>
using namespace std;
int main(){
    int a,b,gcd;
    cin>>a>>b;
    while(b != 0){
        gcd = a % b;
        a = b;
        b = gcd;

    }
    cout<<a;
}