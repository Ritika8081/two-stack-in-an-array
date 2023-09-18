/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Stack{
    public:
    int top1;
    int top2;
    int *arr;
    int size;
    Stack(int size){
        arr =new int[size];
        this->size=size;
         top1=-1;
         top2=size;
        
    }
    void push1(int data){
        if(top1-top2==1){
          cout<<"over flow";
        }
        else{
            top1++;
           arr[top1]=data;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"underflow";
        }
        else{
            arr[top1]=0;
            top1--;
            
        }
    }
    void push2(int data){
        if(top1-top2==1){
          cout<<"over flow";
        }
        else{
            top2--;
           arr[top2]=data;
        }
    } 
    void pop2(){
        if(top1==size){
            cout<<"underflow";
        }
        else{
            top2++;
            
        }
    }
    void print(){
        cout<<top1<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main()
{
  Stack s(10);
  s.push1(20);
  s.print();
   s.push1(30);
   s.print();
    s.push1(40);
    s.print();
   
//   s.push2(20);
//   s.print();
//   s.push2(30);
//   s.print();
//     s.push2(40);
//     s.print();
s.pop1();
  s.print();
   s.pop1();
   s.print();
    s.pop1();
    s.print();
    return 0;
}
