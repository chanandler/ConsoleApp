// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "ExampleClass.h"
#include "Windows.h"
void test(ExampleClass* Test3, char* arr);

using namespace std;

int main()
{
    ExampleClass* newclass = new ExampleClass();
    
    char* arr = new char[400];
    memset(arr, 0, 400);
    char* lst = &arr[0];
    for (int i = 0; i < 100; i++)
    {

        sprintf_s(lst, 4, "%i,", i);
        char* nxt = strchr(lst, ',');
        lst = nxt + 1;
        //memcpy(&arr[i], tempbuf, 1);
    }

    test(newclass, arr);
    delete[] arr;
    delete newclass;

    return 0;
}

void test(ExampleClass* Test3, char* arr)
{
    HANDLE ourConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int i = 0; i < 255; i++)
    {
        std::cout << arr[i];    
        SetConsoleTextAttribute(ourConsole, i);

        //Test3->PrintToConsole();
    }
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
