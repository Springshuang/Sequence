#include<iostream>
#include<fstream>
#include"Sequence.h"

using namespace std;

int main()
{
   Sequence S("/data/dna.txt");
   cout<<"Length:"<<S.length()<<endl;
   cout<<"A:"<<S.numberOf('A')<<endl;
   cout<<"G:"<<S.numberOf('G')<<endl;
   cout<<"C:"<<S.numberOf('C')<<endl;
   cout<<"T:"<<S.numberOf('T')<<endl;
   cout<<"Longest Consecutive:"<<S.longestConsecutive()<<endl;
   cout<<"Longest Repeated:"<<S.longestRepeated()<<endl;
   return 0;
}
