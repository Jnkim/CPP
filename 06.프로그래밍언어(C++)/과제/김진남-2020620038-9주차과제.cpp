#include <iostream> 
using namespace std;

bool isCalRange(int year, int month); 
bool isYoonYear(int year);
void displayCalendar(int year,int month); 
int monthCalc(int year,int month);
int yearCalc(int year);    
int monthOfLastday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
int main()
{
    int year, month, i;
    char answer;
    string monthNm[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};  
    char week[7][6] = {{"Sun"},{"Mon"},{"Tue"},{"Wed"},{"Thu"},{"Fri"},{"Sat"}}; 
 
    do{
        cout << "1980년부터 2030년까지 중의 년월일을 입력하세요. (예: 2003 5) ";   
        cin >> year >> month;
        
        if(isCalRange(year , month)){ 
        	cout << "입력한 날자가 잘못입력 되었습니다. \n다시입력하시겠습니까?"; 
        	cin >> answer ;
        } else { 
        
        	cout << "입력하신 달은 "<<year<<"년 "<<month<<"월 입니다."<<endl; //* 프로그램 출력 첫 줄에 입력받은 년도와 월을 확인하는 문장을 나타낸다. 
        
        	if(isYoonYear(year)){  
	        	monthOfLastday[1]=29; // 2월달을 29일로 설정 (윤달설정) 
	        } 
	        else {
	        	monthOfLastday[1]=28;	
	        }
			 
	        cout << "      <"<<year<<"  "<<monthNm[month -1]<<" >      "<<endl;  // * 프로그램 출력 둘째 줄에 나타내는 입력받은 년도와 월의 영문명을 나타낸다. 
	        cout << "==============================" << endl;  
            for( i = 0; i < 7; i++ ){ 
            	cout << week[i] << " "; // * 달력의 헤더부분의 요일은 영문약자로 표기한다.
            } 
	 
	        cout << endl; 
	        //cout << "printcalendar year : "<<year<<" , month <<"<<month<<endl;
	        displayCalendar(year,month);        //calendar 출력함수
	        cout << "\n==============================" << endl;
	        cout << "다시 입력하시겠습니까?(Y/N): "; 
	        cin >> answer ;
        }     
    }while(answer == 'y' || answer == 'Y' );
    return 0;
}
 
void displayCalendar(int year, int month) // 달력을 출력하는 함수
{
    int startday, enter;
     
    int space = (yearCalc(year) + monthCalc(year,month)) % 7;
    enter = space;                        // enter 변수의 값은 space 변수의 값이다
    
     
    for (startday = 0 ; startday < space ; startday++){ 
    	    cout << "    ";
    }    
    
    for (startday = 1 ; startday <= monthOfLastday[month-1] ; startday++){            
        if (startday < 10){
        	cout << " 0" << startday << " " ;  
        }else { 
        	cout << " " << startday << " " ;
        } 
		                    
        if (enter == 6){
			cout << endl;                        
            enter = 0;                            
        }
        else { 
        	enter++;
        }                            
    }
}

int yearCalc(int year)                            
{
    int basic = 4; 
    for (int y = 2000; y >= year; y--){
        basic += 6;                                
        if (isYoonYear(y)){ 
        	basic += 6;
        }                                
    }    basic %= 7;                
 
    return basic;    
    
}

int monthCalc(int year,int month) // 해당월의 요일을 구하는 함수
{ 
    int allday = ((year-1)+(year-1)/4-(year-1)/100+(year-1)/400);
    int i;
    for(i=0; i < month; i++){
		  if(i==1 && ((year%4==0 && year%100 !=0) || year%400==0)){
		   monthOfLastday[1]+=1;  
		  }
	  	allday += monthOfLastday[i];
   }
   
   allday -= monthOfLastday[i-1]; 
   return ( allday + 2) % 7; 
    
}

bool isCalRange(int year , int month){  // 사용자가 입력한 값(년월)의 유효범위 검증 함수 
   if((year < 1980) || (year > 2030)){  
   	   return true;
   }else {  
   	  if ((month < 1) || (month > 12)){ 
   	  	return true;	
   	  }  
   } 
   return false;
}

bool isYoonYear(int year){ // 윤년을 계산하는 함수 
	return !(year % 4 != 0) || (year % 100 != 0) || (year % 400 == 0) ;
}

