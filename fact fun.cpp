#include<iostream>
#include<math.h>
void fact (int n1);
using namespace std;
int main(){
	
	int n;
	 cin>> n;
	 fact(n);
	  return 0;
}

void fact (int n1){
   int	fact=1  , i ;
  
   for(i=n1; i>1; i--)
   fact = fact*i;
   cout<< fact;
   
	
	
	
}


