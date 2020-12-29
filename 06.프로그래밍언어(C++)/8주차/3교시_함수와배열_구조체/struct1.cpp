#include <iostream>
#include <cstring> 
using namespace std;

void showData(struct Address st);

struct Address{
	char name[20];
	char phone[20];
	char address[80];
};

int main(){
	
	/*  strcpy를 사용하려면  #include <cstring> 라이브러리 선언 필수 */ 
	struct Address adr;
	strcpy(adr.name , "천사표" );
	strcpy(adr.phone , "010-6578-1463" );
	strcpy(adr.address , "전남 나주시 빛가람로 블라블라.. 123" );
      
    //struct Address adr = {"천사표" , "010-6578-1463" , "전남 나주시 빛가람로 블라블라.. 123" };
    
   showData(adr);
   return 0;	
	
}

void showData(struct Address st){ 
	cout << "이름 : "<< st.name << endl; 
	cout << "전화 : "<< st.phone << endl;
	cout << "주소 : "<< st.address << endl;
}
