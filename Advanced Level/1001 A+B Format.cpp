#include <iostream>
#include <stack>
using namespace std;

stack<char> s;

int main(){
	int a, b, sum, count = 0, n = 0;
	cin>>a>>b;
	sum = a + b;
	if (sum == 0) {
		cout<<0;
		return 0;
	}
	if (sum < 0) {
		cout<<"-";
		sum = -sum;
	}
	while (sum > 0) {
		int c = sum%10 + '0';
		s.push(c);
		count++;
		if (count == 3) {
			s.push(',');
			count = 0;
		}
		sum /= 10;
	}
	while (!s.empty()) {
		if (n == 0 && s.top() == ',') {
			s.pop();
			n++;
			continue;
		}
		cout<<s.top();
		s.pop();
		n++;
	}
	return 0;
}
