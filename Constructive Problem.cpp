#include <bits/stdc++.h>
using namespace std;  
int main(){
    int N;
    cin >> N;
    if (N <= 3) cout << -1 << endl;
    else if (N == 4) cout << "2 0 2 0" << endl;
    else if (N == 5) cout << "2 1 2 0 0" << endl;
    else if (N == 6) cout << -1 << endl;
    else {
        for (int i = 0; i < N; i++) {        
            if (i == 0) cout << N - 4;
            else if (i == 1) cout << " " << 2;
            else if (i == 2) cout << " " << 1;
            else if (i == N - 4) cout << " " << 1;
            else cout << " 0";
        }
        cout << endl;
    }
     
    return 0;
}
