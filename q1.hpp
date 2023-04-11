#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************

void getinput(int &a,int &b){
    cin>>a>>b;
}

void swapTwoValues(int &a, int &b){
    int temp=a;
    a=b;
    b=a;
}

void getinput(float &a,float &b){
    cin>>a>>b;
}

void swapTwoValues(float &a, float&b){
    float temp=a;
    a=b;
    b=temp;
}