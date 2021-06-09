#include<iostream>
#include<algorithm>
#include<climits>
int main()
{
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++)
{
cin>>array[n];
}
int key;
cin>>key;
for(int i=0;i<n;i++)
{
if(key==array[i])
{
pos=i;
}
}
cout<<pos<<endl;
return 0;
}
