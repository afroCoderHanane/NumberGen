#include <iostream>
#include<fstream>
#include <stdlib.h> 
using namespace std;
int main() {
  ofstream push;
  int p, i=0;
  int n;
  push.open("text.txt");
  cout<<"how many randum number did you want to generate?"<< endl;
  cin>>n;
  while(i<n)
  { 
    p =rand()%n;
    push<<p<<" ";
    i++;
  }
  push.close();
  return 0;
}