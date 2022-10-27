
#include <iostream>

using namespace std;

int main()
{
    int i,fact=1,number;    
    cout << "*** Find factorial of a Number ****"<<endl;
    cout <<"Enter a number: "; 
    cin >> number;    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
   cout <<"Factorial of " <<number <<" is: " << fact;    
return 0;  
}
