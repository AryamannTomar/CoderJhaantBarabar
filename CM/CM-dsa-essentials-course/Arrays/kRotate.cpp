#include <bits/stdc++.h>
using namespace std;

#define fr(n)          for(int i=0;i<n;i++)
#define fr1(a,b)       for(int i=a;i<b;i++)
#define fr2(i,a,b)     for(int i=a;i<b;i++)

/* My Solution O(Unknown) O(kn)
vector<int> rotate(vector<int> arr){
	int n=arr.size();
	vector<int> arr1(n+1);
	arr1[0]=arr[n-1];
	fr1(1,n) arr1[i]=arr[i-1];
	arr1.resize(n);
	return arr1;
}

vector<int> kRotate(vector<int> arr, int k){
    vector<int> res=arr;
	fr(k) res=rotate(res);
	return res;
}
*/

/*
Tip: Divide the array into n-k and k elements!
Better Solution InPlace 
*/
vector<int> kRotate(vector<int> arr, int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(),arr.begin()+n-k);
    reverse(arr.begin()+n-k,arr.end());
    reverse(arr.begin(),arr.end());
    return arr;
}

int main(){
		vector<int> arr={1, 3, 5, 7, 9}; 
		int n=arr.size();
		int k=2;

		vector<int> res=kRotate(arr,k);
		fr(n) cout<<res[i]<<" ";
}