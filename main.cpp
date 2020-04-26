// numberGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include <stdlib.h> 
#include <time.h>
#include <algorithm>
#include"Sorting.h"


using namespace std;
void createFile(){
    ofstream push;
    int p, i = 0;
    int n;
    push.open("text.txt", ios::out);
    cout << "how many randum number did you want to generate?" << endl;
    cin >> n;
    while (i < n)
    {
        p = rand() % n;
        push << p << " ";
        i++;
    }
    push.close();
}
void putnumArray(int* array, int size)
{
    cout << "Enter size of the array" << endl;
    cin >> size;
    //array[size];
    ifstream put;
    put.open("text.txt", ios::in);
    int i = 0;
    while (!put.eof())
    {
        put >> array[i];
        i++;
    }
    put.close();
    
}
//selection sort

int main()
{
    createFile();
    int size = 0;
    int j;
    ofstream push;
    
    cout<<" Enter the size of the arrays"<<endl;
    cin>>size;
    int* a_sorted= new int;
    int* d_sorted= new int;
    int* c_unsorted = new int;
    putnumArray(a_sorted, size);
    sort(a_sorted, a_sorted + size*90/100);

    cout << "almost sorted" << endl;
    push.open("a_text.txt", ios::out);
    for (int i = 0; i < size; i++)
    {   
        cout << a_sorted[i] << " " ;
        push<< a_sorted[i] << " " ;
    }
    cout << endl;
    push.close();
    insertionSort(a_sorted);
    cout<<endl<<"after Sorting"<<endl;
    for (int i = 0; i < size; i++)
    {   
        cout << a_sorted[i] << " " ;
        
    }
    cout<< endl;
    putnumArray(d_sorted, size);
   
    sort(d_sorted, d_sorted + size, greater<int>());
    cout << "descending order sorted" << endl;
    push.open("d_text.txt", ios::out);
    for (int i = 0; i < size; i++)
    {   
        cout << d_sorted[i] << " " ;
        push<<d_sorted[i] << " ";
    }
    cout << endl;
    push.close();
    insertionSort(d_sorted);
    cout<<endl<<"after Sorting"<<endl;
    for (int i = 0; i < size; i++)
    {   
        cout << d_sorted[i] << " " ;
        
    }
    cout<< endl;
    putnumArray (c_unsorted, size);
    cout << "completely unsorted" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << c_unsorted[i] << " " ;
    }
    cout << endl;
    push.close();
    insertionSort(c_unsorted);
    cout<<endl<<"after Sorting"<<endl;
    for (int i = 0; i < size; i++)
    {   
        cout << c_unsorted[i] << " " ;
        
    }
}



