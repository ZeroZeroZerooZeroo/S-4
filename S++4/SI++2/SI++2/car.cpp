#include "car.h"
#include <iostream>
#include <string.h>
using namespace std;

car::car(string color, int price_car, string brand) {
	this->color = color;
	this->price_car = price_car;
	this->brand = brand;
}
car::car(string color) {
	this->color = color;
}
car::car() {
}
car::~car() {
}
void car::input() {
	cout << "Введите цвет машины:";
	cin >> color;
	cout << "Введите цену машины:";
	cin >> price_car;
	cout << "Введите марку машины:";
	cin >> brand;
}
void car::conclusion() {
	cout << " Цвет машины - " << color << " Цена машины - " << price_car << " Марка мишины - " << brand << endl;
}