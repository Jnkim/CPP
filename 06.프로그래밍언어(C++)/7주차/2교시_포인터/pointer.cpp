#include <iostream>
using namespace std;

int main(){
	int x = 100;
	cout << "x의 메모리 시작번지: " << &x << endl;
	
	int *pt; 
	cout << "pt의 메모리 시작번지: " << pt << endl; 
	
	pt = &x;
	
	cout << "x의 메모리 시작번지 : " << pt << endl; 
	cout << "pt의 메모리 시작번지 : " << &pt << endl;
	cout << "pt가 가리키는 메모리번지에 저장된 데이터 : " << *pt << endl;
	
	return 0; 
}
