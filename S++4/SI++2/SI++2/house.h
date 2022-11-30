#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class house
{
public:
	int area;
	int price_home;

	house(int area, int price_home);
	house(int area);
	house();
	~house();
	void input();
	void conclusion();
};

