#pragma once

// NAME: HARKIRAT SINGH VIRDI
// EMAIL: HSVIRDI7@MYSENECA.CA
// STUDENT ID: 133810192
// DATE: 20TH SEPT, 2020

// using namespace sdds;
#define _CRT_SECURE_NO_WARNINGS
#include "School.h"
#include "File.h"
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string.h>

using namespace std;
using namespace sdds;

void displayMovie(const School* mvp);
bool hasGenre(const School* mvp, const char schoolCode[]);

School scool[24];

void displayMoviesWithGenre(const char schoolCode[])
{
    int i;
    bool found = false;
    for (i = 0; i < 24; i++)
    {
        if (hasGenre(&scool[i], schoolCode))
        {
            found = true;
            displayMovie(&scool[i]);
        }
    }
    if (!found)
    {
        cout << schoolCode << " School code not found!" << endl;
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

// returns true is the genre arg is substring of any of the
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

// displays all the movies containing the genre arg
