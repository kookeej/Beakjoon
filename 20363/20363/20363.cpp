/*
20363번
inu 코드페스티벌 C
당근 키우기
*/
#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	int x, y;
	cin >> x >> y;
	if (x > y) {
		total = x + (y / 10) + y;
	}
	else {
		total = y + (x / 10) + x;
	}
	cout << total;
}