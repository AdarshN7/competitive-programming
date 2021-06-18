 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
int n;
cin>>n;
string s;
cin>>s;
unordered_map<char,int> mp;
for(int i=0;i<n;i++){
	mp[s[i]]+=1;
}

if(mp['H']==mp['V']){
	cout<<"Friendship"<<endl;
	return;
}
mp['H']>mp['V']?cout<<"Harshit"<<endl:cout<<"Virat"<<endl;


} 



int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE     
freopen("error.txt", "w", stderr); 
#endif 
  
    int t = 1; 
    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
} 

 