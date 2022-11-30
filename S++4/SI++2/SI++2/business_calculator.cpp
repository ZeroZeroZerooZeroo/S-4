#include "business_calculator.h"
#include <iostream>
#include <string.h>
#include <windows.h>
#include <math.h>
using namespace std;

int business_calculator::count = 0;

business_calculator::business_calculator(money Money, phone Phone, car Car, house House, computer Computer) {
	this->Money = Money;
	this->Phone = Phone;
	this->Car = Car;
	this->House = House;
	this->Computer = Computer;
}
business_calculator::business_calculator(money Money) {
	this->Money = Money;
}
business_calculator::business_calculator() {

}
business_calculator::~business_calculator() {

}

void business_calculator::input() {
	Money.input();
	Phone.input();
	Car.input();
	House.input();
	Computer.input();
}
void business_calculator::conclusion() {
	Money.conclusion();
	Phone.conclusion();
	Car.conclusion();
	House.conclusion();
	Computer.conclusion();
}
int &business_calculator::total_income(int& sum) {
	
	sum = Money.income1 + Money.income2 - Money.expenses;
	cout << " ¬аш общий доход - " << sum << endl;

	return sum;
}
int *business_calculator::total_price() {
	int *prise = new int;
	*prise = Car.price_car + Computer.computer_price + House.price_home + Phone.price_phone;
	return prise;
}
void business_calculator::work(business_calculator a) {
	int sum1 = 0, prise1 = 0, itg = 0;
	sum1 = a.Money.income1 + a.Money.income2 - a.Money.expenses;
	prise1 = a.Car.price_car + a.Computer.computer_price + a.House.price_home + a.Phone.price_phone;
	itg = prise1 / sum1;
	if (sum1 == 0 || sum1 < 0) {
		cout << " ¬ы не сможете накопить на эти вещи. ¬ам надо увеличить доходы или уменьшить расходы,потому что ваш общий доход равен 0 или ваши доходы меньше расходов" << endl;
	}
	else
		cout << " ¬ам нужно работать примерно" << itg << "  мес€цев, чтобы накопить на эти вещи" << endl;
	
}

business_calculator business_calculator::operator+(const business_calculator& b)
{
	business_calculator temp;
	temp.Money.income1 = this->Money.income1 + b.Money.income1;
	temp.Money.income2 = this->Money.income2 + b.Money.income2;
	temp.Money.expenses = this->Money.expenses + b.Money.expenses;
	business_calculator c = temp + b;
	return temp;
}

business_calculator business_calculator::operator++(int unused)
{
	business_calculator c = *this;
	++* this;
	return c;
}

business_calculator& business_calculator::operator++()
{
	this->Money.income1++;
	return *this;
}

void business_calculator::I_Count(business_calculator b) {

	if (b.Car.price_car != 0)
		count++;
	if (b.Computer.computer_price != 0)
		count++;
	if (b.House.price_home != 0)
		count++;
	if (b.Phone.price_phone!= 0)
		count++;

	cout << " ¬ы хотите приобрести " << count << " кол-во предметов" << endl;

}
 
void FriFunc(business_calculator &a)
{
	int sum1 = 0;
	sum1 = a.Money.income1 + a.Money.income2;
	if (sum1 > a.Money.expenses) {
		cout << "¬ы молодец,ваши доходы пришвышают расходы,но все рано продолжайте работать над ними)  " << endl;
	}
	else
		cout << "¬аши доходы меньше или равны расходам,постарайтесь увеличить ваш доход,чтобы улучшить ваше финансовое состо€ние. ” вас все получитс€)  " << endl;
}


