#include <iostream>
using namespace std;
int main()
{
	for(int i=100; i>=1; i--)//to find dcrement numbers from 100 to 1 in reverse form so that we use decrement operator. 
	{
		
		if((i%2!=0) && (i%3==0))//To find odd numbers multiples of 3 (three). 
		{
			cout<<i<<" ";//we use inverted commas which are said as opertors in programming without of 'i' because when we write i then it will also comes with the all vlues of even or odd numbers less than or equal to 100,therefor we use only commas without "i"(any digit or letter)  
			
		}
	}
	return 0;
}
