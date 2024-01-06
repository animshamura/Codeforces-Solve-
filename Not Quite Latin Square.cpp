#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	char c;
	cin>>t;
	while(t--){
		int sum = 3*('A'+'B'+'C')+'?';
		for(int i = 0; i < 9; ++i){ cin>>c; sum-=c;}
		cout<<(char)sum<<endl;
	}
}
