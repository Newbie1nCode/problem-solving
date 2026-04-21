#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> freq;

    int arr[] = {4, 5, 6, 4, 7, 5, 4};
    int n = 7;
    for (int i = 0; i < n; ++i){
        freq[arr[i]]++;
    }
    for(auto x : freq){
        cout<<x.first<< " muncul "<<x.second <<" kali"<<endl;
    }
}
