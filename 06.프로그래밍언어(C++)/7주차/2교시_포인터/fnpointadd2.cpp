#include <iostream>
using namespace std;

int add (int x , int y); 
int mult (int x , int y);
void fn( int (*fp)(int x , int y)); // �Լ� ������ �����ϰ� �Ű� ������ �Լ������� �����̴�.

int main(){
	
	fn(add); // add()�Լ��� ȣ���Ͽ� �����Ѵ�.  
	//cout << "&add = "<< &add << endl;
	
	fn(mult); // mult()�Լ��� ȣ���Ͽ� �����Ѵ�.  
	//cout << "&mult = "<< &mult << endl;
	return 0;
} 

void fn( int (*fp)(int x , int y)){
	int a = 3 , b = 7 , rtnVal;
	rtnVal = fp(a , b) ;
	//cout << "&fp = "<< &fp << endl;
	cout << "��� = "<< rtnVal << endl;
}

int add(int x , int y){
	return x + y;
}

int mult(int x , int y){
	return x * y;
}
