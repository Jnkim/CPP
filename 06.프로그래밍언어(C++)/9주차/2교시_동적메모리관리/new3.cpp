#include <iostream>
using namespace std;

int main(){
	int *pt = new int[10];
	*pt = 123;
	
	cout << "pt �ּ� : "<< pt << endl;
	cout << "pt �ּ� : "<< static_cast<void *>(pt) << endl; // ����� ����ȯ (������������ �����͸� ��������� ���� ������ �ֵ��� ����ȯ) 
	cout << "pt = "<< *pt << endl;
	  
	delete[] pt;  // ����� ���� �޸𸮸� ���� �Ѵ�. 
	
	return 0; 
}
