#include <iostream>
using namespace std;

int main() {
  
	int a[5] = {6, 7, 8, 9, 10}; // 1���� �迭�� �����
	// �ʱⰪ ����
	for(int i = 0; i < 5; i++)
	cout << "a[" << i << "] = " << a[i] << endl;
	
	
	
	int b[5] = {6,}; // 1���� �迭�� ����� 
	for(int i = 0; i < 5; i++)
	cout << "b[" << i << "] = " << b[i] << endl;
	
	
	int c[5] = {6,}; // 1���� �迭�� ����� 
	for(int i = 0; i < 5; i++)
	cout << "c[" << i << "] = " << c[i] << endl;
	
	return 0;

}

