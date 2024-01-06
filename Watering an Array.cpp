#include<bits/stdc++.h>
using namespace std;
const int sz = 2e5+10;
int t,n,k,d;

int main(){
    int a[sz],v[sz];
	cin>>t;
	while(t--){
	    int ans,i,j,c,l;
		cin>>n>>k>>d;
		for(i=1; i<=n; i++) cin>>a[i];
		for(i=0; i<k; i++) cin>>v[i];
		ans=0;
		for(i=0;i<min(2*n+1,d);i++){
			j=i%k;
			c=0;
			for(l=1; l<=n; l++) if(a[l]==l) c++;
			ans=max(ans,c+(d-i-1)/2);
			for(l=1; l<=v[j]; l++) a[l]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
