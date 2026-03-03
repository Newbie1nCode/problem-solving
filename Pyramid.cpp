#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i){
        int j = 0;
        while(i > j){
            cout<<"*";
            j++;
        }
        cout<<endl;
        j++;
    }
}