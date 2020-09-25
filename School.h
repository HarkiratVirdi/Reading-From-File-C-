#pragma once

// NAME: HARKIRAT SINGH VIRDI
// EMAIL: HSVIRDI7@MYSENECA.CA
// STUDENT ID: 133810192
// DATE: 20TH SEPT, 2020

#ifndef _Movie_H_
#define _Movie_H_

#include "File.h"

namespace sdds
{
    struct School
    {
        char title[10];
        int year;
    };

} // namespace sdds

bool loadSchools();
void displayMoviesWithGenre(const char schoolCode[]);

#endif