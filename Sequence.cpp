#include"Sequence.h"
#include<vector>
#include<algorithm>
#include<fstream>

Sequence::Sequence(string filename)
{
   string a;
   const char*p=filename.data();
   file.open(p);
   getline(file,str);
   while(getline(file,a))
   {
      str+=a;
   }
}
int Sequence::length()
{
   return str.length();
}
int Sequence::numberOf(char base)
{
   int N=0;
   for(int i=0;i<length();i++)
   {
      if(str[i]==base)
         N++;
   }
   return N;
}
string Sequence::longestConsecutive()
{
   string test;
   int cur=0;
   string maxValue;
   int max=0;
   for(int i=0;i<length();i++)
   {
      test=test+str[i];
      cur++;
      for(int j=i+1;j<length();j++)
      {
         if(str[j]==str[i])
         {
            test=test+str[j];
            cur++;
         }
         else
            break;
      }
      if(cur>max)
      {
         maxValue=test;
         max=cur;
      }
      test=" ";
      cur=0;
   }
   return maxValue;
}
string Sequence::longestRepeated()
{
   vector<string>vs(length());
   for(int i=0;i<length();i++)
   {
      vs[i]=str.substr(length()-i-1,500);
   }
   sort(vs.begin(),vs.end());
   int maxl=0;
   string a;
   for(int i=0;i<vs.size()-1;i++)
   {
      string cur=vs[i];
      string nt=vs[i+1];
      int x=0;
      for(int j=0;j<min(cur.length(),nt.length());j++)
      {
         if(cur[j]!=nt[j])
         {
            x=0;
            break;
         }
         else if(cur[j]==nt[j])
            x++;
         if(x>maxl)
         {
            maxl=x;
            a=nt.substr(0,maxl);
         }
      }
   }
   return a;
}
