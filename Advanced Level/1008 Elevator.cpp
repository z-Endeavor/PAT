#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, f = 0, time = 0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>m;
		if (m > f) time += (m-f)*6;
		else if(m < f) time += (f-m)*4;
		f = m;
	}
	time += 5 * n;
	cout<<time;
	return 0;
}
