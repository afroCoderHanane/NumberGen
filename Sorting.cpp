#include"Sorting.h"
int count_index =0;
int swap_index =0;
void reset()
{
   count_index =0;
   swap_index =0;
}
void swapnum(int &xp, int &yp)  
{  
    int temp = xp;  
    xp = yp;  
    yp = temp;  
}

void selectionSort(int *array, int size )
{
  
  int i ;
  int j ;
  

  for(i=0;i<size - 1;i++)
  {
    int index = i;
    for( j=i+1; j<size;j++)
       {
          count_index++;
         if(array[j]<array[index])
           { 
             index = j; 
             swapnum(array[index],array[i]);
             swap_index++;
           }
       }
  }
}

void insertionSort(int *array, int size)
{
 
  int i, index,value;
  for(i =1;i<size;i++)
  {
    value = array[i];
    index = i-1;
    count_index++;
    while(array[index]>value && index!=-1)
    {
      array[index+1]=array[index];
      index--;
      swap_index++;
      count_index++;
    }
    array[index+1]= value;
  }
  
}


void mergeSort (int a[], int first, int last)
{  
   if ( first < last )
   {  
     count_index++;
      int middle = (first+last) / 2;
      mergeSort (a,first,middle);
      mergeSort (a,middle+1,last);
      merge (a,first,middle,middle+1,last); 
   }
   
}

void merge (int a[], int lf, int ll, int rf, int rl)
{
   int temp[1000];
   int j = lf;
   int save = lf;

   while ( (lf <= ll) && (rf <= rl))
   {
      if (a[lf] < a[rf])
          {
            temp[j++] = a[lf++];
          }
      else 
          temp [j++] = a[rf++];     

      count_index++;
   }

   while (lf <= ll )
     temp[j++] = a[lf++];

   while ( rf <= rl )
     temp[j++] = a[rf++];

   for ( j = save; j<= rl; j++)
       a[j] = temp[j]; 
     
}

void quickSort ( int a[], int first, int last)
{
   if ( first < last ) 
   {  
      count_index++;
      int point;
      partition (a,first,last,point);
      quickSort (a,first,point-1 );
      quickSort (a, point+1, last);
   }
}

void partition ( int a[], int first, int last, int &p)
{
    int pivot = a[first];
    int j;
   
     p = first;

    for ( j = first+1; j <= last; j++)
    {   
         if ( a[j] < pivot )
         {
             p++;
             swapnum (a[p], a[j]);
             swap_index++;
             count_index++;
         }
    }
   
    swapnum (a[first], a[p]);
    swap_index++;
  
}
void print()
{
  cout<<"swaps= "<<swap_index<<" and  comparisons= "<<count_index<<endl;
}