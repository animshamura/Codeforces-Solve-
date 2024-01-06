#include <iostream>
using namespace std;
int main()
{
	int a[200005],t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;int cnt=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]!=i&&a[i-1]==i-1)cnt++;
		}
		cout<<(cnt>2?2:cnt)<<endl;; 
	}
} 
