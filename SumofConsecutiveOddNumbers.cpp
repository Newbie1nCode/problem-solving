#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    for (int i = 1; i <= k; ++i){
        int n,m;
        cin>>n>>m;
        int min = n;
        int max = m;
        if (min > max){
            min = m;
            max = n;
        }
        int j = 0;;
        while(min < max){
            min++;
            if (min % 2 != 0 && min != max){
                j+=min;
            }
            
        }
        cout<<j<<endl;
    }
}
