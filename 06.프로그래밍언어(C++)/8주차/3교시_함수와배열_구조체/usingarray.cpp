#include <iostream> 
using namespace std;

void usingArray(char arrp[]); // �迭�� �μ��� ���� �Լ��� ���� 

int main(){
	char str[] = "Hello , World!" ;
	usingArray(str);
	cout << "In Main() : "<< str << "\n";
}

void usingArray (char arr[]){  // ���μ� [] ���·� �޾�����... ( �ּҰ� ���� )
 cout << arr << "\n";
 arr[10] = 'T'; // �ּҰ��� ã�ư��� ���� �����Ѵ�. 
 arr[11] = 'C'; // �ּҰ��� ã�ư��� ���� �����Ѵ�. 
}
