#include <iostream>
#include <ios>
#include <stdio.h>
#include <iomanip>

using namespace std;

void showflags();

int main()
{
/* //fill, width, precision
	//streamsize width(streamsize w);
	cout.width(20);
	cout << "FFFFFFFFF7" << '\n';
	cout.fill('#');
	cout.width(20);
	cout << "FFFFFFFFF7" << '\n';
	cout.setf(ios::left);
	cout.width(20);
*/


	cout << oct << 100 << '\n' << hex << 100 << '\n';
	cout << setfill('#') << setw(10) << 100 << '\n';

/*
	// отображение состо€ни€ флагов формата по умолчанию
	showflags();
	cout.setf(ios::oct | ios::showbase | ios::fixed);
	showflags();

	return 0;
*/
	system("PAUSE");
}
// Ёта функци€ выводит состо€ние флагов формата
void showflags()
{
	ios::fmtflags f;
	f = cout.flags(); // получение установок флагов формата
	if (f & ios::skipws) cout << "skipws установлен\n";
	else cout << "skipws сброшен\n";
	if (f & ios::left) cout << "left установлен\n";
	else cout << "left сброшен\n";
	if (f & ios::right) cout << "right установленn\n";
	else cout << "right сброшен\n";
	if (f & ios::internal) cout << "internal установлен\n";
	else cout << "internal сброшен\n";
	if (f & ios::dec) cout << "dec установлен\n";
	else cout << "dec сброшенn\n";
	if (f & ios::oct) cout << "oct установлен\n";
	else cout << "oct сброшен\n";
	if (f & ios::hex) cout << "hex установлен\n";
	else cout << "hex сброшен\n";
	if (f & ios::showbase) cout << "showbase установлен\n";
	else cout << "showbase сброшен\n";
	if (f & ios::showpoint) cout << "showpoint установленn\n";
	else cout << "showpoint сброшен\n";
	if (f & ios::showpos) cout << "showpos установленn\n";
	else cout << "showpos сброшен\n";
	if (f & ios::uppercase) cout << "uppercase установлен’п";
	else cout << "uppercase сброшен\n";
	if (f & ios::scientific) cout << "scientific установленn\n";
	else cout << "scientific сброшен\n";
	if (f & ios::fixed) cout << "fixed установлен\n";
	else cout << "fixed сброшен\n";
	if (f & ios::unitbuf) cout << "unitbuf установлен\n";
	else cout << "unitbuf сброшен\n";
	if (f & ios::boolalpha) cout << "boolalpha установлен\n";
	else cout << "boolalpha сброшен\n";
	cout << "\n";
};