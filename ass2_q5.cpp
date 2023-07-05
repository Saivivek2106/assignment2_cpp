#include<iostream>
using namespace std;
int main(){
    int n,first,second,third;
    cout<<"Enter a three digit number:";
    cin>>n;
    first=n/100;
    n=n%100;
    second=n/10;
    n=n%10;
    third=n;
    cout<<"Sum of the number is:"<<first+second+third<<endl;
    return 0;
}