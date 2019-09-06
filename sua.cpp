/*Stacks Using Arrays*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define MAX 5
int top =-1;
int a[5];
using namespace std;
class SUA
{
public :
void push();
void pop();
void display();
};
int main()
{
SUA obj;
int ch;
while(1)
{
cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.QUIT\n";
cout<<"Enter Your Choice : ";
cin>>ch;
switch(ch)
{
case 1: obj.push();
	break;
case 2: obj.pop();
	break;
case 3: obj.display();
	break;
case 4: exit(1);
default : cout<<"Wrong Choice\n";
}
}
}
void SUA::push()
{
int pushed_item;
if(top == (MAX-1))
cout<<"STACK OVER FLOW !!"<<endl;
else 
{
cout<<"ENTER THE ITEM TO BE PUSHED IN STACK : "<<endl;
cin>>pushed_item;
top = top+1;
a[top] = pushed_item;
}
}
void SUA::display()
{
int i;
if(top == -1)
cout<<"STACK IS EMPTY\n";
else
{
cout<<"STACK ELEMENTS : \n";
for(i=top;i>=0;i--)
cout<<a[i]<<"\n";
}
}
void SUA::pop()
{
if(top == -1)
cout<<"STACK UNDER FLOW "<<endl;
else
{
cout<<"POPPED ELEMENT : "<<a[top]<<endl;
top = top-1;
}
}
