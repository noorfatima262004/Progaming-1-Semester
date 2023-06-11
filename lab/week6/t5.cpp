#include <iostream>
using namespace std;
char result( int num);
main()
{
	int num;
	char grade;
	cout << "Enter your marks:";
	cin >> num;

	grade = result(num);
	cout << grade;
}

char result( int num)
{
	char grade;
	if( num <= 50)
	{
		grade = 'F';
	}	
		else if(num > 50 && num <= 60)
		{
		    grade ='E';
	    }
			else if(num >= 61 && num <= 70)
			{	
				grade ='D';
			}	
				else if(num >= 71 && num <= 80)
				{
					grade = 'C';
			    }
				else if(num >= 81 && num <= 85)
				{	   
					   grade ='B';
				}	   
				else  if (num > 85)
					{  
					    grade ='A';
				    }	
						else	
						{
							grade ='0';
						}	
	

	return grade;
}	  

		
	
	