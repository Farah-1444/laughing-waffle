#include<iostream>
#include<math.h>
using namespace std;
int prime(int n){
    int i;
    for(i=2; i<=sqrt(n); i++){
    if(n%i==0){
        cout<<"not a prime";
        return 0;}
    }
    cout<<"it is a PM";
return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<prime(n);
    return 0;
}