//program to calculate the area of a circle 
#include<iostream>
using namespace std;
float circle(int r);//function prototype 

int main(){
int radius;
float Area;
cout<<"enter radius"<<endl;
cin>>radius;
Area=circle(radius);  //function  calling
cout<<"the area is"<<Area<<endl;
return 0;
}

float circle(int r){  //function  Definition
float area;
area=3.142*r*r;
return area;
}
