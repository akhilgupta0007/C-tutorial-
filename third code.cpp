#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    int i=2;
    int f=0;
    while(num>i){
        if (num%i==0){
            f=1;
            break;
        }
        else{
            i++;
        }
    }
    if(f==0){
        cout<<"prime number";
    }
    else{
        cout<<"non prime";
    }
}
