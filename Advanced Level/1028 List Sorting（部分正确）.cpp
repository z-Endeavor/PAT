// scanf, printf �� cin,cout Ҫ�죬��cin,cout �ᵼ�³�ʱ
// string������printf���ʱ��Ҫ�õ�c_str()������������ 
#include <bits/stdc++.h>
using namespace std;

struct student{
	string id;
	string name;
	int grade;
} stus[100005];

int main(){
	int N, C;
	cin>>N>>C;
	for (int i=0; i<N; i++) {
		cin>>stus[i].id>>stus[i].name>>stus[i].grade;
	}
	switch(C) {
		case 1:
			for(int i=0; i<N; i++) {
				for(int j=i+1; j<N; j++) {
					if (stus[i].id > stus[j].id) swap(stus[i], stus[j]);
				}
			}
			break;
		case 2:
			for (int i=0; i<N; i++) {
				for (int j=i+1; j<N; j++) {
					if (stus[i].name > stus[j].name || (stus[i].name == stus[j].name && stus[i].id > stus[j].id)) swap(stus[i], stus[j]);
				}
			}
			break;
		case 3:
			for (int i=0; i<N; i++) {
				for (int j=i+1; j<N; j++) {
					if (stus[i].grade > stus[j].grade || (stus[i].grade == stus[j].grade && stus[i].id > stus[j].id)) swap(stus[i], stus[j]);
				}
			}
			break;
		default:;
	}
	for (int i=0; i<N; i++) {
		cout<<stus[i].id<<" "<<stus[i].name<<" "<<stus[i].grade<<endl;
	}
	return 0;
}
