#include<iostream>
#include<math.h>
int fact (int n);
using namespace std;
int main(){
	
	int n , r;
	 cin>> n>>r;
	 float bc = (fact(n)/( fact(n-r)* fact(r)));
	 cout<< bc;
	  return 0;
}

int fact (int n )
{
   int	fact1 = 1  , i;
  
   for(i=n; i>1; i--)
   fact1 = fact1*i;
  
   return fact1;
   
}


