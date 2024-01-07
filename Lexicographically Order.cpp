#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int main() {
    cin >> n >> m >> s;
    if (s[n - 1] == 'a')  s = s.substr(0, n - 1);
    else {
        char c = s[n - 1];
        c--;
        s = s.substr(0, n - 1);
        s += c;
        while (n < m)  s += "z", n++;
    }
    cout << s << endl;
    return 0;
}
