#include<iostream>
using namespace std;
int main(){
    char s; int n;
    cin>>s;
    cin>>n;
    for (int i = 1; i <= n; ++i){
        int x; int j = 1;
        cin>>x;
        while(j <= x){
            cout<<s;
            j++;
        }
        cout<<endl;
    }
}