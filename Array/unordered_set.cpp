#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    // Write your code here
    int temp=n;
    int res=0,rem;
    while(n!=0)
    {
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }
    if(res==temp)
    {
        return true;
    }
    else{
        return false;
    }
}

int main() {
   /*unordered_set<int>us;
   us.insert(1);
   us.insert(2);
   us.insert(3);

  for(auto i=us.begin();i!=us.end();i++)
  {
      cout<<* i<<" ";
  }

    return 0;*/
    int n;
    cin>>n;
    bool result=palindrome(n);
    cout<<result;

}
