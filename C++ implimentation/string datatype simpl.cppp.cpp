#include <iostream>
using namespace std;
int main()
{
	string name;// In string space is not allowed ,therefor in case of space first characters will be executed and next char must regected.In string data type when we compile a program then it gives a string variable which is required by us without space when we put space then it regects the next digit. 

	cout <<" Enter your name:"<<endl;
	cin>>name;
	
	cout<<"you are "<<name <<endl;
	
	return 0;
}


