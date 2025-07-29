#include<iostream>
using namespace std; 
int function(int x){
    int fact=1; 
    for(int i=2; i<=x; i++){
        fact= fact*1;
    }
return fact;
}
int main(){
int n; 
cin>>n;
int r;
cin>>r;
int npr =function(n)/function(n-r);
cout<<npr;
return 0;
}
