#include <iostream>
#include <cstring> 
using namespace std;

void showData(struct Address &st); // ����ü �������� ���� (Call by Refrence ) 

struct Address{
	char name[20];
	char phone[20];
	char address[80];
};

int main(){
	
	/*  strcpy�� ����Ϸ���  #include <cstring> ���̺귯�� ���� �ʼ� */ 
	struct Address adr;
	strcpy(adr.name , "õ��ǥ" );
	strcpy(adr.phone , "010-6578-1463" );
	strcpy(adr.address , "���� ���ֽ� �������� �����.. 123" );
      
    //struct Address adr = {"õ��ǥ" , "010-6578-1463" , "���� ���ֽ� �������� �����.. 123" };
    
   showData(adr); // ����ü �������ּҰ��� ���� (Call By Value�� ����. ) 
   return 0;	
	
}

void showData(struct Address &st){ // ����ü ����  �����Ͱ��� ���޹޴� ���� "&����" 
    // ���� �����ϸ� ����(struct)�� ���� ����ȴ�. 
    
	cout << "�̸� : " <<st.name<< endl;   // ����ü ������ ��� ( Refrence�� ������� �Ϲ� ����ü�� ����ȴ�. �Ϲ� �������ϰ��: "����ü��.�Ӽ�") 
	cout << "��ȭ : " <<st.phone<< endl;  
	cout << "�ּ� : " <<st.address<< endl;
}
