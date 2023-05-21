# include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		int s=0,ans=0,i=0,ls;
		while(true){
		    i++;
		    s+=i;
		    if(s<=n) {if(i%4<=1) ans+=i;}
		    else break;
		
		}
	
		s-=i;;
		if(i%4<=1)ans+=n-s;
	   cout<<ans<<" "<<n-ans<<endl;
	}
	return 0;
}
