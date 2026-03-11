#include<iostream>
#include<array>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin>>arr[i];
    }
    int minimum = arr[0]; int count = 0;
    for (int i = 0; i < n; ++i){
        int j = arr[i];
        if (minimum > j){
            minimum = j;
        }
    }

    for (int i = 0; i < n; ++i){
        if (minimum == arr[i]){
            count++;
        }
    }
    if (count % 2 == 0){
        cout<<"Unlucky";
    }else{
        cout<<"Lucky";
    }
}
