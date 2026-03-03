#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = n; i > 0; --i){
        int j = i;
        while(j > 0){
            cout<<"*";
            j--;
        }
        cout<<endl;
    }
}