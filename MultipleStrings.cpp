#include<iostream>
using namespace std;
void korea(){
    cout<<"i love korean street food"<<endl;
    return; 
}
void paris(){
    cout<<"i also like paris"<<endl;
    korea();
    return;
}
void pakistan(){
    cout<<"i'm from pakistan"<<endl;
    paris();
    return;
}
void france(){
    cout<<"i wanna go to france"<<endl;
    pakistan();
    return; 
}
void india(){
    cout<<"i'm not from india"<<endl;
    france(); 
    return ;
}
int main(){
    india();
    return 0;
}