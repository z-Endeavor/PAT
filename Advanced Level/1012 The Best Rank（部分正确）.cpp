#include <bits/stdc++.h>
using namespace std;

struct student{
	int id;
	int cGrade;
	int mGrade;
	int eGrade;
	int aGrade;
	int cRank;
	int mRank;
	int eRank;
	int aRank;
}stus[2005];

int main(){
	int N, M, stuID[2005], flag = 0;
	cin>>N>>M;
	for (int i=0; i<N; i++) {
		cin>>stus[i].id>>stus[i].cGrade>>stus[i].mGrade>>stus[i].eGrade;
		stus[i].aGrade = (stus[i].cGrade + stus[i].mGrade + stus[i].eGrade) / 3;
	}
	for (int i=0; i<N-1; i++) {
		for (int j=0; j<N-1-i; j++) {
			if (stus[j].aGrade < stus[j+1].aGrade) swap(stus[j], stus[j+1]);
			if (j+1 == N-1-i) stus[j+1].aRank = N-i;
		}
		if (i == N-2) stus[0].aRank = 1;
	}
	for (int i=0; i<N; i++) {
		for (int j=i+1; j<N; j++) {
			if (stus[i].cGrade < stus[j].cGrade) swap(stus[i], stus[j]); 
		}
		stus[i].cRank = i+1;
	}
	for (int i=0; i<N-1; i++) {
		for(int j=0; j<N-1-i; j++) {
			if (stus[j].mGrade < stus[j+1].mGrade) swap(stus[j], stus[j+1]);
			if (j+1 == N-1-i) stus[j+1].mRank = N-i;
		}
		if (i == N-2) stus[0].mRank = 1;
	}
	for (int i=0; i<N; i++) {
		for (int j=i+1; j<N; j++) {
			if (stus[i].eGrade < stus[j].eGrade) swap(stus[i], stus[j]); 
		}
		stus[i].eRank = i+1;
	}
	for (int i=0; i<M; i++) {
		cin>>stuID[i];
	}
	for (int i=0; i<M; i++) {
		flag = 0;
		for(int j=0; j<N; j++) {
			if (stus[j].id == stuID[i]) {
				if (stus[j].aRank <= stus[j].cRank && stus[j].aRank <= stus[j].mRank && stus[j].aRank <= stus[j].eRank) cout<<stus[j].aRank<<" A"<<endl;
				else if (stus[j].cRank < stus[j].aRank && stus[j].cRank <= stus[j].mRank && stus[j].cRank <= stus[j].eRank) cout<<stus[j].cRank<<" C"<<endl;
				else if (stus[j].mRank < stus[j].aRank && stus[j].mRank < stus[j].cRank && stus[j].mRank <= stus[j].eRank) cout<<stus[j].mRank<<" M"<<endl;
				else if (stus[j].eRank < stus[j].aRank && stus[j].eRank < stus[j].cRank && stus[j].eRank < stus[j].mRank) cout<<stus[j].eRank<<" E"<<endl;
				flag = 1;
			}
		}
		if (!flag) cout<<"N/A"<<endl;
	}
	return 0;
}
