#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str="Hello World";
  int nume=0,numl=0;
  for_each(begin(str),end(str),[&nume,&numl](char ch) { nume+=(int)(ch=='e'); numl+=(int)(ch=='l');});
  cout<<nume<<' '<<numl<<endl;
}
