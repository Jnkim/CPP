#include <iostream> 
using namespace std;


/* �Լ��ܺ� ���� ����� static  */

void data();  
static int x = 7;   // �������� "X" 
// static int x;   // �������� "X"   �⺻�� = 0 

int main(){ 
	cout << " main �Լ� ���� x = "<< x <<endl;
	data();
	
	cout<<"data �Լ� ȣ���� x ="<<x<<endl; 
	  
	return 0;
}

void data(){ 
	x = 100;  // ����(static) �������� "X"  
	cout << "ȣ��� data�Լ��� x = "<< x << endl;
	x = 200;  // ����(static) �������� "X"   
}
