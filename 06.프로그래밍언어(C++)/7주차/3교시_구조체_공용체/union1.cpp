#include <iostream>  
using namespace std;

// ����ü�� ����������� ���� ū �޸𸮰����������� , �޸𸮸� �����Ѵ�. 
// ��������� ���� ����Ǹ� ������ ��������� ���� ����ȴ�.  
union number{  // ����ü ���� 
	int x; 
	double y;   
};

int main(){
	
	union number  value ;  // ����ü �������� 
	value.x = 56;
	cout << "x value : "<< value.x << endl;  
	value.x = 37.58;
	cout << "y value : "<< value.y << endl;
	cout << "x value : "<< value.x << endl;
	return 0;
}
 
