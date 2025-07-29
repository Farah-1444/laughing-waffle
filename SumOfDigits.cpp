#include<iostream>
using namespace std;
int sumdig(int num){
    for(int i=0; i<=num; i++){
    int lastdig=num%10;
    num=num/10;
    num=num+lastdig;
    }
    return num;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    cout<<"sum of "<<n<<" is "<<sumdig(n);
    
}