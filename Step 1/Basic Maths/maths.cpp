#include <bits/stdc++.h>
using namespace std;

int countDigit1(int n){
    int cnt = 0;
    while(n>0){
        cnt += 1;
        n /= 10;
    }
    return cnt;
}
int countDigit2(int n){
    int cnt = int(log10(n)+1);
    return cnt;
}
int reverseNumber(int n){
    int rev = 0;
	while(n>0){
		int lastdigit = n % 10;
		rev = rev * 10 + lastdigit;
		n /= 10;
	}
	return rev;
}
bool isPalindrome(int x){
    if(x < 0) return false;
    int dup = x;
    int rev = 0;
    while(dup != 0){
        int ld = dup % 10;
        rev = rev * 10 + ld;
        dup /= 10;
    }
    if(x == rev) return true;
    return false;
}
bool isArmstrong(int num) {
    int dup = num;
    int k = countDigit2(num);
    int sum = 0;
    while(dup != 0){
        int ld = dup % 10;
        sum = sum + pow(ld, k);
        dup /= 10;
    }
    return sum == num; 
}
int* printDivisors(int n, int &size){
    vector<int> ls;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            ls.push_back(i);
            if(n/i != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());  
    size = ls.size();
    int* ans = new int[size];
    for (int i = 0;i < size;i++) {
        ans[i]=ls[i];
    }
    return ans;
}
bool isPrime(int n)
{
	if(n<=1) return false;
	int cnt = 0;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			cnt++;
			if((n/i)!=i) cnt++;
		}	
	}
	if(cnt == 2) return true;
	else return false;
}
int findGcd(int x, int y)
{
    int gcd = 1;
    for(int i=2; i<= min(x, y); i++){
        if(x%i==0 && y%i==0) gcd=i;
    }
    return gcd;
}
// Euclidean Algorithm
int findGcd(int a, int b)
{
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
int main(){
    cout << "Basic Math Questions Striver DSA Sheet";
}