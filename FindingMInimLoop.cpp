#include<iostream>
using namespace std;
int main(){
    int n,k,q;
    cin>>n>>k;
    for (int i = 1; i <= n; i+=k){
        int minim; int j = 0;

        while(j < k && i + j <= n){
            cin>>q;
            if (minim > q){
                minim = q;
            }else if (j == 0){
                minim = q;
            }            
            j++;
        }
        cout<<minim<<" ";
    }
}
