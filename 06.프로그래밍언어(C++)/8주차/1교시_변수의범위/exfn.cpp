#include <iostream> 
using namespace std;

extern void data(int x); // �ܺ� ���Ͽ��� ������ �Լ� ����  
/* exfn2.cpp ���� ���� (dec C++���� Test�Ұ� / Visual Studio���� Ȯ�� ���� 
   Visual Studio �Ѱ� 
   ������Ʈ�� "exfn" ���� ����
   �ҽ����ϻ����� (���� ���� ����)
   ������Ʈ ���� (Ctrl + Shift + B) =>  ���� ( Ctrl + F5) 
 */
int x = 7;
int y; // �⺻�� 0 

int main(){
	x = 9;
	cout << "main �Լ����� x = " << x <<endl;
	data(100);
	
	cout << "�ܺ� ������ �Լ� ȣ���� y = "<<y<<endl;
	cout << "�ܺ� ������ �Լ� ȣ���� x = "<<x<<endl;
	return 0; 
} 
