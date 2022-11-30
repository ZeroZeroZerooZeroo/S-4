#include "house.h"
#include <iostream>
#include <string.h>
using namespace std;

house::house(int area, int price_home) {
	this->area = area;
	this->price_home = price_home;
}
house::house(int price_home) {
	this->price_home = price_home;
	area = 0;
}
house::house() {
	area = 0;
	price_home = 0;
}
house::~house() {
}
void house::input() {
	cout << "¬ведите площадь дома( в. м.):";
	cin >> area;
	cout << "¬ведите цену дома:";
	cin >> price_home;
}
void house::conclusion() {
	cout << " ѕлощадь дома( в. м.) - " << area << " ÷ена дома - " << price_home  << endl;
}