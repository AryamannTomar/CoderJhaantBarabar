#include<bits/stdc++.h>
using namespace std;

/*
Returns Sum of a Digits of a number 
Input: 1234
Output: 10
*/

int sumOfDigits(int num){
    if(num==0) return 0;
    return (num%10)+sumOfDigits(num/10);
}

int main() {
    int num;
    cin>>num;
    cout<<sumOfDigits(num);    
    return 0;
}