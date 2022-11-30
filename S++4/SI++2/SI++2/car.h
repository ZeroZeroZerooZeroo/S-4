#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class car
{
public:
	string color;
	int price_car;
	string brand;

	car(string color, int price_car, string brand);
	car(string color);
	car();
	~car();
	void input();
	void conclusion();
};

