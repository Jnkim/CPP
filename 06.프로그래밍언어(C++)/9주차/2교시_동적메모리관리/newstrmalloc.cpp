#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(){
	string cppStyle;
	char *cStyle[2];
	char temp[256];
	
	cout << "���ڿ��� �Է��ϼ���! \n";
	cin.getline( temp , 256 ) ; // #include <stdlib.h> ���̺� �Ӹ� �ʿ� 
	
	cStyle[0] = (char *)malloc( strlen(temp) + 1 ); // �޸� �Ҵ�  (  #include <cstring> ���̺귯�� �ʿ�)
	
	strcpy( cStyle[0], temp);
	cout << cStyle[0] << endl;
	free(cStyle[0]);  // malloc���� �һ�� �޸𸮴� free�� �����Ѵ�. 
	
	cout << "���ڿ��� �Է��ϼ���! \n";
	getline ( cin , cppStyle );
	
	cout << cppStyle << endl;
	
	// ���� �Ҵ�� �޸𸮿� ������ ������ �迭
	long *pt = new long[10];
	*pt = 135792468;
	cout << "pt �ּ� = " << pt << endl;
	cout << "pt = " << *pt << endl;
	
	delete[] pt; // �޸𸮸� �����Ѵ�.
	pt = NULL;  // ������ �޸� ���� null�� �����Ѵ�. 
	
	// pt�� ������ �ּҰ��� Ȯ���Ѵ�.
	cout << "pt = " << pt << endl; // null�� ��� �⺻������ 0�� �Ҵ�ȴ�. ��
	delete[] pt;
	pt = NULL;
	
	return 0; 
}
