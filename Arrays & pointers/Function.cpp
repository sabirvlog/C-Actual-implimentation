
// #include<iomanip>
//#include<conio.h>
//#include<stdlib.h>
//#include<cstdlib>
//#include<windows.h>
//#include<fstream>
//#include<ctime>
//#include<math.h>
#include<iostream>
using namespace std;
int main(){

          
//     %%%%%%% // 1st-method of printing numbers on screen already given us;;
//        ...................................................................................
//        ...................................................................................
		int english=90, Urdu=78, Physics=67, chemistry=49, math=86, islamiyat=42, sum;
		double Average;
	cout<<"Marks of English subject is= "<<english<<endl;
	cout<<"Marks of English subject is= "<<Urdu<<endl;
	cout<<"Marks of English subject is= "<<Physics<<endl;
	cout<<"Marks of English subject is= "<<chemistry<<endl;
	cout<<"Marks of English subject is= "<<math<<endl;
	cout<<"Marks of English subject is= "<<islamiyat<<endl;
	
    //%%%%%%%%%//	2nd-mrthod entry of numbers by user.....................................
//..........................................................................................
//		cout<<"Enter Marks of English subject= "<<endl;
//		cin>>english;
//		cout<<"Enter Marks of urdu subject= "<<endl;
//		cin>>Urdu;
//		cout<<"Enter Marks of Physics subject= "<<endl;
//		cin>>Physics;
//		cout<<"Enter Marks of Chemistry subject= "<<endl;
//		cin>>chemistry;
//		cout<<"Enter Marks of Math subject= "<<endl;
//		cin>>math;
//		cout<<"Enter Marks of Islamiyat subject= "<<endl;
//		cin>>islamiyat;
// .....................................................................................................
//................That formula will used in every method of ftudents numbers..........................................
//......................................................................................................
	sum=(english+Urdu+islamiyat+Physics+math+chemistry);
	cout<<"Sum of all subjects are= "<<sum<<endl;
	Average=sum/6;
	cout<<"Average of all subjects= "<<Average<<endl;
// .......................................................................................................        
		    //    %%%%%%%% 	//  3rd-method by using array //%%%
//		Array Syntax		
//		Datatype arraname[arrSize]={element1,element2,.....,elementn}
//		int subjects[6]={12,34,56,45,85,21};
//		 
//		int firstElement= subjects[0];
//		int sixthElement= subjects[5];
//	  cout<< firstElement <<endl;
//	  cout<< subjects[1]  <<endl;
//	  cout<< subjects[2]  <<endl;
//	  cout<< subjects[3]  <<endl;
//	  cout<< subjects[4]  <<endl;
//	  cout<< sixthElement <<endl;
    return 0;
}
  

