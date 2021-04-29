/*
20361��
INU �ڵ��佺Ƽ�� 2020
�Ͽ�� �߹�����
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
	int n, x, k; //n:�� ����, x:���� ���� �� ��ȣ, k:k���� ��
	int a, b;		//�ٲ� �� ��ġ
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