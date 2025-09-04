#include <iostream>
using namespace std;

class Vehicle{
public:
    string company;
    string model;
    string made_in;
    string type;
    float year;
    float price;
};

int main() {
    Vehicle v1;
    cout<<"Vehicle information of 1"<<endl;
    cout<<"Enter the type of vehicle: "<<endl;
    cin>>v1.type;
    if(v1.type == "Car"){
    cout<<"Enter the name of the company: "<<endl;
    cin>>v1.company;
    cout<<"Enter the name of the model: "<<endl;
    cin>>v1.model;
    cout<<"Enter the made in country: "<<endl;
    cin>>v1.made_in;
    cout<<"Enter the year of manufacture: "<<endl;
    cin>>v1.year;
    cout<<"Enter the price of vehicle: Rs."<<endl;
    cin>>v1.year;
    }
    else{
        cout<<"PLEASE ENTER THE DETAILS OF CAR ONLY";
    }
    cout<<endl;
    cout<<endl;
    
    Vehicle v2;
    cout<<"Vehicle information of 2"<<endl;
    cout<<"Enter the type of vehicle: "<<endl;
    cin>>v2.type;
    if(v2.type == "Bike" || v1.type == "Motorcycle"){
    cout<<"Enter the name of the company: "<<endl;
    cin>>v2.company;
    cout<<"Enter the name of the model: "<<endl;
    cin>>v2.model;
    cout<<"Enter the made in country: "<<endl;
    cin>>v2.made_in;
    cout<<"Enter the year of manufacture: "<<endl;
    cin>>v2.year;
    cout<<"Enter the price of vehicle: Rs."<<endl;
    cin>>v2.year;
    }
    else{
        cout<<"PLEASE THE DETAILS OF BIKE/MOTORCYCLE ONLY";
    }
    cout<<endl;
    
    return 0;
}
