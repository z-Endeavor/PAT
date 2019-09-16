#include <iostream>
using namespace std;

int main(){
	int k, N, n = 0;
	double a, s[1005] = {0};
	cin>>k;
	for (int i=0; i<k; i++) {
		cin>>N>>a;
		s[N] += a;
	}
	cin>>k;
	for (int i=0; i<k; i++) {
		cin>>N>>a;
		s[N] += a;
	}
	for (int i=0; i<=1000; i++) {
		if(s[i] != 0) n++;
	}
	cout<<n;
	for(int i=1000; i>=0; i--){
		if(s[i] != 0) printf(" %d %.1f", i, s[i]); 
	}
	return 0;
}
