#include "money.h"
#include <iostream>
#include <string.h>
using namespace std;

money::money(int income1, int income2, int expenses) {
	this->income1 = income1;
	this->income2 = income2;
	this->expenses = expenses;
}
money::money(int income1) {
	this->income1 = income1;
	income2 = 0;
	expenses = 0;
}
money::money() {
	income1 = 0;
	income2 = 0;
	expenses = 0;
}
money::~money(){
}
void money::input() {
	cout << "������� ��� ����� 1 �� �����:";
	cin >> income1;
	cout << "������� ��� ����� 2 �� �����:";
	cin >> income2;
	cout << "������� ��� ������ �� �����:";
	cin >> expenses;
}
void money::conclusion() {
	cout << " ��� ����� 1 �� ����� - " << income1 << " ��� ����� 2 �� ����� - " << income2 << " ��� ������ �� ����� - " << expenses << endl;
}