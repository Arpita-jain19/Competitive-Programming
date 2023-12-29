#include <iostream>
using namespace std;
void DivisorsOfNum(long n);
int main()
{
    long n;
    cin>>n;
    DivisorsOfNum(n);

}
void DivisorsOfNum(long n){
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<"\t";
        }
    }
}