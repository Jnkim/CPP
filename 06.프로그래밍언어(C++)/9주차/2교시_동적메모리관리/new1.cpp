#include <iostream>
using namespace std;

int main(){
	int *pt = new int;
	cout << "pt �ּ� : "<< pt << endl;
	cout << "pt �ּ� : "<< static_cast<void *>(pt) << endl; // ����� ����ȯ (������������ �����͸� ��������� ���� ������ �ֵ��� ����ȯ) 
	
	*pt = 123;
	cout << *pt << endl;
	
	delete pt;  // ����� ���� �޸𸮸� ���� �Ѵ�. 
	
	//cout << "pt �ּ� : "<< pt << endl; // �׷��� �޸��� �ּҴ� �����ִµ�?? 
	//cout << "pt �� : "<< *pt << endl;  // �׷��� �޸��ּ��� ���� ����Ƴ�.. 
}
