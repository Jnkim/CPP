#include <iostream>
using namespace std;

class Dog { 
	public :
		unsigned int Age;
		unsigned int Weight;
		void DataShow();
};

void Dog::DataShow(){
	cout << "���̴� " << Age << "�� �Դϴ�." << endl; 
	cout << "������� " << Weight << "Kg �Դϴ�." << endl;
}

int main(){
	// Dog happy;
	const Dog happy; // const ��� ��ü 
	happy.Age =3;    // ���� happy�� �����ü �̹Ƿ� ����������� �����Ҽ�����.  ( Dog happy �� ����) 
	happy.Weight =5;
	happy.DataShow();
	
	return 0;
}
