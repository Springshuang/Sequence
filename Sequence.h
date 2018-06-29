#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<stdio.h>

using namespace std;

class Sequence
{
public:
   Sequence(string filename);
   int length();
   int numberOf(char base);
   string longestConsecutive();
   string longestRepeated();
private:
   string str;
   ifstream file;
};

#endif
