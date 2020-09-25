#pragma once

// NAME: HARKIRAT SINGH VIRDI
// EMAIL: HSVIRDI7@MYSENECA.CA
// STUDENT ID: 133810192
// DATE: 20TH SEPT, 2020

#ifndef _File_H_
#define _FILE_H_

// Your header file content goes here
bool openFile(const char filename[]);
bool readTitle(char title[]);
bool readYear(int* year);
void closeFile();

#endif