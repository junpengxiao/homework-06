#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str="Hello world";
  int fin;
  cin>>fin;
  int n=str.length();
  unique_ptr<string>ptr(new string(str));
  for(int i=0;i!=fin;i++) {
    auto ch=(*ptr)[n-1];
    for(int j=n-1;j!=0;j--) (*ptr)[j]=(*ptr)[j-1];
    (*ptr)[0]=ch;
  }
  cout<<*ptr<<endl;
}
