#include<bits/stdc++.h>
using namespace std;

#define fr(n)          for(int i=0;i<n;i++)
#define fr1(a,b)       for(int i=a;i<b;i++)
#define fr2(i,a,b)     for(int i=a;i<b;i++)

void direction(char* s, int n){
    pair<int,int> p={0,0};    
    fr(n){
			if(s[i]=='N') p.first++;
			else if(s[i]=='S') p.first--;
			else if(s[i]=='E') p.second++;
			else p.second--;
		}

		while(p.first!=0){
			if(p.first>0){cout<<'N';p.first--;}
			if(p.first<0){cout<<'S';p.first++;}
		}

		while(p.second!=0){
			if(p.second>0){cout<<'E';p.second--;}
			if(p.second<0){cout<<'W';p.second++;}
		}
}

int main(){		
		char s[100]="SNNNEWE";
        direction(s,strlen(s));
}