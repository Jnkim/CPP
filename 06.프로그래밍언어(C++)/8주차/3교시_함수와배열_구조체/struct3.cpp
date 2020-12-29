#include <iostream>
#include <cstring> 
using namespace std;

void showData(struct Address &st); // 구조체 참조변수 형식 (Call by Refrence ) 

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
    
   showData(adr); // 구조체 포인터주소값을 전달 (Call By Value와 같다. ) 
   return 0;	
	
}

void showData(struct Address &st){ // 구조체 참조  포인터값을 전달받는 변수 "&변수" 
    // 값을 수정하면 원본(struct)의 값도 변경된다. 
    
	cout << "이름 : " <<st.name<< endl;   // 구조체 값참조 방식 ( Refrence로 받을경우 일반 구조체로 변경된다. 일반 구초제일경우: "구조체명.속성") 
	cout << "전화 : " <<st.phone<< endl;  
	cout << "주소 : " <<st.address<< endl;
}
