#include <iostream>
using namespace std;

int main (){
	int a[5] = {6,7,};
	// 7���� �޸�(,)�� ������ , �ʱⰪ�� �������� ����
	// ������ �迭 ��Ҵ� ��� 0���� �ʱ�ȭ�ȴ�.  
	int b[5] = {0}; // �迭b�� ��� ��Ҹ� 0���� �ʱ�ȭ
	
	for(int i = 0 ; i < 5 ; i++){
	   cout << "a["<< i << "] = "<< a[i] << " , ";
	   cout << "b["<< i << "] = "<< b[i] << endl;
	}
	return 0; 
}
