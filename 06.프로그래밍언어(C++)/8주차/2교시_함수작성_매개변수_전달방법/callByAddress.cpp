#include <iostream>
using namespace std;

/*
Call By Address (��ȯ���� �������ϋ� ����ϴ� ���)
���� ��ȯ���� �ϳ����� ( �ּҰ��� �����ϱ⶧���� ���μ��� ������ ������ ����Ǵ� ���� )
main���� ȣ���ϴ� �������� �ּҰ��� �����Ѵ�. 
 
������ (�����Ϳ� ���� ���޹��) 
*/

void swap(int *x , int *y);  // �����Ϳ� ���� ������ ��� 
//void swap(int  , int );  // �����Ϳ� ���� ������ ��� 

int main(){
	int x = 3, y =7;
	
	cout << "swap ȣ���� , x : "<< x << " , y : "<< y << "\n";
	cout << "swap ȣ���� , &x : "<< &x << " , &y : "<< &y << "\n"; // ���μ� �ּҰ� Ȯ�� 
	swap(&x , &y); // ������ �ּҰ� ( & ���� ) �� �����Ѵ�.  &x , &y�� ���μ� 
	cout << "swap ȣ���� , x : "<< x << " , y : "<< y << "\n";
	return 0; 
}
 
void swap(int *px , int *py){ // ȣ��Ǵ� �Լ���  px , py�� ���μ� (�ּҰ��� ������ ������ ���� (*����) )
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	
	cout << "swap ȣ���� , *px : "<< *px << " , *py : "<< *py << "\n";
	cout << "swap ȣ���� , px : "<< px << " , py : "<< py << "\n"; // ���μ� �ּҰ� Ȯ��  
} 

/*
void swap(int px , int py){ // ȣ��Ǵ� �Լ���  px , py�� ���μ�(ȣ���ϴ� ������ �ּҰ��� �����Ͽ����� , ������ ������ ������ Compile���� �߻� 
	int temp;
	temp = px;
	px = py;
	py = temp;
	
	cout << "swap ȣ���� , *px : "<< *px << " , *py : "<< *py << "\n";
	cout << "swap ȣ���� , px : "<< px << " , py : "<< py << "\n"; // ���μ� �ּҰ� Ȯ��  
}
*/
