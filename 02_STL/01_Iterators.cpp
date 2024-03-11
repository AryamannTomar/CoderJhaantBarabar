#include<bits/stdc++.h>
using namespace std;

/*
arr.begin()
arr.end()
*/

int main(){
    vector<int> arr={1,2,3,4};
    for(vector<int>::iterator itr=arr.begin();itr!=arr.end();itr++){
        cout<<&itr<<" ";
    }
    return 0;
}