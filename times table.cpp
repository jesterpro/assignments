#include<iostream>
using namespace std;
int fxn;
int main(){
int n,m,i;
cout<<"enter the times table u want to get"<<endl;
cin>>n;
if(n==0){

    cout<<n<<"*0="<<0;
}
else{
    for(i=1;i<=12;i++){
            m=n*i;
        cout<<n<<"*"<<i<<"="<<m<<endl;


}
}


return 0;
}
