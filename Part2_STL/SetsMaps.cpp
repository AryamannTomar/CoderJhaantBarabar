#include<bits/stdc++.h>
using namespace std;

/*

   Set                       |  Unordered_Set
  ==============================================
 - increasing Ordering       |    - No Ordering
 - Self Balancing BST        |    - Hash Table
                Search Insertion Deletion   
 - O(Log N)                  |    O(1) Worst O(N)              
*/

int main(){
    // Sets
    ////////////////////
    cout<<"Sets"<<endl;
    ///////////////////
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    int front=*s.begin();
    int back=*s.end();
    if(s.count(2)==0) cout<<"not present";
    else cout<<"present";
    cout<<endl;
    s.erase(s.begin());
    for(auto i: s){
        cout<<i<<" ";
    }

    ///////////////////
    cout<<"\n"<<"MultiSets"<<endl;
    ///////////////////

    // MultiSets
    multiset<int> ms; // Increasing Ordering
    multiset<int, greater<int>> ms2; // Decreasing Ordering
    ms.insert(1); 
    ms.insert(2);
    ms.insert(2);
    ms.erase(2);
    for(auto i: ms) cout<<i<<" "; 

    return 0;
}