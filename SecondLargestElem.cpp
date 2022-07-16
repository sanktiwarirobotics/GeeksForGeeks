#include <iostream>

using namespace std;

int main()
{
int arr[]={-2,-3,-4,-5,-6};
int i;
int max=arr[1];
int max1=arr[1];
int ind=0;
// cout<<"Array:"<<arr;

for(i=0;i<5;i++){
    cout<<arr[i];

}
for(i=0;i<5;i++){
    
    if(arr[i]>max)
   { max=arr[i];ind=i;}
}

cout<<"\n"<<"Largest:"<<max<<"\n";
// cout<<ind<<"Inxe"<<"\n";
for(i=0;i<5 && i!=ind;i++){
    
    if(arr[i]>max1)
   max1=arr[i];
}
cout<<"Secon Largest:"<<max1;
}
