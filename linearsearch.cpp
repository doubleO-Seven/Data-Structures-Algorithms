#include <iostream>
using namespace std;


int linearSearch(int arr[], int n,int key)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    
    int key;
    cout<<"Enter the value to find index: ";
    cin>>key;
    
    cout<<"The index of "<<key<<" is: ";
    cout<<linearSearch(arr, n, key)<<endl;

    return 0;
}
