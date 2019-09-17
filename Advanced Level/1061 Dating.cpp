#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2, s3 ,s4;
	int len, week, hour, min;
	bool flag = false;
	cin>>s1>>s2>>s3>>s4;
	len = s1.length() < s2.length() ? s1.length() : s2.length();
	for (int i=0; i<len; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'G' && s1[i] == s2[i] && flag == false) {
			week = s1[i] -'A';
			flag = true;
		} else if (s1[i] == s2[i] && flag == true) {
			if (s1[i] >= '0' && s1[i] <= '9') {
				hour = s1[i] - '0';
				break;
			} else if (s1[i] >= 'A' && s1[i] <= 'N') {
				hour = s1[i] - 'A' + 10;
				break;
			}
		}
	}
	len = s3.length() < s4.length() ? s3.length() : s4.length();
	for (int i=0; i<len; i++) {
		if ((s3[i] >= 'A' && s3[i] <= 'Z' && s3[i] == s4[i]) || (s3[i] >= 'a' && s3[i] <= 'z' && s3[i] == s4[i])) {
			min = i;
			break;
		}
	}
	switch(week) {
		case 0: printf("MON %02d:%02d", hour, min); break;
		case 1: printf("TUE %02d:%02d", hour, min); break;
		case 2: printf("WED %02d:%02d", hour, min); break;
		case 3: printf("THU %02d:%02d", hour, min); break;
		case 4: printf("FRI %02d:%02d", hour, min); break;
		case 5: printf("SAT %02d:%02d", hour, min); break;
		case 6: printf("SUN %02d:%02d", hour, min); break;
		default:;
	}
	return 0;
} 
