#include<bits/stdc++.h>
using namespace std;

/*
Returns Converted Integer from a String
Input: 1234
Output: 1234
*/

int StringToInt(string &s, int ind){
    if(ind<0) return 0;
    int num = (s[ind]-'0');
    int ans = num + 10*StringToInt(s,ind-1);
    return ans;
}