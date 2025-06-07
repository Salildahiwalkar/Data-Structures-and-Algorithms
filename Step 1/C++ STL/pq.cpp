#include <bits/stdc++.h>
using namespace std;

int main(){
    // queue where biggest element will always be first/top
    priority_queue <int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}
    // also called maximmum heap

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others

    // for top element to be minimum
    // also called Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);  // {5}
    pq.push(2);  // {2, 5}
    pq.push(8);  // {2, 5, 8}
    pq.emplace(10);  // {2, 5, 8, 10}

    cout << pq.top(); // prints 2

}