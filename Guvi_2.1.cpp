#include<bits/stdc++.h>
using namespace std;

class student
{
  public:
  int RegNo, Chemistry, Maths, Physics;
  string name;
};

int main()
{
  int n;
  cin>>n;
  student s[n];
  for(int i=0;i<n;i++)
    cin>>s[i].name>>s[i].RegNo>>s[i].Chemistry>>s[i].Maths>>s[i].Physics;

  int max=-1;
    for(int i=0;i<n;i++){
      if(s[i].Chemistry<0||s[i].Chemistry>100||s[i].Maths<0||s[i].Maths>100||s[i].Physics<0||s[i].Physics>100)
      {
        cout<<"Marks of "<<s[i].name<<" is not in range"<<endl;
        continue;
      }
  if((s[i].Chemistry + s[i].Maths + s[i].Physics) > max)
    max=i;
    }
  cout<<s[max].name<<" has scored highest total "<<s[max].Chemistry + s[max].Maths + s[max].Physics;
  return 0;
}
