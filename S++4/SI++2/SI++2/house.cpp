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
	cout << "������� ������� ����(��. �.):";
	cin >> area;
	cout << "������� ���� ����:";
	cin >> price_home;
}
void house::conclusion() {
	cout << " ������� ����(��. �.) - " << area << " ���� ���� - " << price_home  << endl;
}