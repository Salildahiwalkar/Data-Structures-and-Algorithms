#include <bits/stdc++.h>
using namespace std;

int main(){
    // exactly similar to vector but also gives front operation, also dynamic in nature
    list<int> ls;
    ls.push_back(1); // {1}
    ls.emplace_back(3); // {1, 3}

    ls.push_front(5); // {5, 1, 3} in vector u needed to use insert which is costly according to time complexity
    // vector singly linked list, list doubly linked list therefor faster
    ls.emplace_front(10); //{10, 5, 1, 3}

    // rest functions similar to vector
    // begin, end , rend, rbegin, clear, insert, size, swap
}