#include<bits/stdc++.h>
using namespace std;

/*
Returns array of next greater element of array  
Input:    9 10 2 3 4 
Output:   10 -1 3 4 -1   
*/

bool CheckSumPairs(int v[], int n, int div, int rem) {
    std::map<int,int> mp;
    for(int i=0; i<n; i++){
        int curr_rem = v[i]%div;
        if(curr_rem<0)
            curr_rem += div;
        mp[curr_rem]++;
    }

    for(int curr_rem=0; curr_rem<div; curr_rem++){
        if(mp[curr_rem] != 0){
            int other_rem = rem-curr_rem;
            if(other_rem<0)
                other_rem += div;
            if(curr_rem == other_rem){
                if(mp[curr_rem]%2!=0) return 0;
            }
            if(mp[curr_rem] != mp[other_rem]){
                return 0;
            }else{
                mp[other_rem] = 0;
            }
        }
    }
    return 1;
}