// Variable Sized Fixed Window 
void fn(string& s){
    // O(n^3)
    fr(s.size()){
        for(int j=i;j<s.size();j++) cout<<s.substr(i,j-i+1);
    }

    // O(n^2)
    fr(s.size()){
        string substr;
        for(int j=i;j<s.size();j++){
            substr+=s[j];
            cout<<substr<<endl;
        }
    }
}

