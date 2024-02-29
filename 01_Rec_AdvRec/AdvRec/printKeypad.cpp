#include<bits/stdc++.h>
using namespace std;

/*
Input: 23
Output: ad ae af bd be bf cd ce cf
*/

void printKeypadHelper(int num, string output, string options[10]){ 
    if(num == 0){ 
        cout<<output<<endl; 
        return; 
    } 
    int digit = num%10; 
    int i=0; 
    while(i<options[digit].length()){ 
        printKeypadHelper(num/10, options[digit][i]+output, options); 
        i++; 
    } 
    return; 
} 
        
void printKeypad(int num){ 
    string options[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 
    printKeypadHelper(num, "", options); 
    return; 
}

int main(){
    int n;
    cin>>n;
    printKeypad(n);    
    return 0;
}