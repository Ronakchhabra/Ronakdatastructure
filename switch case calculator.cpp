#include<iostream>
using namespace std ;
int main()
{int a , b , n , i ;
char o;
cin>>a>>b>>o;

switch(o)
{ 
    case '+':
    cout<<a+b;
    break;
    case '-':
    cout<<a-b;
    break;
    case '*':
    cout<<a*b;
    break;
    case '/':
    cout<<a/b;
    break;
    case '%':
    cout<<a%b;
    break;
    default:
    	cout<< "not right operator";
}
}
