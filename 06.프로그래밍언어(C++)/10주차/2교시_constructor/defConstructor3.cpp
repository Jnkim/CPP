#include <iostream>
#include <cstring> 

using namespace std;


class Dog { 
	public :  // �������� 
		Dog(); // �⺻ ������ ���� 
		void showData(); // ����Լ�	
	private :  // ����� ��� 
		unsigned int Age;
		unsigned int Weight;
		
};

Dog::Dog(){ 
	Age = 3;
	Weight = 4;
}

void Dog::showData(){
	cout << "happy�� ���̴�  " << Age << "�� �Դϴ�." << endl;
	cout << "happy�� �����Դ� " << Weight  << "Kg �Դϴ�."  << endl; 
}

int main(){
	Dog happy;
	happy.showData();
	
	return 0;
}
