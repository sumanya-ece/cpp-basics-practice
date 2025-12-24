#include <iostream>
using namespace std;
int main(){
    int choice;
    float temp;
    cout<<"Enter 1 to convert temp to fahrenheit "<<endl;
    cout<<"Enter 2 to convert temp to celsius "<<endl;
    cout<<"Enter choice: ";
    cin>>choice;

    if(choice==1){
    cout<<"Enter the temperature in celsius: ";
    cin>>temp;
        cout<<"Temperature in fahrenheit is: "<<(temp * 9 / 5) + 32<<endl;
    }
    else if(choice==2){
        cout<<"Enter the temperature in fahrenheit: ";
    cin>>temp;
        cout<<"Temperature in celsius is: "<<(temp - 32) * 5 / 9<<endl;
    }
    else
        cout<<"Invalid choice";
    return 0;


}
