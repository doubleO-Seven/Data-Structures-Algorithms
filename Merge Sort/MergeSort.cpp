#include<bits/stdc++.h>
using namespace std;

void mergesort(int i, int j, int a[], int aux[])
{
    if(j<=i) // i == j hoile to mattro 1ta elemnt thakbe ar i, j er cheye choto hoile sekhane ek er besi element thakbe
    {
        return;

    }
    int mid = (i+j)/2;  // eta devide and concure rules mane so 2ta part e bivokto kotr hobe
    
    mergesort(i, mid, a, aux); // aux mane amaader sprt korte extra array lagbe
    mergesort(mid+1, j, a, aux);
    
    int leftpointer = i; // left shuru hoise 1st element theke mane i theke
    int rightpointer = mid + 1; // right shuru hoise mmid er porer ta theke
    int k;  // for loop count
    
    for ( k=i; k<= j; k++)
    {
        if(leftpointer == mid + 1)// emon hoile seta left ke cross kore right e chole jabe
        {
            aux[k] = a[rightpointer]; // mid +1 hoile to seta right part er element hobe so seta ke right e rekhe dibo
            rightpointer++;  // and right dik er baki element gula check korbo
        }
        
        else if(rightpointer == j + 1)
        {
            aux[k] = a[leftpointer]; // same logic as right, but eibar to amader lef t ke check korte hobe
            leftpointer++;
        }
        
        else if(a[leftpointer] < a[rightpointer])  // leftpointer points the smaller left element
        {
            aux[k] = a[leftpointer];
            leftpointer++;
        }
        else
        {
            aux[k] = a[rightpointer];
            rightpointer++;
        }
    }
    
    
    for ( k=i; k<= j; k++)
    {
        a[k] = aux[k]; // copy the aux element to a[]
    }
    
}


int main()
{
    int n, aux[100], a[100], i, d;
    cout<<"Enter the no of element: ";
    cin>>n;
    cout<<"Ente values: "; 
    
    for (i = 0; i < n; i++)
        cin>>a[i];
        
    mergesort(0, n - 1, a, aux);
    cout<<"Printing the sorted array: ";
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}
