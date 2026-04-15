#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    if(n%3==0 and n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;
}