#include<iostream>
#include<climits>
using namespace std;
 int secondlargest(int arr[], int n)
 {
int large = INT_MIN;
int secondlarge = INT_MIN;

for(int i=0; i<n; i++)
{
    if(arr[i]>large)
    {
secondlarge = large;
large = arr[i];
 }

 else if(arr[i]>secondlarge && arr[i] != large)
 secondlarge = arr[i];




}

return secondlarge;

 }

 int main()
 {
int arr[]={2,3,1,5,4};
int secondlargenumber = secondlargest( arr,5);
cout<<secondlargenumber<<endl;




    return 0;
 }