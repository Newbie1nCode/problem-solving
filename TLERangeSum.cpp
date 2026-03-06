#include<iostream>
using namespace std;
int main(){
    int n,l,r;
    cin>>n;
    for (int i = 0; i < n; ++i){
        cin>>l>>r;
        long long sum = 0;
        while(l <= r){
            sum+=l;
            l++;
        }
        cout<<sum<<endl;
    }
}
