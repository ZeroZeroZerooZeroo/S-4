#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class money
{
public:
	int income1;
	int income2;
	int expenses;
	money(int income1, int income2, int expenses);
	money(int income1);
	money();
	~money();
	void input();
	void conclusion();
};