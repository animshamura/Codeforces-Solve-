#include <bits/stdc++.h>
using namespace std;
int n,c[1000],mx = INT_MIN;
string s[1000];
map<string,int> a,b;
int main(){
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> s[i] >> c[i];
		a[s[i]] += c[i];
	}
	for (int i = 0;i < n;i++) mx = max(mx,a[s[i]]);
	for (int i = 0;i < n;i++){
		b[s[i]] += c[i];
		if (b[s[i]] >= mx && a[s[i]] == mx){
			cout << s[i];
			break;
		}
	}
	return 0;
}
