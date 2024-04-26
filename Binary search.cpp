// Online C++ compiler to run Binary search
#include <iostream>
using namespace std;
int main() {
 int arr[]={2,3,5,6,7};
 int size=5;
 int s =0;
 int e = size-1;
 int key=6;
//  bool flag= false;
 int a=0;
 while(s<=e) {
 int mid = (s+e)/2;
 if(arr[mid]==key)
 {
     cout<<"element found at "<<mid;
    //  flag=true;
    a=1;
     break;
 }
 else if(arr[mid]>key)
 {
     e=mid-1;
 }
 else 
 {
     s=mid+1;
 }
}
if(a!=1)
// if(!flag)
{
    cout<<"element not found";
}
 
    return 0;
}