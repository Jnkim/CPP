#include <iostream> 
using namespace std;


/* �Լ����� ���� ����� static  */

void data();  
int x = 7;   // �������� "X" 

int main(){ 
	int x = 3;  // �������� x 
	int y = 0;  // �������� y 
	
	cout << " main �Լ� ���� x = "<< x <<endl;
	data();
	
	cout<<" �Լ� ȣ���� x ="<<x<<endl;
	cout<<" �Լ� ȣ���� x ="<<y<<endl;
	data();
	
	return 0;
}

void data(){
	int y = 20;  // �������� "Y"
	static int x = 10;  // �������� "X" 
	
	cout << endl;
	cout << "ȣ��� data�Լ��� x = " << x << endl; 
	cout << "ȣ��� data�Լ��� y = " << y << endl;
	cout << endl;
	
	x = 100;
	y = 200;
}
