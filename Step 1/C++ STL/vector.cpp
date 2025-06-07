#include <bits/stdc++.h>
using namespace std;

int main(){
    /*Vectors in STL are basically dynamic arrays that have 
    the ability to change size whenever elements are added 
    or deleted from them. Vector elements can be easily accessed
    and traversed using iterators. A vector stores elements in 
    contiguous memory locations.*/

    vector<int> v;  // creates an empty container v looks like {}

    v.push_back(1); // adds 1 to last of empty container so v looks like {1}
    v.emplace_back(2); // similar to push_back but faster

    // we can define vector of pair
    vector<pair<int, int>> vec;
    
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);  // difference between syntax no need to put it in curly braces
                             // will directly assume it to be pair
    
    vector<int> vect(5, 100); // creates a vector of size 5 filled with 100 the vector will look like
                              // vect = {100, 100, 100, 100, 100}

    vector<int> v(5); // this will create vetor of size 5 filled with garbage value or 0

    vector<int> v1(5, 20);
    vector<int> v2(v1); // creates a copy of v1 

    // accessing elements in vector
    // can access it like array
    cout << v[0] << " " << v.at(0);  // v.at(n) is similar but no one really uses it

    // another method is using iterator
    vector<int> :: iterator it = v.begin(); // syntax, 'it' is name, v.begin points to the address of first element not element itself
    // it will print address to print element we will use *
    it++; // will point to address of next element
    cout << *(it) << endl;

    it = it + 2;
    cout << *(it) << endl;

    vector<int> :: iterator it = v.end(); // points to address right after the last element not to last element

    // reverse iterators (not asked just for knowlege) - math logic operates in reverse logic
    vector<int> :: iterator it = v.rend(); // reverse end so now it will reverse vector ex. vect = {10, 20, 30} end becomes 10 so will point right after 10

    vector<int> :: iterator it = v.rbegin(); // reverses array and points to first element  

    cout << v.back() << endl; // points to last element

    for(vector<int> :: iterator it = v.begin(); it !=v.end(); it++){
        cout << *(it) << endl;
    }
    // to reduce the writting we can use auto - automatically assigns datatype to any element
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << endl;
    }

    // or using for each loop 
    for(auto it : v){                 // not an iterator
        cout << it << endl; 
    }

    // {10, 20, 12, 23}
    v.erase(v.begin()+1);  // removes 20

    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4); // {10, 20, 35} [start, end) - removes element till end-1

    // insert function
    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin()+1, 2, 5); // {300, 5, 5, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // copies whole vector to v {50, 50, 300, 5, 5, 100, 100}

    // {10, 20}
    cout << v.size() << endl; // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 = {10, 20}
    // v2 = {30, 40}
    v1.swap(v2); // v1 = {30, 40} v2 ={10 , 20}

    v1.clear(); // erases entire vector

    cout << v1.empty(); // boolean function telling if vector is empty or not
    

}