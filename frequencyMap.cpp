#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> freq;
    int arr[] = {1, 2, 1, 3, 2, 1};

    for (int i = 0; i < 6; ++i){
        freq[arr[i]]++;
    }
    for(auto x : freq){
        if (x.second > 1){
            cout<<x.first<<endl;
        }
    }
}
