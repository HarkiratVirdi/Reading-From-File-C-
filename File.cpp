#pragma once

// NAME: HARKIRAT SINGH VIRDI
// EMAIL: HSVIRDI7@MYSENECA.CA
// STUDENT ID: 133810192
// DATE: 20TH SEPT, 2020

#define _CRT_SECURE_NO_WARNINGS
#include "File.h"
#include "School.h"
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string.h>

using namespace std;
bool openFile(const char filename[]);
bool readTitle(char title[]);
bool readYear(int* year);
void closeFile();

FILE* fptr;

bool openFile(const char filename[])
{
    fptr = fopen(filename, "r");
    return fptr != NULL;
}

// reads the title of the movie from the global fptr File pointer
// returns true if successful
bool readTitle(char title[])
{
    return fscanf(fptr, "%s", title) == 1;
}

// reads the year of the movie from the global fptr File pointer
// returns true if successful
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
