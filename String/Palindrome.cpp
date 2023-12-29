/*You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.*/

#include <bits/stdc++.h> 
bool isValid(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
      (ch >= '0' && ch <= '9')) {
    return 1;
  }
    return 0;
}
char toLower(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
    return ch;
    else
    return ch-'A'+'a';
}
int palindrome(string a)
{
    int st=0;int e=a.length()-1;
    while(st<=e)
    {
        if(a[st]!=a[e])
        {
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    string temp="";
    int n=s.size();
    for(int i=0;i<n;i++){
        if (isValid(s[i])) {
            temp.push_back(s[i]);
        }
    }
    for(int i=0;i<temp.length();i++)
    {
        temp[i]=tolower(temp[i]);
    }
    return palindrome(temp);
}