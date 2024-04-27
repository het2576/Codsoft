#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    cout<<"Choose one operand + , - , * , /"<<endl;
    cin>>op;
    cout<<"Enter the two numbers"<<endl;
    cin>>num1;
    cin>>num2;

    switch (op)
    {
    case '+' :
       cout<<"The Sum is :"<<num1+num2<<endl;
        break;
    case '-' :
       cout<<"The Substraction is :"<<num1-num2<<endl;
        break;
    case '*' :
       cout<<"The Multiplication is :"<<num1*num2<<endl;
        break;
    case '/' :
    if (num2==0)
    {
        cout<<"Infinite.."<<endl;
    }
    else{
        cout<<"The Division is :"<<num1/num2<<endl;
        break;
    }
    
    default:
    cout<<"Invalid Operation..!!"<<endl;
        break;
    }
    
    return 0;
}