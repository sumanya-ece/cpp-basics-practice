#include <iostream>
using namespace std;
int main(){
    int a,b; // Declare two integer variables for numbers
    cout<<"Enter two numbers: ";
    cin>>a>>b; // Take input for the two numbers
    
    char op; // Declare a character variable to store the operator
    cout<<"Enter operator(+, -, /, *, %): ";
    cin>>op;  // Take input for the operator
  
  // Perform operation based on the operator using if-else if statements
    if(op=='+')
    cout<<"Result is: "<<(a+b);    // Addition
    else if(op=='-')
    cout<<"Result is: "<<(a-b);   // Subtraction
    else if(op=='/')
    cout<<"Result is: "<<(a/b);   // Division
    else if(op== '*')
    cout<<"Result is: "<<(a*b);   // Multiplication
    else if(op== '%')
    cout<<"Result is: "<<(a%b);   // Modulus (remainder)

    else 
    cout<<"Invalid operator";    // If operator is not recognized
    return 0;
}
