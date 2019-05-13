#include <iostream>
#include <conio.h>
#include<iomanip>
#include <cmath>


using namespace std;
int main()
{
	int x;
	double y,v,n1;
	double n2;
  	const double z=2.5;
	
		cout << "Value of x :";cin >> x;
		cout << "Value of y :";cin >> y;
		
	
switch(x)
{
case '1':
	
case 1: 
  	if(y>1&&y<5)
  	{v=x*y*z;
	cout << "The value of V is equal to:"
	<<setw(10)<<v<<setprecision(2);
  	}

	else if (y>=5)	
	{v=x+y/z;
	cout << "The value of V is equal to:"
	<<setw(10)<<v<<setprecision(2);
	}
	
	
	else
	{v=x+y+z;
	cout << "The value of V is equal to:"
	<<setw(10)<<v<<setprecision(2);
	}
	   	
break;		

		
case '2':
	if(y<=5)
  	{ n1=(x-y)/z; v=abs(n1);
	cout << "The value of V is equal to:"
	 <<setw(10)<<v<<setprecision(2);
  	}
  
  
 	else if (y>5)
  	{
    n2=sqrt(y+z); v=x-n2;
	cout << "The value of V is equal to:"
	<<setw(10)<<v<<setprecision(2);
  	}
  
  
  	else
  	{ v=x+y+z;
	cout << "The value of V is equal to:"
	<<setw(10)<<v<<setprecision(2);
 	}
  
break;
		
default:v=x+y+z;
		cout<< setprecision(2)<<fixed;
		cout<<"The value of V is equal to  "<<v;
		

	}
	getch();
	return 0;
}
