#include <iostream>
using namespace std;

/* Call by Value�� ����� �Լ�(�Լ��� �ñ״�ó)���ο��� ���� ����Ǿ ����(main�� ���μ�)�� ������� �ʴ´�.  */

void swap(int px , int py);

int main(){
	int x = 3, y =7;
	
	cout << "swap ȣ���� , x "<< x << " , y : "<< y << "\n";
	swap(x , y);
	cout << "swap ȣ���� , x "<< x << " , y : "<< y << "\n";
	return 0; 
}

void swap(int px , int py){
	int temp;
	temp = px;
	px = py;
	py = temp;
	
	cout << "swap ȣ���� , px "<< px << " , py : "<< py << "\n";
}
