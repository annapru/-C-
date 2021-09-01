# -C-/*Сначала вводится количество строк N, затем — сами N строк,
 разделённые символом перевода строки. Все строки состоят лишь
 из латинских букв, цифр и символов подчёркивания.*/

#include<iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	set<string> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		m.insert(s);
	}
	cout << m.size();

}
