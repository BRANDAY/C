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
	// ����������� ��������� ������ ������� �� ���������
	showflags();
	cout.setf(ios::oct | ios::showbase | ios::fixed);
	showflags();

	return 0;
*/
	system("PAUSE");
}
// ��� ������� ������� ��������� ������ �������
void showflags()
{
	ios::fmtflags f;
	f = cout.flags(); // ��������� ��������� ������ �������
	if (f & ios::skipws) cout << "skipws ����������\n";
	else cout << "skipws �������\n";
	if (f & ios::left) cout << "left ����������\n";
	else cout << "left �������\n";
	if (f & ios::right) cout << "right ����������n\n";
	else cout << "right �������\n";
	if (f & ios::internal) cout << "internal ����������\n";
	else cout << "internal �������\n";
	if (f & ios::dec) cout << "dec ����������\n";
	else cout << "dec �������n\n";
	if (f & ios::oct) cout << "oct ����������\n";
	else cout << "oct �������\n";
	if (f & ios::hex) cout << "hex ����������\n";
	else cout << "hex �������\n";
	if (f & ios::showbase) cout << "showbase ����������\n";
	else cout << "showbase �������\n";
	if (f & ios::showpoint) cout << "showpoint ����������n\n";
	else cout << "showpoint �������\n";
	if (f & ios::showpos) cout << "showpos ����������n\n";
	else cout << "showpos �������\n";
	if (f & ios::uppercase) cout << "uppercase ������������";
	else cout << "uppercase �������\n";
	if (f & ios::scientific) cout << "scientific ����������n\n";
	else cout << "scientific �������\n";
	if (f & ios::fixed) cout << "fixed ����������\n";
	else cout << "fixed �������\n";
	if (f & ios::unitbuf) cout << "unitbuf ����������\n";
	else cout << "unitbuf �������\n";
	if (f & ios::boolalpha) cout << "boolalpha ����������\n";
	else cout << "boolalpha �������\n";
	cout << "\n";
};