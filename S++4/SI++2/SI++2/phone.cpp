#include "phone.h"
#include <iostream>
#include <string.h>
using namespace std;

phone::phone(string name_phone, int price_phone, string cover_color) {
	this-> name_phone= name_phone;
	this-> price_phone = price_phone;
	this->cover_color = cover_color;
}
phone::phone(string name_phone) {
	this->name_phone = name_phone;
	price_phone = 0;
	cover_color = "Цвет";
}
phone::phone() {
	name_phone = "Цвет";
	price_phone = 0;
	cover_color = "Цвет";
}
phone::~phone() {
}
void phone::input() {
	cout << "Введите марку телефона:";
	cin >> name_phone;
	cout << "Введите цену телефона:";
	cin >> price_phone;
	cout << "Введите цвет чехла:";
	cin >> cover_color;
}
void phone::conclusion() {
	cout << " Марка телефона - " << name_phone << " Цена телефона - " << price_phone << " Цвет чехла телефона - " << cover_color << endl;
}