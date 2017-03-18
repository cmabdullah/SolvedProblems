//============================================================================
// Name        : CPPT.cpp
// Author      : AbdullahKhan
// Version     :
// Copyright   : OpenSource
// Description : Hello World in C++, Ansi-style
//============================================================================

/*  Example Program For Simple Example Program Of Constructor Overloading In C++
    little drops @ thiyagaraaj.com

    Coded By:THIYAGARAAJ MP             */

#include<iostream>
#define pi 3.14
using namespace std;
class Area{
    // Variable Declaration
    int a,b;
    public:
    //Constructor wuithout Argument
    Area(){
    // Assign Values In Constructor
    a=50;
    b=100;
    cout<<a+b<<endl;
    }
    //Constructor with Argument
    Area(float x,float y)            {
    // Assign Values In Constructor
    a=x;
    b=y;
    cout<<"\n"<<a*b*pi;
    }
};

int main(){
	Area Object2;
	Area Object(10,20);
        return 0;
}

