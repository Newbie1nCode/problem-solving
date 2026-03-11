#include<iostream>
#include<array>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; ++i){
        cin>>arr[i];
    }
    int min = 0; int p = arr[0];
    int max = 0; int q = arr[0];
    for (int i = 0; i < a; ++i){
        if (arr[i] < p){
            p = arr[i];
            min = i;
        }else if(arr[i] > q){
            q = arr[i];
            max = i;
        }
    }
    int k = arr[min];
    arr[min] = arr[max];
    arr[max] = k;
    for (int i = 0; i < a; ++i){
        cout<<arr[i]<<" ";
    }
}
