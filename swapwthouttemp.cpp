#include<iostream>
using namespace std;
int main(){
    int n1; 
    cout<<"Enter n1 : ";
    cin>>n1;
    int n2; 
    cout<<"Enter n2 : ";
    cin>>n2;

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    cout<<"After awapping without temp : "<<endl;
    cout<<"n1 is : "<<n1<<endl;
    cout<<"n2 is  : "<<n2<<endl;
}