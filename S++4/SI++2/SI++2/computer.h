#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class computer
{
public:
	int computer_price;
	string body_color;
	string gaming;

	computer(int computer_price, string body_color,bool gaming);
	computer(int computer_price);
	computer();
	~computer();
	void input();
	void conclusion();
};

