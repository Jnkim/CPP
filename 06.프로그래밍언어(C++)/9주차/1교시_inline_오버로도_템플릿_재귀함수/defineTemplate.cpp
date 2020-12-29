#include <iostream>
#include <cstring>
using namespace std;

/*
 ����� ���ø� �Լ� :
 
 * Ư�� ������ Ÿ�Կ� ���ؼ��� ����ǵ��� ���ǵ� ���ø� �Լ�
 * ����ü  ��� �߿��� Ư�� ����� �״�� �����ϰ� �ٸ� ����� ���ؼ��� �����ϰ��� �Ұ�� ����� ���ø��� ����Ѵ�. 
 * ����� Ư�����ø� �Լ� , ���ø��Լ� , �Ϲ��Լ��� �̸��� ���� �����ε��� ��� �����Ϸ��� �����ϴ� �켱 ������  
   ��������ø��Լ� , ���ø��Լ� , �Ϲ��Լ� ���̴�.  
*/

// ���ø� �Լ� 
template <class T> void Swap(T &px , T &py);  



struct Dept{
	int no;
	char name[20];
	char loc[80];
};

// ����� ���ø��Լ� : �Լ��� �ñ״�ó�� template ���� �����ϰ� ,  �Լ���(Swap)�� ���μ�( Dept &px , Dept &py )�� ���� ���̿� ����ü( <Dept> )�� ����� ���� 
// (���μ��� ��ȯ�� ���°�  ����ü�� ��õɼ��ִ�. ) 
template <> void Swap<Dept>(Dept &px , Dept &py); 
 
 
int main(){
	int x = 3 , y =7; 
	cout << "Swap ȣ�� �� , x : "<< x << ", y : " << y << "\n"; 
	Swap(x , y);
	cout << "Swap ȣ�� �� , x : "<< x << ", y : " << y << "\n\n"; 
	
	
	Dept dt1 = {101 , "�λ��", "����"}; 
	Dept dt2 = {102 , "�����", "��õ"}; 
    cout << "Swap ȣ�� �� �μ�1 : "<< dt1.no<<" , "<< dt1.name <<" , "<< dt1.loc << endl; 
	Swap(dt1 , dt2);
	cout << "Swap ȣ�� �� �μ�1 : "<< dt1.no<<" , "<< dt1.name <<" , "<< dt1.loc << endl; 
	
	return 0; 
} 

template <class T> void Swap(T &px , T &py){ // ���ø� �Լ� 
    cout << "���ø� �Լ� ȣ�� "<< endl;
 	T temp = px;
 	px = py; 
 	py = temp;
}


template <> void Swap<Dept>(Dept &px,Dept &py) {  // ����� ���ø� �Լ� 
	// Dept��� Ư�� ������ ������ �Ű� ������ ���� ��� ����ǵ��� ���ǿ� Ư�� ���ø� �Լ�
	cout << "����� ���ø� �Լ� ȣ�� "<< endl;
	px.no = py.no;   
	strcpy(px.name , py.name) ;
}
