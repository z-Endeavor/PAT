// ������ѭ���ᵼ�³�ʱ
// ���ü�¼���ֵ����Сֵ�ֱ����������ж� 
#include <bits/stdc++.h>
using namespace std;

int a[100005];
int main(){
	int N, cnt, flag[100005] = {0}, n=0;
	cin>>N;
	cnt = N;
	for (int i=0; i<N; i++) cin>>a[i];
	int max = a[0];
	for (int i=1; i<N; i++) {
		if (a[i] < max) {
			flag[i] = 1;
		} else {
			max = a[i];
		}
	}
	int min = a[N-1];
	for (int i=N-2; i>=0; i--) {
		if (a[i] > min) {
			flag[i] = 1;
		} else {
			min = a[i];
		}
	}
	for (int i=0; i<N; i++) {
		if(flag[i]) cnt--;
	}
	cout<<cnt<<endl;
	for (int i=0; i<N; i++) {
		if (!flag[i]) {
			printf("%s%d", n==0 ? "" : " ", a[i]);
			n++;
		}
	}
	cout<<endl;  // ��Ŀ�Ĳ��Ե㣬��Ŀû˵�� 
	return 0;
}
