/*RECURSIVE LINEAR SEARCH*/
#include<iostream>
using namespace std;
int rec_lsearch(int list[],int n,int key);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter No. Of Elements\n";
cin>>n;
cout<<"Enter "<<n<<" Elements"<<endl;
for(i=0;i<n;i++)
cin>>list[i];
cout<<"Enter Key To Search";
cin>>key;
pos = rec_lsearch(list,n,key);
if(pos == -1)
cout<<"\nElement Not Found"<<endl;
else
cout<<"\nElement Found At Index : "<<pos<<endl;
}
int rec_lsearch(int list[],int n,int key)
{
if(n<=0)
return -1;
if(list[n] == key)
return n;
else
return rec_lsearch(list,n-1,key);
}
