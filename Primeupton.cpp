#include<iostream>
#include<math.h>
using namespace std;
int prime(int n){
    for(int i=2; i<=sqrt(n); i++){
    if(n%i!=0){
        return 1;
        }
    }
    return 0;
}
int main(){
int a;
cout<<"Enter n : ";
cin>>a;
for(int i=2; i<=a; i++){
if(prime(i)){
cout<<i<<" ";
    }
}
return 0;
}