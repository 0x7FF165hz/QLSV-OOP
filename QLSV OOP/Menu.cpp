#include "Menu.h"

void Menu::menu_list() {
	cout << "+" << std::setfill('-') << std::setw(60) << "+" << endl;
	cout << "|" << std::setfill(' ') << std::setw(5) << std::left << " STT" << "|";
	cout << std::setw(53) << "                 DANH SACH LUA CHON  " << "|" << endl;
	cout << "+" << std::setfill('-') << std::setw(60) << std::right << "+" << endl;
	cout << "|" << std::setfill(' ') << std::setw(5) << std::left << "  1" << "|";
	cout << std::setw(53) << "	             In danh sach sinh vien  " << "|" << endl;
	cout << "|" << std::setfill(' ') << std::setw(5) << std::left << "  2" << "|";
	cout << std::setw(53) << "	             Them sinh vien  " << "|" << endl;
	cout << "|" << std::setfill(' ') << std::setw(5) << std::left << "  3" << "|";
	cout << std::setw(53) << "	             Sua sinh vien  " << "|" << endl;
	cout << "|" << std::setfill(' ') << std::setw(5) << std::left << "  4" << "|";
	cout << std::setw(53) << "	             Xoa sinh vien  " << "|" << endl;
	cout << "+" << std::setfill('-') << std::setw(60) << std::right << "+" << endl;
}

void Menu::clearScreen() {
	#ifdef _WIN32
		std::system("cls");
	#else
		std::system("clear");
	#endif
}

void Menu::press() {
	cout << "Press any key to continue...";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return;
}