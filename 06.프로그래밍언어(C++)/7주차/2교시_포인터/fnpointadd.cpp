#include <iostream>
using namespace std;

int add (int x , int y);

int main(){
	
	int (*fp)(int x , int y);  // �Լ� ������ ���� ���� 
	int a = 3 , b = 7 , rtnVal;
	fp = add;              // �Լ����� �Լ� ������ ������ ���� 
	rtnVal = fp(a , b);    // �Լ� ������ ������ �Լ��� ȣ 
	cout << "3 + 7 = "<< rtnVal << endl;
	return 0;
}

int add (int x , int y){
	return x + y;�� 
}
