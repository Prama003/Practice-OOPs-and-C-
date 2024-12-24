#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    int b; 
    int c;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"enter the third number"<<endl;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"the greatest number is "<<a<<endl;
    }
    if(b>a && b>c)
    {
        cout<<"the greatest number is "<<b<<endl;
    }
    else{
        cout<<"the greatest number is "<<c<<endl;
    }
    int avg;
    avg=(a+b+c)/3;
    cout<<"the average of these numbers are"<<avg<<endl;
    return 0;
}
