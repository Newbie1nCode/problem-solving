#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        long long arr[105];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        long long smallest = arr[0] + arr[1] + (1 - 0);
        for(int i = 0; i < N-1; i++){
            for(int j = i + 1; j < N; j++){
                long long q = arr[i] + arr[j] + (j - i);
                if(q < smallest){
                    smallest = q;
                }
            }
        }

        cout << smallest << endl;
    }
}
