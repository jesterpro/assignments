#include<iostream>
using namespace std;
unsigned long long factorialRecursive(int n){
if(n<0){
    return 0;
}
if(n==0||n==1){
    return 1;
}
return n*factorialRecursive(n-1);
}
int main(){
int number;
cout<<"Enter a non negative number: ";
cin>>number;
if(number<0){
    cout<<"Factorial is not defined for negative numbers."<<endl;
}
else{
     unsigned long long result=factorialRecursive(number);
    cout<<"factorial of "<<" "<<number<<" is"<<" "<<result<<endl;
}
return 0;
}
