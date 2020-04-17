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
    array[size];
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
    //cout<<" Enter the size of the arrays"
    int a_sorted[1000];
    int d_sorted[1000];
    int c_unsorted[1000];
    putnumArray(a_sorted, size);
    sort(a_sorted, a_sorted + 900);
    cout << "almost sorted" << endl;
    for (int i = 0; i < 1000; i++)
    {
        cout << a_sorted[i] << " " ;
    }
    cout << endl;
    putnumArray(d_sorted, size);
    int n = sizeof(d_sorted) / sizeof(d_sorted[0]);

    sort(d_sorted, d_sorted + n, greater<int>());
    cout << "descending order sorted" << endl;
    for (int i = 0; i < 1000; i++)
    {
        cout << d_sorted[i] << " " ;
    }
    cout << endl;

    putnumArray(c_unsorted, size);
    cout << "completely unsorted" << endl;
    for (int i = 0; i < 1000; i++)
    {
        cout << c_unsorted[i] << " " ;
    }
    cout << endl;
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
