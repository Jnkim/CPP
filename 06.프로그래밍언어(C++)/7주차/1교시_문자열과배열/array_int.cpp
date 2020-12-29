#include <iostream>
using namespace std;

int main() {
  
	int a[5] = {6, 7, 8, 9, 10}; // 1차원 배열의 선언과
	// 초기값 지정
	for(int i = 0; i < 5; i++)
	cout << "a[" << i << "] = " << a[i] << endl;
	
	
	
	int b[5] = {6,}; // 1차원 배열의 선언과 
	for(int i = 0; i < 5; i++)
	cout << "b[" << i << "] = " << b[i] << endl;
	
	
	int c[5] = {6,}; // 1차원 배열의 선언과 
	for(int i = 0; i < 5; i++)
	cout << "c[" << i << "] = " << c[i] << endl;
	
	return 0;

}

