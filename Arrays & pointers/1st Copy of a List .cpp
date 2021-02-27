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
	int arry[size]={1,2,3,4,5};
	cout<<"old array"<<endl;
	for(int a=0;a<size;a++)
	{
		cout<<"element at "<<a<<" index :"<<arry[a]<<endl;
	}
	int new_array[size];
	for(int a=0;a<size;a++)
	{
		new_array[a]=arry[a];
	}
	cout<<"new array"<<endl;
	for(int a=0;a<size;a++)
	{
		cout<<"element at "<<a<<" index :"<<new_array[a];
	}
	getch();
}
