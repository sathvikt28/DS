/*BINARY RECURSIVE SEARCH*/
#include<iostream>
using namespace std;
int rbinary_search(int list[],int key,int low,int high);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter No. Of Elements"<<endl;
cin>>n;
cout<<"Enter "<<n<<" Elements In Ascending Order"<<endl;
for(i=0;i<n;i++)
cin>>list[i];
cout<<"Enter Key To Search"<<endl;
cin>>key;
pos = rbinary_search(list,key,0,n-1);
if(pos == -1)
cout<<"Element Not Found"<<endl;
else
cout<<"Element Found At Index : "<<pos<<endl;
}
int rbinary_search(int list[],int key,int low,int high)
{
int mid,pos = -1;
if(low <= high)
{
mid = (low + high)/2;
if(key == list[mid])
{
pos = mid;
}
else if(key<list[mid])
return rbinary_search(list,key,low,mid-1);
else
return rbinary_search(list,key,mid+1,high);
}
return pos;
}
