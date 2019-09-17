#include <bits/stdc++.h>
using namespace std;

int p[105];
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>p[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            int cnt = 0, cnt1 = 0, cnt2 = 0;
            for (int k=0; k<n; k++) {
                if (p[k] == i || p[k] == j || (p[k] < 0 && p[k] != -i && p[k] != -j)) {
                    cnt++;
                    if (k == i || k == j) {
                        cnt1++;
                    } else {
                        cnt2++;
                    }
                }
            }
            if (cnt == 2 && cnt1 == 1 && cnt2 == 1) {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    cout<<"No Solution";
    return 0;
}
