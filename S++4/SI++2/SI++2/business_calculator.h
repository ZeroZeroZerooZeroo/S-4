#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <math.h>
#include "computer.h"
#include "house.h"
#include "car.h"
#include "phone.h"
#include "money.h"

class business_calculator
{
private:
	phone Phone;
	car Car;
	house House;
	computer Computer;
	money Money;
public:
	
	static int count;
	static void I_Count(business_calculator b);
	business_calculator(money Money, phone Phone, car Car, house House, computer Computer);
	business_calculator(money Money);
	business_calculator();
	~business_calculator();
	void input();
	void conclusion();
	int &total_income(int& sum);
	int *total_price();
	void work(business_calculator a);
	friend void FriFunc(business_calculator &a);
	business_calculator operator +(const business_calculator& b);
	business_calculator operator ++(int b);
	business_calculator & operator ++();
	
};
