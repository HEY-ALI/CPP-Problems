#include<iostream>
#include<climits> 
using namespace std;
int secondsmallest(int arr[], int n)
 { 
int small = INT_MAX;
int secondsmall = INT_MAX;

for (int i=0;i<n;i++)
{
if(arr[i]<small)
{
secondsmall=small;
small=arr[i];
}
else if (arr[i] < secondsmall && small != arr[i])
{ secondsmall=arr[i];
}
}

return secondsmall;
 }

 int main()
 {
int arr[] = {6,3,5,4,7};
int secondsmall= secondsmallest(arr,5);
cout<<secondsmall<<endl;




    return 0;
 }