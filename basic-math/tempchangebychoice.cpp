// Program to convert temperature using user choice
#include <iostream>
using namespace std;
int main(){
    int choice;
    float temp;
    cout<<"Enter 1 to convert temp to fahrenheit "<<endl;
    cout<<"Enter 2 to convert temp to celsius "<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    //Choice 1: Celsius to Fahrenheit
    if(choice==1){
    cout<<"Enter the temperature in celsius: ";
    cin>>temp;
        cout<<"Temperature in fahrenheit is: "<<(temp * 9 / 5) + 32<<endl;
    }
    //Choice 2: Fahrenheit to Celsius
    else if(choice==2){
        cout<<"Enter the temperature in fahrenheit: ";
    cin>>temp;
        cout<<"Temperature in celsius is: "<<(temp - 32) * 5 / 9<<endl;
    }
    else
        cout<<"Invalid choice"<<endl;
    return 0;


}
