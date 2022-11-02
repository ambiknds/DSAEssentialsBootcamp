//calc, add, sub, mul,facttorial,power, squareroot
#include <bits/stdc++.h>

using namespace std;

void addition(){
    cout<< "enter the number to add: ";
    int x,y;
    cin>>x>>y;
    cout<<"The sum of "<<x<<" and "<<y<< " is "<<x+y<< endl;
}

void subtraction(){
    cout<< "enter the number to subtract: ";
    int x,y;
    cin>>x>>y;
    cout<<"The subtraction of "<<x<<" and "<<y<< " is "<<x-y<< endl;
}

void multiplication(){
    cout<< "enter the number to multiply: ";
    int x,y;
    cin>>x>>y;
    cout<<"The product of "<<x<<" and "<<y<< " is "<<x*y<< endl;
}

void division(){
    cout<< "enter the number to divide: ";
    int x,y;
    cin>>x>>y;
    cout<<"The division of "<<x<<" and "<<y<< " is "<<(float)x/(float)y<< endl;
}

void factorial(){
    int n, fact=1;
    cout << "enter the number: ";
    cin>>n;
    for(int i = 1;i<=n;i++)
    fact=fact*i;
    cout <<"Factorial of a number " << n <<" is: "<<fact;
}

void power(){
    int x,y,power;
    cout << "Enter the number: ";
    cin>>x;
    cout<<"\nEnter the power: ";
    cin>>y;
    power=pow(x,y);
    cout << "\nThe power of "<<x<< "^"<<y<< " is "<<power<<endl;
    
}
void square(){
    int x,power;
    cout << "Enter the number: ";
    cin>>x;
    power=pow(x,2);
    cout << "\nThe square of "<<x<< " is "<<power<<endl;
    
}

void cube(){
    int x,power;
    cout << "Enter the number: ";
    cin>>x;
    power=pow(x,3);
    cout << "\nThe square of "<<x<< " is "<<power<<endl;
    
}
void squareRoot(){
    int x;
    float power;
    cout << "Enter the number: ";
    cin>>x;
    power=sqrt(x);
    cout << "\nThe square root of "<<x<< " is "<<power<<endl;
    
}
int main(){
    cout<<"######### Calculator #########\n";
    cout<<"Enter 0 to end the Program \n";
    cout<<"Enter 1 for Addition\n";
    cout<<"Enter 2 for Subtraction\n";
    cout<<"Enter 3 for Multiplication\n";
    cout<<"Enter 4 for Division\n";
    cout<<"Enter 5 for Factorial\n";
    cout<<"Enter 6 for Power\n";
    cout<<"Enter 7 for Square\n";
    cout<<"Enter 8 for Cube\n";
    cout<<"Enter 9 for Square root\n";
    int choice;
     while(true)
    {
    cout<<"Enter your Choice: ";
    cin>>choice;
   
    switch(choice){
        case 0:
        cout << "Thank you.";
        exit(0);
        break;
        
        case 1:
        addition();
        break;
        
        case 2:
        subtraction();
        break;
        
        case 3:
        multiplication();
        break;
        
        case 4:
        division();
        break;
        
        case 5:
        factorial();
        break;
        
        case 6:
        power();
        break;
        
        case 7:
        square();
        break;
        
        case 8:
        cube();
        break;
        
        case 9:
        squareRoot();
        break;
        
        default:
        cout<<"Your choice is wrong.\n";
        break;
    }
    }
    return 0;
}
