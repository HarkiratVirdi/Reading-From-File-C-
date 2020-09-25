/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string.h>

namespace sdds
{
    struct School
    {
        char title[10];
        int year;
    };

} // namespace sdds


using namespace std;
using namespace sdds;

void displayMovie(const School* mvp);
bool hasGenre(const School* mvp, const char schoolCode[]);
bool loadSchools();
void displayMoviesWithGenre(const char schoolCode[]);
bool openFile(const char filename[]);
bool readTitle(char title[]);
bool readYear(int* year);
void closeFile();

using namespace std;

FILE* fptr;

bool openFile(const char filename[])
{
    fptr = fopen(filename, "r");
    return fptr != NULL;
}


bool readTitle(char title[])
{
    return fscanf(fptr, "%s", title) == 1;
}

bool readYear(int* year)
{
    return fscanf(fptr, "%d)", year) == 1;
}

// reads the year of the movie from the global fptr File pointer
// returns true if successfu
void closeFile()
{
    if (fptr)
        fclose(fptr);
}

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

School scool[24];

void displayMoviesWithGenre(const char schoolCode[])
{
    int i;
    bool found = false;
    for (i = 0;i < 24; i++)
    {
        if (hasGenre(&scool[i], schoolCode))
        {
            found = true;
            displayMovie(&scool[i]);
        }
    }
    if (!found)
    {
        cout  << schoolCode << " School code not found!" << endl;
    }
}

bool loadSchools()
{
    School scl;
    int mnum = 0; 
    bool ok = true;
    if (openFile("schools.dat"))
    {
        while (ok && mnum < 24)
        {
            ok = readTitle(scl.title) &&
                readYear(&scl.year);
            if (ok)
                scool[mnum++] = scl;
        }
        closeFile();
    }
    return mnum == 24;
}

bool hasGenre(const School* mvp, const char schoolCode[])
{
    int i = 0;
    bool found = false;
        if (strstr(mvp->title, schoolCode))
        {
            found = true;
        }
    return found;
}

void displayMovie(const School* mvp)
{
    cout << "416 491 5050 x " << mvp->year << endl;
}
*/