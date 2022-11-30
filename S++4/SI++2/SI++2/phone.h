#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class phone
{
public:
	string name_phone;
	int price_phone;
	string cover_color;

	phone(string name_phone, int price_phone, string cover_color);
	phone(string name_phone);
	phone();
	~phone();
	void input();
	void conclusion();
};

