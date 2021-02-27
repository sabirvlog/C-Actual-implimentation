/*    	C++ Actual implementation Assignment #2:
Code:
//cpp actual implimentation Assinment #2:
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=11;
	int b=4;
	int c= 5;
	int d=6;
	int result;
	cout<<"Aritematic operators:\n";
	cout<<" a+b = "<<a+b<<endl;
	cout<<" a-b = "<<a-b<<endl;
	cout<<" a*b = "<<a*b<<endl;
	cout<<" a/b = "<<a/b<<endl;
	cout<<" a%b = "<<a%b<<endl;
	cout<<" logical operators:\n";
	cout<<"logical  AND Operators:\n";
	result=((a>b)&&(c<d));
	cout<<result<<endl;	
	result=((a>b)&&(c>d));
	cout<<result<<endl;
	result=((a<b)&&(c<d));	
	cout<<result<<endl;
	result=((a<b)&&(c>d));
	cout<<result<<endl;	
	cout<<"  logical OR Operators:\n";
	result=((a>b)||(c<d));
	cout<<result<<endl;
	result=((a>b)||(c>d));
	cout<<result<<endl;
	result=((a<b)||(c<d));
	cout<<result<<endl;
	result=((a<b)||(c>d));
	cout<<result<<endl;
		cout<<"logical NOT Operator:\n";
	result=!(a>b);
	cout<<result<<endl;
	result=!(c>d);
	cout<<result<<endl;
	result=!(a<b);
	cout<<result<<endl;
	result=!(c>d);
	cout<<result<<endl;
	cout<<"Relational Operators:\n";
	result= a>b;
	cout<<result<<endl;
	result= a<b;
	cout<<result<<endl;
	result= a<=b;
	cout<<result<<endl;
	result= a>=b;
	cout<<result<<endl;
	result= a==b;
	cout<<result<<endl;
	result= a!=b;
	cout<<result<<endl;
	getch();
	return 0;
}


