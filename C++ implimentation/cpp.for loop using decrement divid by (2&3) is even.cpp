/*
		find an even number and dividend of 3.starting from 0 to 100.
*/
#include<iostream>
using namespace std;
int main()
{
	for(int i=100; i>=1; i--)//we have a number from 1 to 100 find those numbers that are even and less than or equal to 100.
	{
		if((i%2==0) && (i%3==0))//both conditions must be true 1st when we divide any no. with 2 it gives zero then it will be confirmed that it is even number.And 2nd. when we devide any even number with 3 it gives zero then it will be confirmed that it is even and devidend of 3.
		{
			cout<<i<<" ";//to show the even numbers on console screen.
			
		}
	}
	return 0;
	//NOTE that: find even numbers between 1 and hundred (100) and find those even no. which are divided  by 3.it is for dicrement representation.
}
