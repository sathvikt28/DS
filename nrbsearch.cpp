/*Binary Search*/
#include<iostream>
using namespace std;
int binary_search(int list[],int key,int low,int high);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter No. Of Elements "<<endl;
cin>>n;
cout<<"Enter "<<n<<" Elements"<<endl;
for(i=0;i<n;i++)
cin>>list[i];
cout<<"Enter Key To Search : "<<endl;
cin>>key;
pos = binary_search(list,key,0,n-1);
if(pos == -1)
cout<<"Element Not Found "<<endl;
else
cout<<"Element found at index "<<pos<<endl;
}
int binary_search(int list[],int key,int low,int high)
{
int mid,pos = -1;
while (low <= high)
{
mid=(low + high)/2;
if(key == list[mid])
{
pos = mid;
break;
}
else if (key<list[mid])
low = mid+1;
}
return pos;
}
