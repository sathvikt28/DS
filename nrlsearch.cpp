/*Linear Search*/
#include<iostream>
using namespace std;
int Lsearch (int list[],int n,int key);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter No. Of Elements : "<<endl;
cin>>n;
cout<<"Enter "<<n<<" Elements"<<endl;
for(i=0;i<n;i++)
cin>>list[i];
cout<<"Enter Key To Search"<<endl;
cin>>key;
pos = Lsearch(list,n,key);
if(pos == -1)
cout<<"Element Not Found"<<endl;
else
cout<<"Element found at index "<<pos<<endl;
}
int Lsearch(int list[],int n,int key)
{
int i,pos = -1;
for(i=0;i<n;i++)
if(key == list[i])
{
pos = i;
break;
}
return pos;
}

