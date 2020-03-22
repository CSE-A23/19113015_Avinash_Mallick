#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string str[n];
    for(int i=0;i<n;i++){
      cin>>str[i];
    }

  for(int i=0; i<n; i++)
    if(str[i].length()==2)
      cout<<str[i]<<endl;

  for(int i=0;i<n;i++){
    if(str[i][0] == 'r' && str[i][1] == 'a')
      cout<<str[i]<<endl;
  }
  return 0;
}
