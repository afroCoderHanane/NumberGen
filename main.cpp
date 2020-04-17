// numberGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include <stdlib.h> 
#include <algorithm>

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
    sort(a_sorted, a_sorted + 90);
    cout << "almost sorted" << endl;
    push.open("a_text.txt", ios::out);
    for (int i = 0; i < size; i++)
    {   
        cout << a_sorted[i] << " " ;
        push<< a_sorted[i] << " " ;
    }
    cout << endl;
    push.close();
    putnumArray(d_sorted, size);
    int n = sizeof(d_sorted) / sizeof(d_sorted[0]);

    sort(d_sorted, d_sorted + n, greater<int>());
    cout << "descending order sorted" << endl;
    push.open("d_text.txt", ios::out);
    for (int i = 0; i < size; i++)
    {   
        cout << d_sorted[i] << " " ;
        push<<d_sorted[i] << " ";
    }
    cout << endl;
    push.close();
    putnumArray (c_unsorted, size);
    cout << "completely unsorted" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << c_unsorted[i] << " " ;
    }
    cout << endl;
    push.close();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
