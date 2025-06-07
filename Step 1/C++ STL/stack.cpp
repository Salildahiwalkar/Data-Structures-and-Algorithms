#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(4); // {5, 3, 3, 2, 1}

    cout << st.top(); // prints 5 - indexing access is not allowed we can only use 3 functions pop push and top
                      // therefore st[2] is invalid

    st.pop(); // removes 5, {3, 3, 2, 1}

    cout << st.top(); //{3}

    cout <<  st.size(); // 4

    cout << st.empty(); 

    stack <int> st1, st2;
    st1. swap(st2);


}