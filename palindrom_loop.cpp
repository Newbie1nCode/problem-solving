#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ori = n;
    long long rev = 0;
    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n/=10; 
    }

    if (ori == rev){
        cout<<rev<<endl;
        cout<<"YES"<<endl;
    }else{
        cout<<rev<<endl;
        cout<<"NO"<<endl;
    }

}