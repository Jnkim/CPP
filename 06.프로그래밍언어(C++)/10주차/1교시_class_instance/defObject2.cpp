#include <iostream>
using namespace std;

class Dog{
	public :
		unsigned int getAge(){ return Age; }; // ����Լ��� ����� ���Ǹ� �����Ѵ�. 
		void setAge(unsigned int age){ Age = age; }; // ����Լ��� ����� ���Ǹ� �����Ѵ�.
		void Show();
	private :
		unsigned int Age;   // ����� ������ ������. (unsigned int) 
		unsigned int Weight; // ����� ������ ������. (unsigned int)	 
};


void Dog::Show(){ // Dog Ŭ������ ����Լ� Show�� �������� 
	cout << "�ູ�� ���� \n"; 
}

int main(){
	Dog happy;
	happy.setAge(3);
	cout << "happy�� ���̴� "<< happy.getAge() << "�Դϴ�."<<endl;
	//happy.Show();
	return 0; 
}
