#include<iostream>
using namespace std;
int facto(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
int n;
cout<<"Enter n : ";
cin>>n;
cout<<facto(n);
return 0;
}