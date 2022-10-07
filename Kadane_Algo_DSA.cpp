#Kadane algorithm - DSA 
#Author : Logeswaran GUNASEKARAN
# Print the Largest Sum Contiguous Subarray

#include <iostream>

using namespace std;

void largest_sum_array(int a[], int n)
{
    int max_so_far=0, max_now =0, start=0, s=0, end;
    for(int i=0; i<n;i++)
    {
        max_now+=a[i];
        if(max_now > max_so_far)
        {
            max_so_far = max_now;
            start=s;
            end = i;
        }
        
        if(max_now <0 )
        {
            max_now =0;
            s =i+1;
        }
    }
    cout<< max_so_far;
    //cout<<start<<endl;
    //cout<<end<<endl;
}

int main()
{
    int arr[] = {8,-9,7,-5,-5,1,-3};
    int size = sizeof(arr)/sizeof(arr[0]);
    largest_sum_arry(arr, size);

    return 0;
}
