#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;
main()
{
	int size=5;
	int arry[size]={1,2,4,4,5};
	cout<<"old array"<<endl;
	for(int a=0;a<size;a++)
	{
		cout<<"element at "<<a<<" index : "<<arry[a]<<endl;
	}
	int get;
	cout<<"enter index no which value you get : ";
	cin>>get;
	for(int a=0;a<size;a++)
	{
		if(a==get)
		{
			cout<<"the value is : "<<arry[a]<<endl;
		}
		getch;
	}
}
