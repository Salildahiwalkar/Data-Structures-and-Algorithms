#include <bits/stdc++.h>
using namespace std;

int main(){
    // everything is same as set
    // only difference is allow storing of duplicate element    - only sorted 
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1, 1}
    ms.insert(1); //{1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); // count number of appearance 

    // only a single 1 is erased
    ms.erase(ms.find(1));

    // if we want to erase multiple 1 
    // {1, 1, 1}
    // st     end  
    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all functions same as set
    
}