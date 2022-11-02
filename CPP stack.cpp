//implementation of stacjk using array
#include <iostream>

using namespace std;

 int arr[6];
  int top = -1;
  int isStackFull(){
      if(top==5)
          return 1;
          return 0;
  }
  void push(int val){
      if(isStackFull())
          cout <<"unable to push data: "<<val<<endl;
      else{
          top++;
          arr[top]=val;
      }
  }
  
  int isStackEmpty(){
      if(top==-1)
          return 1;
          return 0;
  }
  void pop(){
      if(isStackEmpty())
          cout<<"Stack is empty"<<endl;
         
        else {
            cout<<"Pop element is "<<arr[top]<<endl;
            top--;
        }
  }
int main()
{
    push(45);
    push(78);
    push(68);
    push(85);
    push(63);
    push(74);
  
 //pop(); pop();pop();pop();pop();
 //pop(); pop();pop();pop();pop();
    return 0;
}
