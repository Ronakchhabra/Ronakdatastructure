#include<iostream>
using namespace std ;
int main()
{
	int  n , ;
	cin>>n;
	int rev=0;

	 while (n>0){
	 int lastno=(n%10);
	  rev= lastno + rev*10;
	  n= n/10;
	 }
	 cout <<rev;
}
