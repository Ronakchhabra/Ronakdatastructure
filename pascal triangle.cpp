#include<iostream>
#include<math.h>
int fact (int n);
using namespace std;



int fact(int n)
{
   int	fact1 = 1  , i;
  
   for(i=n; i>1; i--)
  { 
  fact1 = fact1*i;} 
  
   return fact1;
   
}
int main(){
	int n=5;
	 
	
	for (int i= 0 ; i<=n ; i++)
	  {for (  int j = 0 ; j<= i ; j++)
	   cout<< fact(i) / ( fact(i-j) * fact(j));
	   cout<< endl;}
}

