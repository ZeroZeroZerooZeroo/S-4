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
	body_color = "����";
	gaming = true;
}
computer::computer() {
	computer_price = 0;
	body_color = "����";
	gaming = true;
}
computer::~computer() {
}
void computer::input() {
	cout << "������� ���� ����������:";
	cin >> computer_price;
	cout << "������� ���� ������� ����������:";
	cin >> body_color;
	cout << "��� ��������� �������?";
	cin >> gaming;
}
void computer::conclusion() {
	cout << " ���� ���������� - " << computer_price << " ���� ������� ���������� - " << body_color << " ��� ��������� �������? - " << gaming << endl;
}
