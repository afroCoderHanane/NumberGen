#include <iostream>
#include<fstream>
#include <stdlib.h> 
using namespace std;
int main() {
  ofstream push;
  int p, i=0;
  push.open("text.txt");
  while(i<1000)
  { 
    p =rand()%1000;
    push<<p<<" ";
    i++;
  }
  push.close();
  return 0;
}