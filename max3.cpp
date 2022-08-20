#include<iostream>
using namespace std ;
int main()
{
	int a , b , c ;
	cin>> a >> b >> c ;
	float avg = (a+b+c)/2.0 ;
	cout<< avg ;
	if(a>b)
	   {
	  if(a>c)
	     cout<<"a is greatest";
	     else
	     cout<<"c is greatest"; }
	     
	else if(b>c)
	       cout<<"bis greatest";
	else
	        cout<<"c is greatesr";
	        
	        return 0;
	
	
}
