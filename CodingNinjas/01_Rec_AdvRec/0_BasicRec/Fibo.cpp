#include<bits/stdc++.h>
using namespace std;

/*
Returns nth Fibo Number 
0 1 1 2 ....
Input: 2
Output: 1
*/

int fib(int n){
    if(n==0 || n==1) return n;
    int nth = fib(n-1)+fib(n-2);
    return nth;
}