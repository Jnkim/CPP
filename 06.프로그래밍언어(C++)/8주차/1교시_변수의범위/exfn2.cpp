#include <iostream>
using namespace std;

extern int y; // �ܺ� ���Ͽ��� ������ ������ ���� "Y" ����  

void data(int x) {
	y = y + 35;
	cout << "�ܺ� ���Ͽ��� ������ �ܺ� ���� y = "<< y << endl;
	x = 20;
}
