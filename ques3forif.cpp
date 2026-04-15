#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the value of m"<<endl;
    cin>>m;
    int sum=0;
    for(int i=n; i<=m; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<"The sum of even numbers between "<<n<<" and " <<m<< " is "<<sum<<endl;
    return 0;
}