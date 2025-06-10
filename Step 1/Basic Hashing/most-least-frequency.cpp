#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,4,6,7,7,6,2,2,3,4,7,8,1,3,3,6,2};
    map<int, int> mpp;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        mpp[arr[i]]++;
    }

    pair<int, int> max = {0, INT16_MIN};
    pair<int, int> min = {0, INT16_MAX};
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
        if(it.second>max.second){
            max.first = it.first;
            max.second = it.second;
        }
        if(it.second<min.second){
            min.first = it.first;
            min.second = it.second;
        }
    }
    cout << "Maximum Frequency" << endl;
    cout << "Element: " << max.first << " " << "Frequency: " << max.second << endl;
    cout << "Minimum Frequency" << endl;
    cout << "Element: " << min.first << " " << "Frequency: " << min.second << endl;
}