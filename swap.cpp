#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter both number;";
    cin>>x>>y;
    int temp=x;
    x=y;
    y=temp;
    
    cout<<x<<"and"<<y;
    return 0;
}
