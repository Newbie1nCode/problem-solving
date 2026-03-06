#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    while(n--){
        long long l,r;
        cin>>l>>r;

        if(l > r){
            swap(l,r);
        }

        long long sum = (r*(r+1))/2 - ((l-1)*l)/2;

        cout<<sum<<endl;
    }
}
