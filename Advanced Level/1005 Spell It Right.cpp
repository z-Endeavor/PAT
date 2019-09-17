#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main(){
    string n;
    int sum = 0;
    cin>>n;
    for (int i=0; i<n.length(); i++) {
        sum += (n[i] - '0');
    }
    if (sum == 0) {
        printf("zero");
        return 0;
    }
    while (sum > 0) {
        s.push(sum%10);
        sum /= 10;
    }
    while (!s.empty()){
        switch(s.top()) {
            case 0:
                printf("zero%s", s.size() == 1 ? "" : " ");
                break;
            case 1:
                printf("one%s", s.size() == 1 ? "" : " ");
                break;
            case 2:
                printf("two%s", s.size() == 1 ? "" : " ");
                break;
            case 3:
                printf("three%s", s.size() == 1 ? "" : " ");
                break;
            case 4:
                printf("four%s", s.size() == 1 ? "" : " ");
                break;
            case 5:
                printf("five%s", s.size() == 1 ? "" : " ");
                break;
            case 6:
                printf("six%s", s.size() == 1 ? "" : " ");
                break;
            case 7:
                printf("seven%s", s.size() == 1 ? "" : " ");
                break;
            case 8:
                printf("eight%s", s.size() == 1 ? "" : " ");
                break;
            case 9:
                printf("nine%s", s.size() == 1 ? "" : " ");
                break;
        }
        s.pop();
    }
    return 0;
}
