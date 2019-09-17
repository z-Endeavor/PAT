#include <bits/stdc++.h>
using namespace std;

string user[1005], password[1005];
int r[1005] = {0};
int main() {
    int n, count = 0, flag = 0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>user[i]>>password[i];
    }
    for (int i=0; i<n; i++) {
        for(int j=0; j<password[i].length(); j++) {
            if (password[i][j] == '1' || password[i][j] == '0' || password[i][j] == 'l' || password[i][j] == 'O') {
                flag = 1;
                switch(password[i][j]) {
                    case '1':
                        password[i][j] = '@';
                        break;
                    case '0':
                        password[i][j] = '%';
                        break;
                    case 'l':
                        password[i][j] = 'L';
                        break;
                    case 'O':
                        password[i][j] = 'o';
                        break;
                    default:;
                }
            }
        }
        if (flag == 1) {
            r[i] = 1;
            count++;
            flag = 0;
        }
    }
    if (count != 0) {
        cout<<count<<endl;
        for (int i=0; i<n; i++) {
            if (r[i] == 1) {
            	count--;
            	cout<<user[i]<<" "<<password[i];
            	if (count != 0) cout<<endl;
			}
        }
        return 0;
    } else if (count == 0 && n == 1) cout<<"There is 1 account and no account is modified";
    else cout<<"There are "<<n<<" accounts and no account is modified";
    return 0;
}
