#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],max=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[0]<A[i])
        {
            max=A[i];
        }
k
    }
    cout<<"Maximum element in the array is : "<<max;
}