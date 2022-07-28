#include<iostream>
using namespace std;
int largestnumber(int arr[],int n)
{
int max=arr[0];
for(int i=0;i<n;i++)
{
if(max<arr[i])
{
    max=arr[i];

}


}
    return max;

}

int main()
{
int arr[]= {1,3,6,5,2,7,8,9};
int max= largestnumber(arr,8);
cout<<max<<endl;



    return 0;
}