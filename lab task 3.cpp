

#include <iostream>
using namespace std;

int main() {
	float x,y;
	char operation;
	cout<<"enter 1st number"<<endl;
	cin>>x;
	cout<<"enter 2nd number"<<endl;
	cin>>y;
	cout<<"enter an operation"<<endl;
	cin>>operation;
	switch (operation) {
			case '+' : 
		cout<<x<<"+"<<y<<"="<<x+y;
		break;
			case '-' : 
		cout<<x<<"-"<<y<<"="<<x-y;
		break;
			case '*' : 
		cout<<x<<"x"<<y<<"="<<x*y;
		break;
			case '/' : 
		cout<<x<<"/"<<y<<"="<<x/y;
		break;
			default:cout<<"bye";
		break;	
	}
	return 0;
}



#include <iostream>
using namespace std;

int main() {
int m;
cout<<"enter the number of month(1-12)"<<endl;
cin>>m;
switch (m) 
{

    case 1 :   case 3 :  case 5 :  case 7 :  case 9 :  case 11 : cout<<"the given month has 31 days" ;
    break;
   case 4 :  case 6 :  case 8 :  case 10 :  case 12 : 
   cout<<"the given month has 30 days" ;
   case 2 :
   cout<<"the month has 28 days";
   
    break;
    default :
    cout<<"the number of month entered is not valid";
    break;
    
}
return 0;
}




#include <iostream>
using namespace std;

int main() {
    float x,y;
    cout<<"enter 1st number"<<endl;
    cin>>x;
   cout<<"enter 2nd number"<<endl;
   cin>>y;
   if (x!=y) {
       if (x>y)    
       {cout<<"1st number is greater than 2nd";
   }
   
      else {
       cout<<"2nd number is greater tha 2nd";
   }
   }
   else 
   {cout<<"the given numbers are equal";}
   
    


return 0;
}



#include <iostream>
using namespace std;

int main() {
float m ;
cout<<"enter value of m"<<endl;
cin>>m;
if (m!=0) {
    if (m>0) {
        cout <<"n=1";
    }
    else {
        cout<<"n=-1";
    }
}
else {
    cout<<"n=0";
}
   
    


return 0;
}
