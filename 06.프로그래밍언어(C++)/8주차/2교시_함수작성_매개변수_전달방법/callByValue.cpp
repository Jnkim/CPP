#include <iostream> 
using namespace std;

// main �Լ�����  max �Լ��� �켱�Ǹ� �Լ��� �ñ״�ó������ ���� �ʾƵ� �ȴ�. 
// int max(int , int );  

int max(int a , int b){  // �Լ��� ���� , a �� b�� ���μ�
	return a > b ? a : b;   
}

int main(){
	int ret = max(3, 5);
	cout << "�ִ밪 : "<< ret << endl; // �Լ�ȣ�� 3,5 �� ���μ� 
	
	return 0;
}
