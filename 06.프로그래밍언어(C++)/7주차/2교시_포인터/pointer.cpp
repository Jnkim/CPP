#include <iostream>
using namespace std;

int main(){
	int x = 100;
	cout << "x�� �޸� ���۹���: " << &x << endl;
	
	int *pt; 
	cout << "pt�� �޸� ���۹���: " << pt << endl; 
	
	pt = &x;
	
	cout << "x�� �޸� ���۹��� : " << pt << endl; 
	cout << "pt�� �޸� ���۹��� : " << &pt << endl;
	cout << "pt�� ����Ű�� �޸𸮹����� ����� ������ : " << *pt << endl;
	
	return 0; 
}
