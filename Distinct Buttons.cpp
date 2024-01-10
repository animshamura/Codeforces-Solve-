#include<bits/stdc++.h>
using namespace std;
 
int t,n;
 
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int a,b,c,d; a=b=c=d=0;
		for(int i=1,x,y;i<=n;i++){
			cin>>x>>y;
			if(y>0) a++; if(x>0) c++;
			if(y<0) b++; if(x<0) d++;
		}
		cout<<(a*b*c*d?"NO\n":"YES\n");
	}
	return 0;
}
