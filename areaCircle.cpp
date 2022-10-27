#include <iostream>
const double pi = 3.14159265358979323846;
using namespace std;

int circleArea(float r){
    return (pi * r * r);
}

int main()
{
   float area , r;
   cout<<"Enter the Radius: ";
   cin>>r;
   area = circleArea(r);
   
   cout<< "The area of circle is: "<<area;
  
    return 0;
}
