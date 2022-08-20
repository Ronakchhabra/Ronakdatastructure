#include<iostream>
#include<math.h>

using namespace std;



int naturalno (int n)
{
   int	total = 0 , i;
  
   for(i=1; i<=n; i++)
  { 
total = total + i;} 
  
   return total;
   
}
int main(){
	  int n;
	  cin>> n;
	  cout<<naturalno(n);
}
	 
	

