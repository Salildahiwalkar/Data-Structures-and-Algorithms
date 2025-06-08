#include <bits/stdc++.h>
using namespace std;

void f1(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    f1(i-1, sum+i);
}
int f2(int n){
    if(n==0) return 0;
    return n+ f2(n-1);
}
void fact1(int i, int prod){
    if(i<1){
        cout << prod;
        return;
    }
    fact1(i-1, prod*i);
}
int fact2(int n){
    if(n==1) return 1;
    return n*fact2(n-1);
}
int main(){
    // Sum of first N numbers
    // Parameterised and Functional Methods
    // Parameterised way
    f1(3, 0); // just prints the value
    cout << endl;

    // Functional way - when you want your functions to return something
    cout << f2(3) << endl;;

    // factorial 
    // parameterized
    fact1(4, 1);
    cout << endl;

    // functional
    cout << fact2(4);
}