#include<iostream>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else 
    return b;
}
int gcf(int a, int b){
    int ttt;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            ttt=i;
        }
    }
    return ttt;
}
int main(){
    int a; 
    cout<<"Enter a : ";
    cin>>a; 
    int b; 
    cout<<"Enter b : ";
    cin>>b;
    int hcf = gcf(a, b);
    cout<<"HCF OF "<<a<<" and "<<b<<" is "<<hcf;
}