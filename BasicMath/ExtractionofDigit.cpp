#include <iostream>
using namespace std;
void ExtractionOfDigit(long n);
int main()
{
    long n;
    cin>>n;
    ExtractionOfDigit(n);


}
void ExtractionOfDigit(long n)
{
    int rem=0,count=0;
    while(n!=0)
    {

        rem=n%10;
        cout<<rem;
        n=n/10;
        count++;
    }
    cout<<count;//No. of Extracted Digits
}