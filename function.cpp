#include<iostream>
#include<math.h>
int add(int num1, int num2);
using namespace std;
int main()
{
	int a=3, b=4;
	cout<<add(a,b)<< endl;
	return 0;
}
int add(int num1, int num2)
{
	
	int sum = num1 + num2 ;
	return sum;
}
