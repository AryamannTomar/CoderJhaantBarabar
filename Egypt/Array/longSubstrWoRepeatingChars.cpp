// O(n^3)
int lengthLongestSubstring(string s){
    int res=0, n=s.size();
    fr(n){
        for(int j=i;j<n;j++){
            bool vis[256]{}, ok=true;
            for(int pos=i;ok&&pos<=j;j++){
                if(vis[s[pos]]) ok=false;
                vis[s[pos]]=true;
            }
            if(ok) res=max(res,j-i+1);
        }
    }
    return res;
}   

int lenOfLongestSubstring_v1(string s){
    int res=0,n=s.size();
    unordered_map<char, int> last_visited;
    for(int i=0,j=0;j<n;j++){
        if(last_visited.count(s[j])){
            int next_i=last_visited[s[j]]+1;
            for(;i<next_i;i++) last_visited.erase(s[j]);
        }
        res=max(res,j-i+1);
        last_visited[s[j]]=j;
    }
    return res;
}

/*
Not Including Bad Enteries in the Hash Table
    - It is Before the start (outdated enteries) Will not affect
    - After the start (part of our active window) Will consider it
*/
int lenOfLongestSubstring_v2(string s){
    int res=0,n=s.size();
    unordered_map<char, int> last_visited;
    for(int i=0,j=0;j<n;j++){
        if(last_visited.count(s[j])){
            i=max(i,last_visited[s[j]]+1);
        }
        res=max(res,j-i+1);
        last_visited[s[j]]=j;
    }
    return res;
}