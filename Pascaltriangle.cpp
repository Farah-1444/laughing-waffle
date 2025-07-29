#include<iostream>
using namespace std; 
int func(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
    fact=fact*i;
    }
    return fact;
}
int comb(int i, int j){
    int ij=func(i)/((func(j))*(func(i-j)));
    return ij;
}
int main(){
    int n; 
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
        return 0;
}