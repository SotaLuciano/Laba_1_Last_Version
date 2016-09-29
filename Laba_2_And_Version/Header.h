#pragma once
#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string>
#pragma warning(disable: 4996) 
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
const int Max_Len = 256;
struct Stek
{
	char *text;
	Stek *next;
};

void Print(fstream& Text);

void push(char* info, Stek *& Stringns);

void pop(Stek *& Stringns);

int LoadFileToStek(Stek *& Stringns, string name, string road);

void Renumber(Stek *& Stringns, int count);

void Purge(Stek *& Stringns);

void LinePrint(void);

void ListofFiles(void);