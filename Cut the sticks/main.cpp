#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Cut the sticks
//https://www.hackerrank.com/challenges/cut-the-sticks

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<(arr.size()-i)<<endl;
        while(i<arr.size() && arr[i]==arr[i+1]){
            i++;
        }

    }

    return 0;
}
