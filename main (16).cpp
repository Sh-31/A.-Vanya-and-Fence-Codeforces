#include <iostream>
using namespace std;
int main()
{
  int n[1000],h=0,conter=0,output=0;
  cin>>conter>>h;
  
  for(int i=0;i<conter;i++)
  {
   cin>>n[i];
   
     if(n[i]>h)
     output+=2;
     else
     output+=1;
  }
   
  cout<<output; 
    return 0;
}
