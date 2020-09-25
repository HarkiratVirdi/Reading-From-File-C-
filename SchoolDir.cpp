
// NAME: HARKIRAT SINGH VIRDI
// EMAIL: HSVIRDI7@MYSENECA.CA
// STUDENT ID: 133810192
// DATE: 20TH SEPT, 2020

#define _CRT_SECURE_NO_WARNINGS
#include "School.h"
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string.h>
#include "School.h"
using namespace std;
// using namespace sdds;

void flushkeys()
{
    while (cin.get() != '\n')
        ;
}

bool yes()
{
    char ch = cin.get();
    flushkeys();
    return ch == 'y' || ch == 'Y';
}

// returns true if user enter y or Y

int main()
{
    bool done = false;
    char code[10];
    loadSchools();
    cout << "Seneca School Extension search." << endl
        << endl;
    while (!done)
    {
        cout << "Enter the School code: ";
        cin >> code;
        flushkeys();
        displayMoviesWithGenre(code);
        cout << "Do another search? (Y)es: ";
        done = !yes();
        cout << endl;
    }
    cout << "Goodbye!" << endl;
    return 0;
}