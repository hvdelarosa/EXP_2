#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
  int demand=35, charge=20; 
  char unpaidbalance;            
  const double consumptioncharge=1.10;
  double previousbill, currentbill, gallons, bill;        
      
  cout<<"What is your previous meter reading?: ";
  cin>>previousbill;   

  cout<<"What is your current meter reading?: ";
  cin>>currentbill;   
     
  cout<<"Did you pay your previous bill? ('Yes' or 'No'): ";
  cin>>unpaidbalance;        

  gallons=currentbill-previousbill;

  if ((unpaidbalance== 'Yes')||(unpaidbalance== 'yes'))       
  {
   bill=(consumptioncharge*gallons)+demand;
  }
  else
  {
   bill=(consumptioncharge*gallons)+demand+charge; 
  }
  cout<< setprecision(2)<<fixed;
  cout<<"Your water bill"<<" is "<<bill<<" Pesos";    
  
  getch ();  
  return 0;
}
