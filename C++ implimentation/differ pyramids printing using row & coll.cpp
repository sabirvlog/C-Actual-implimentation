#include<iostream>
using namespace std;
int main()
{
	
	int row,coll,coll2,noOfcoll,noOfrow;
    noOfrow=5; 
    noOfcoll=noOfrow-1;
    
	for(row=1;row<=noOfrow;row++)	// outer for loop for rows
	
	{
		for(coll=1;coll<=noOfcoll;coll++) // inner for loop for columns
		
		{
		
		cout<<"  "<<row;
	
		
}
	
	
	noOfcoll--;
	for(coll2=1;coll2<=row;coll2++)
{
      
		cout<<"   ";
		cout<<"\n";
		
}
	}
	return 0;
}



