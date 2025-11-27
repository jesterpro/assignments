#include<iostream>
using namespace std;
double add(double a, double b)
{
return a+b;
}

double subtract(double a, double b)
{return a-b;
}
double multiply(double a, double b)
{
return a*b;
}

double divide(double a, double b)
{
if(b!=0){
return a/b;
else
{cout<<"0";
return0;
}
}
int main()
{
char symbol;
double num 1, num 2;
double results;
cout<<"Enter math symbol";
cin>>symbol;
cout<<"Enter 2 numbers";
cin>>num 1>>num2;
switch (symbol) {
case'+':
result= add(num1, num 2);
cout<<num1<<"+"<<num2<<"="<<result;
break;
case'-':
result= subtract(num1, num2);
cout<<num1<<"-"<<num2<<"="<<result;
break;
case'*':
result= multiply(num1, num2);
cout<<num1<<"*"<<num2<<"="<<reasult;
break;
case'/':
result= division(num1, num2);
if(b!=0){
cout<<num1<<"/"<<num2<<"="<<result;
}
break;
default:
cout<<"operation does not exist";
break;
}
return 0;







}
