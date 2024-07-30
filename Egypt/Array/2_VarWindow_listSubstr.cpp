void listSubstrings(string& s){
    int n=s.size();
    // fr(n) fr2(j,i,n) cout<<s.substr(i,j-i+1);
    fr(n){
        string substr;
        fr2(j,i,n){
            substr+=s[j];
            cout<<substr<<endl;
        }
    }
}