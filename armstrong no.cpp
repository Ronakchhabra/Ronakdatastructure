#include<iostream>
#include<math.h>
using namespace std ;
int main()
{ 	int  n , total =0;
	cin>>n;
int originaln = n;

	 while (n>0){
	 int lastno=(n%10);
	 total=total+ pow(lastno,3);
	 n= n/10;
}
if (originaln==total)
cout<< " armstong no";
else
cout<< "n arm";
}
