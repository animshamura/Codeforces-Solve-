#import<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,n,m;
int main(){
	cin>>t;
	while(t--){
		ll res=0,k=0;
		cin>>n;
		for(ll i=1,a;i<=n;i++){
			cin>>a;
			res+=a;
			if(a%2) k++;
			cout<<res-k/3-(k%3==1&&i!=1)<<" ";
		}
		cout<<endl;
	} 
}
