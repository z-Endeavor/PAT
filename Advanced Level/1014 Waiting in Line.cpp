#include <bits/stdc++.h>
using namespace std;
int nowTime = 0;
int closeTime = (17-8)*60;
struct customer{
	int id;
	int pocessingTime;
	int totalTime;
	customer():totalTime(-1){}
}customers[1005];
queue<customer> line[22], behindLine; //�ֱ����ÿ�����ڵĶ��кͻ��ߺ�Ķ��� 
int lastTime[22] = {0}; //ÿֻ���еĳ���ʱ�� 

int main() {
	int N, M, K, Q;
	cin>>N>>M>>K>>Q;
	int isFull = N*M;
	for(int i=1; i<=K; i++) {
		cin>>customers[i].pocessingTime;
		customers[i].id = i;
		if (i <= isFull) {
			line[(i - 1) % N + 1].push(customers[i]); // ʹ�����1��ʼ�� 
		} else {
			behindLine.push(customers[i]);
		}
	}
	int cntC = K;
	while (nowTime < closeTime && cntC) {
		nowTime++;
		for (int i=1; i<=N; i++) {
			if (!line[i].empty()) {
				int doneTime = line[i].front().pocessingTime + lastTime[i];
				int id = line[i].front().id;
				if ((doneTime > closeTime || doneTime == nowTime) && lastTime[i] < nowTime) {
					customers[id].totalTime = doneTime;
					//line[i].front().totalTime = doneTime;  //Ϊʲô���У��� 
					lastTime[i] = doneTime;
					line[i].pop();
					cntC--;
					if(behindLine.size()) {
						line[i].push(behindLine.front());
						behindLine.pop();
					}
				} else if(lastTime[i] >= nowTime) {
					line[i].pop();
					cntC--;
					if(behindLine.size()) {
						line[i].push(behindLine.front());
						behindLine.pop();
					}
				}
			} 
		}
	}
	int cus;
	for (int i=0; i<Q; i++) {
		cin>>cus;
		if (customers[cus].totalTime != -1) {
			printf("%02d:%02d\n", 8 + customers[cus].totalTime / 60, customers[cus].totalTime % 60);
		} else {
			printf("Sorry\n");
		}
	}
	return 0;
}
