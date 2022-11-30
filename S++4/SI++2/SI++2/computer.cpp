#include "computer.h"
#include <iostream>
#include <string.h>
using namespace std;

computer::computer(int computer_price, string body_color, bool gaming) {
	this->computer_price = computer_price;
	this->body_color = body_color;
	this->gaming = gaming;
}
computer::computer(int computer_price) {
	this->computer_price = computer_price;
	body_color = "÷вет";
	gaming = true;
}
computer::computer() {
	computer_price = 0;
	body_color = "÷вет";
	gaming = true;
}
computer::~computer() {
}
void computer::input() {
	cout << "¬ведите цену компьютера:";
	cin >> computer_price;
	cout << "¬ведите цвет корпуса компьютера:";
	cin >> body_color;
	cout << "¬аш компьютер игровой?";
	cin >> gaming;
}
void computer::conclusion() {
	cout << " ÷ена компьютера - " << computer_price << " ÷вет корпуса компьютера - " << body_color << " ¬аш компьютер игровой? - " << gaming << endl;
}
