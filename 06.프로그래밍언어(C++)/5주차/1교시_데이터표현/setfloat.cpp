#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	
   cout.setf(ios::fixed, ios::floatfield); // �ε��Ҽ��� ��� 
   //cout.setf(ios::left, ios::adjustfield); // �������� 
   cout.setf(ios::right, ios::adjustfield); // ���������� 
   cout.setf(ios::showpos); // + ��ȣ�� �ٿ��� ��� 
   //cout.precision(3); // ���е� 3�ڸ�(�Ҽ��� 3�ڸ�) 
   cout.precision(8); // ���е� 8�ڸ�(�Ҽ��� 8�ڸ�) 
   
   double d = 10.0 / 3.0;
   cout.width(30); // �ڸ��� 30ĭ ����
   
   cout << d << endl; 
	
	return 0; 
	
}
