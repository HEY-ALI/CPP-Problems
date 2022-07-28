#include<iostream>
using namespace std;
   
 int smallestelement(int arr[], int n)
    {
        int min = arr[0];
for(int i=0; i<n; i++)
{ 
    if( min>arr[i])
  {  min=arr[i]; }

    }
    return min;

    }

int main()
{
    int arr[7]={2,4,6,1,3,5,9};
    int min;

    min = smallestelement(arr,7);
    cout<<min<<endl;

    return 0;
}

