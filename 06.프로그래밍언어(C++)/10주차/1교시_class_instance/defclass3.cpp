#include <iostream>
using namespace std;

class Dog{
	public : // ������� ���� 
		unsigned int getAge(){ return Age; }; // ����Լ��� ����� ���Ǹ� �����Ѵ�. 
		void setAge(unsigned int age){ Age = age; }; // ����Լ��� ����� ���Ǹ� �����Ѵ�.
		void Show(){  cout << "�ູ�� ���� " << endl; };  // public�϶��� �Լ�(){} ���·� ���𰡴� ( ����õ ) , �Ϲ������� (); ���·� �����Ѵ�. 
	private : // ����� ��� ���� 
		unsigned int Age;   // ����� ������ ������. (unsigned int) 
		unsigned int Weight; // ����� ������ ������. (unsigned int)	 
};
 

int main(){
	Dog happy;
	happy.setAge(3);
	cout << "happy�� ���̴� "<< happy.getAge() << "�Դϴ�."<<endl;
	happy.Show();
	return 0; 
}
