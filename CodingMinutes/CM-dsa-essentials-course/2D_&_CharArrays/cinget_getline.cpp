#include <bits/stdc++.h>
using namespace std;

int main(){
/*
    int len=0;
    char sentence[1000];
    char temp=cin.get();;
    while(temp!='#'){
        sentence[len++]=temp;
        temp=cin.get();
    }
    sentence[len]='\0';
    cout<<sentence;
*/
    char paragraph[1000];
    cin.getline(paragraph,100,'#');
    cout<<paragraph;
}   