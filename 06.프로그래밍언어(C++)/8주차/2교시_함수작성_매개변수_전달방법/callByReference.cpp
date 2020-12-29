#include <iostream>
using namespace std;

/*
Call By reference
���μ��� ���������� �����ϴ� ���� 
ȣ�� �ϴ� ���������� Call By Value�� ����.; swap(x , y); value�� ���� ���� 
�׷��� ȣ��Ǵ� �Լ��� swap���� ���μ��� �ּҰ����� �����ϴ� �޾� ������. 
******  ȣ���ϴ� ������ Value���� �����ؾ� �Ѵ�. �ּҰ� �����ϸ� Compile��� �߻� swap(&x , &y)**************  

(�Լ�ȣ��� "*����"�� ȣ���Ҷ� "&����"�� ������ ����. 
*/
void swap(int &x , int &y);

int main(){
		int x = 3, y =7;
	
	cout << "swap ȣ���� , x : "<< x << " , y : "<< y << "\n";
	cout << "swap ȣ���� , &x : "<< &x << " , &y : "<< &y << "\n"; // ���μ� �ּҰ� Ȯ�� 
	swap(x , y); // ������ ������ �����Ѵ�.
	cout << "swap ȣ���� , x : "<< x << " , y : "<< y << "\n";
	return 0; 
} 

void swap(int &px , int &py){ // ȣ��Ǵ� �Լ���  px , py�� ���μ� (ȣ��Ǵ� �Ű������� �ּҰ�(&����)���� �����Ͽ� ���� �޴´�) 
	int temp;
	temp = px;
	px = py;
	py = temp;
	
	cout << "swap ȣ���� , px : "<< &px << " , py : "<< &py << "\n"; // ���μ� �ּҰ� Ȯ��  
}
