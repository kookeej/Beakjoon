/*
20361번
INU 코드페스티벌 2020
일우는 야바위꾼
*/

#include <iostream>
using namespace std;

class Cup {
	int is_ball;
public:
	Cup() { is_ball = 0; }
	void setIsBall(int is_ball) {
		this->is_ball = is_ball;
	}
	int getIsBall() { return is_ball; }
};

int main()
{
	int n, x, k; //n:컵 개수, x:공을 숨길 컵 번호, k:k개의 줄
	int a, b;		//바꿀 컵 위치
	int select = -1;
	cin >> n >> x >> k;

	Cup* cup = new Cup[n];
	int tmp;
	cup[x - 1].setIsBall(1);

	for (int i = 0; i < k; i++) {
		cin >> a >> b;		//1<=a,b<=n
		tmp = cup[a - 1].getIsBall();
		cup[a - 1].setIsBall(cup[b - 1].getIsBall());
		cup[b - 1].setIsBall(tmp);
	}

	for (int i = 0; i < n; i++) {
		if (cup[i].getIsBall() == 1) {
			select = i + 1;
			break;
		}
	}
	cout << select;
	delete[] cup;
}