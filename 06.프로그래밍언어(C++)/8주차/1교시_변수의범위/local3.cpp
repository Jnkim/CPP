#include <iostream>
using namespace std;

int main(){
	int x; // main() �Լ��� { } ���ο��� ��ȿ�� �������� x
	cout << "for�� ���ο����� x = ";
	
	for(x = 1; x < 5; x++){ 
		int x = 0;  // for�� ������ ��ȿ�� �������� x ( 5�� line�� x�ʹ� �ٸ� ����) 
		x++;
		
		cout << x << ","; 
	}
	
	cout << "\nfor�� {} ���� x = "<< x << endl;
	return 0; 
}
