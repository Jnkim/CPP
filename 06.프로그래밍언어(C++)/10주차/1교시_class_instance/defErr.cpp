#include <iostream>
using namespace std;

class Dog{
	public :
		void DataShow();
	private : // ������� age�� weight�� �����(private)�� ����� 
		unsigned int Age;	
		unsigned int Weight;
};

void Dog::DataShow(){
	cout << "happy�� ���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "happy�� �����Դ� " << Weight << "Kg �Դϴ�." << endl;
}

int main(){
	Dog happy = { 3 , 4 }; // compile�� �����߻� (private ������� �����߱⶧���� ��ֹ߻� 
	happy.DataShow();
	
	return 0;
}
