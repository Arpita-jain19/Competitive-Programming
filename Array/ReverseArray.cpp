#include <bits/stdc++.h>
using namespace std;
void ReverseArray(int A[],int size);
int main()
{
    int A[10];
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++)
    {

        cin>>A[i];
    }
    ReverseArray(A,size);
}
void ReverseArray(int A[],int size)
{
    cout<<"Reverse Array is ";
    for(int i=size-1;i>=0;i--)
    {
        cout<<A[i]<<"\t";
    }
}
