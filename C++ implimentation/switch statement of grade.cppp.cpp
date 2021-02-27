#include<iostream>//preprocessor directives.OR a library of the function.
using namespace std;//namespace library.
int main()//int is data type and '0' written with a return type is a variable.And from braces perimeters are cross.like body of the function.
{
	int marks;
	cout<<"Enter the marks:"<<"\n";
	cin>>marks;
	switch(marks)
	case 75:
	case 74:
	case 73:
	case 72:
	case 71:
{
 	cout<<"Grade A"<<'\n';
	break;
	case 70:
		case 69:
	    case 68:
		case 67:
		case 66:
					
{
	cout<<"Grade B"<<'\n';
	break;
	case 65:
		case 64:
		case 63:
		case 62:
		case 61:
		{
			cout<<"Grade C"<<endl;
			break;
			case 60:
				case 59:
				case 58:
				case 57:
				case 56:
				{
					cout<<"Grade D"<<endl;
					break;
	        case 55:
		case 54:
		case 53:
		case 52:
		case 51:
			{
			 		cout<<"Grade E"<<endl;
					break;
		
						default:
							{
								cout<<"Fail"<<endl;
							
							}
						
			}
		}
		 			
		    	} 
		 }
	return 0;
	
}

}
