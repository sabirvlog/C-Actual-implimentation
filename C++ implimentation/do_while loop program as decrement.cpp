#include<iostream>  // main library of function \or preprocessor directive to show path or guide to the whole programe.
#include<conio.h> // header file.
using namespace std;
int main()  // main function.
 {
 	int i=50;  // integer variable initionalization
 	do
 	{
 		cout<< i <<endl;
 		i=i-1;  // print odd numbers on the console screen from 5 to 50. 
	 }
	 while(i>=5); // we use terminator or semicolons here in this do_while loop because now it is declared as a variable of do .
	 return 0; // it's variable of int main.
	 getch(); // it's used to control the console screen quite that we can easily read the executed programe which shows the cout statement on the console screen \display screen. 
 }
