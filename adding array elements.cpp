#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements "<<endl;
	cin>>n;
	int* a= new int[n];
	cout<<"Enter "<<n<<"numbers: "<<endl;
	for (int i=0; i<n; i++){
		cin>> a[i];
	}
	int sum= 0;
	
	for(int i=0; i<n; i++){
		sum+=a[i];
	}
cout<<"sum: "<<sum<<endl;
delete[] a;
return 0;

}
