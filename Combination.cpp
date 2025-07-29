#include<iostream>
using namespace std; 
int fact(int x){
int fact=1; 
for(int i=2; i<=x; i++){
    fact=fact*i;
}
return fact;
}
int main(){
    int n; 
    cout<<"Enter n : ";
    cin>>n;
    int r; 
    cout<<"Enter r : ";
    cin>>r; 
    int ncr = fact(n)/(fact(r)*fact(n-r));
    cout<<ncr;
}