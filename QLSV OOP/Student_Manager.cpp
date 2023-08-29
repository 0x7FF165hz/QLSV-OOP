#include "Student_Manager.h"

void Student_Manager::add_person_to_list() {
	std::string id;
	std::string name;
	std::string country;
	int age;
	cin.ignore();
	cout << "\t\t[?] Nhap ma sinh vien: "; getline(cin, id);
	cout << "\t\t[?] Nhap ten sinh vien: "; getline(cin, name);
	cout << "\t\t[?] Nhap que quan: "; getline(cin, country);
	cout << "\t\t[?] Nhap tuoi: "; cin >> age;

	Student student(id, name, country, age);
	push_back_person_to_list(student);
}

void Student_Manager::push_back_person_to_list(Student student) {
	student_list.push_back(student);
}

void Student_Manager::setCount(int c) {
	count += c;
}

int Student_Manager::getCount() {
	return count;
}

void Student_Manager::print_all_student() {
	cout << "+" << std::setfill('-') << std::setw(80) << "+" << endl;
	cout << "|" << std::setfill(' ') << std::setw(5) << std::left << " STT" << "|";
	cout << std::right << std::setw(6) << "MSV" << std::right << std::setw(4) << "|";
	cout << std::right << std::setw(20) << "HO VA TEN" << std::right << std::setw(12) << "|";
	cout << std::right << std::setw(13) << "DIA CHI" << std::right << std::setw(7) << "|";
	cout << std::right << std::setw(8) << "TUOI" << std::right << std::setw(4) << "|" << endl;
	cout << "+" << std::setfill('-') << std::setw(80) << "+";
	for (int i = 0; i < student_list.size(); i++) {
		cout << endl;
		cout << "|" << std::left << " [" << i + 1 << "]" << " |";
		cout << std::setfill(' ') << std::right << std::setw(2) << " " << std::left << std::setw(3) << student_list[i].getid() << std::right << std::setw(2) << "|";
		cout << std::setfill(' ') << std::right << std::setw(5) << " " << std::left << std::setw(25) << student_list[i].getName() << std::right << std::setw(2) << "|";
		cout << std::setfill(' ') << std::right << std::setw(3) << " " << std::left << std::setw(15) << student_list[i].getCountry() << std::right << std::setw(2) << "|";
		cout << std::setfill(' ') << std::right << std::setw(5) << " " << std::left << std::setw(5) << student_list[i].getAge() << std::right << std::setw(2) << "|";
	}
	cout << endl;
	cout << "+" << std::setfill('-') << std::setw(80) << "+" << endl;
}

void Student_Manager::change_info_person() {
	int index = 0; int choice = 0;
	cout << "\t\t[?] Nhap STT sinh vien muon sua: "; cin >> index;
	cout << "\n\t\t[?] Ban muon sua gi? " << endl;
	cout << "\t\t[1] MSV " << endl;
	cout << "\t\t[2] Ten " << endl;
	cout << "\t\t[3] Que Quan " << endl;
	cout << "\t\t[4] Tuoi " << endl;
	cout << "\t\t[?] Nhap lua chon cua ban: "; cin >> choice;

	switch (choice) {
	case 1: {
		cin.ignore();
		std::string id; cout << "\t\t[?] Nhap MSV moi: "; getline(cin, id);
		student_list[index - 1].setid(id);
		cout << "\t\t[!] SUA THANH CONG" << endl;
		break;
	}
	case 2: {
		cin.ignore();
		std::string name; cout << "\t\t[?] Nhap ten moi: "; getline(cin, name);
		student_list[index - 1].setName(name);
		cout << "\t\t[!] SUA THANH CONG" << endl;
		break;
	}
	case 3: {
		cin.ignore();
		std::string country; cout << "\t\t[?] Nhap que quan moi: "; getline(cin, country);
		student_list[index - 1].setCountry(country);
		cout << "\t\t[!] SUA THANH CONG" << endl;
		break;
	}
	case 4: {
		cin.ignore();
		int age; cout << "\t\t[?] Nhap tuoi moi: "; cin >> age;
		student_list[index - 1].setAge(age);
		cout << "\t\t[!] SUA THANH CONG" << endl;
		break;
	}
	default:
		cout << "\t\t[!] Lua chon khong hop le!" << endl;
		break;
	}
}

bool Student_Manager::check(int index) {
	return ((index > 0) && (index < student_list.size()));
}

void Student_Manager::remove_person_from_list() {
	int index;
	cout << "\t\t[?] Nhap STT ban muon xoa: "; cin >> index;
	if (check(index)) {
		student_list.erase(student_list.begin() + (index - 1));
		cout << "\t\t[!] XOA THANH CONG" << endl;
	}
	else {
		cout << "\t\t[!] Vi tri xoa khong hop le!" << endl;
	}
}
