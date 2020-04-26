#include"Sorting.h"

void swapnum(int &xp, int &yp)  
{  
    int temp = xp;  
    xp = yp;  
    yp = temp;  
}

void selectionSort(int *array)
{
  int size; 
  cout<<"Enter size "<<endl;
  cin >> size ;
  int i ;
  int j ;
  int count=0;
  int n=0;

  for(i=0;i<size - 1;i++)
  {
    int index = i;
    for( j=i+1; j<size;j++)
       {
          n++;
         if(array[j]<array[index])
           { 
             index = j; 
             swapnum(array[index],array[i]);
             count++;
           }
       }
  }
  cout<<"count is "<<count<<" and comparison is "<<n <<endl;
}
void insertionSort(int *array)
{
  int size=0;
  int swap=0,count=0;
  cout<<"Enter insertion sort size"<<endl;
  cin>>size;
  int i, index,value;
  for(i =1;i<size;i++)
  {
    value = array[i];
    index = i-1;
    count++;
    while(array[index]>value && index!=-1)
    {
      array[index+1]=array[index];
      index--;
      swap++;
      count++;
    }
    array[index+1]= value;
  }
  cout<<"count is "<<swap<<" and comparison is "<<count <<endl;
}