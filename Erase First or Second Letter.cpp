#include<bits/stdc++.h>
using namespace std;
int t, ans;
string s;
int main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n>>s;
		ans=0;
		set<char> st;
		for(char x : s) 
        st.insert(x);
        ans+=st.size();
	  cout<<ans<<endl;
	}
	return 0;
}
