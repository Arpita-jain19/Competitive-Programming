#include <bits/stdc++.h>
using namespace std;
void FindMinMax(int A[],int size);
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
    FindMinMax(A,size);
}
void FindMinMax(int A[],int size)
{

    sort(A,A+(size-1));
    cout<<A[0]<<"\n";
    cout<<A[size-1];
}
