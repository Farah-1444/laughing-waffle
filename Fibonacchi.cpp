#include<iostream>
using namespace std;
long long fibboo(int x){
        long long a=1, b=1, sum , i;
        for( i=1; i<=x; i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        return b;
    }
    
int main(){
    int a, b, sum;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
    cout<<fibboo(i)<<" ";
    }
    return 0;
}