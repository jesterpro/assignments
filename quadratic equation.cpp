//Quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
void coefficient(double a, double b, double c){
 double d= (b)*(b)-4*a*c;
 cout<<"Equation:"<<" "<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
 cout<<"discriminant="<<d<<endl;
 
if(d>0){
	double x1= (-b+sqrt(d))/(2*a);
	double x2= (-b-sqrt(d))/(2*a);
	cout<<"Roots are equal"<<endl;
	cout<<"real roots are:"<<" "<<"x1="<<" "<<x1<<","<<" "<<"x2="<<" "<<x2<<endl;
	 }else if(d==0){
	    double x3= (-b)/(2*a);
	    cout<<"Roots are real"<<endl;
		cout<<"real root:"<<" "<<"x="<<" "<<x3<<endl;
		}else if(d<0){
			double real= -b/(2*a);
			double imaginary= sqrt(-d)/(2*a);
			cout<<"roots are complex"<<endl;
			cout<<"x1="<<" "<<real<<"+"<<imaginary<<endl;
			cout<<"x2="<<" "<<real<<"-"<<imaginary<<endl;
		}
}
int main()
{
	double a, b, c;
    cout<<"Enter a"<<endl;
	cin>> a;
    cout<<"Enter b"<<endl;
    cin>> b;
    cout<<"Enter c"<<endl;
    cin>> c;
 
    coefficient(a, b, c);
    
    return 0;
}
