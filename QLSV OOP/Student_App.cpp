#include "Student_App.h"

void Student_App::init() {
	std::ifstream inputFile(filename);

	if (inputFile.is_open()) {
		std::string line;
		while (std::getline(inputFile, line)) {
			Student student;
			std::string id;
			std::string name;
			std::string country;
			int age;
			std::stringstream ss(line);
			std::getline(ss, id, ';'); student.setid(id);
			std::getline(ss, name, ';'); student.setName(name);
			std::getline(ss, country, ';'); student.setCountry(country);
			ss >> age; student.setAge(age);

			push_back_person_to_list(student);
			setCount(1);
		}
		inputFile.close();
	}
	else {
		cout << "Cannot open File!";
	}
}
void Student_App::menu() {
	int choice = 0;
	while (true) {
		clearScreen();
		menu_list();
		cout << "[?] Nhap lua chon cua ban: "; cin >> choice;
		switch (choice) {
		case 1:
			print_all_student();
			press();
			break;
		case 2:
			add_person_to_list();
			press();
			break;
		case 3:
			change_info_person();
			press();
			break;
		case 4:
			remove_person_from_list();
			press();
			break;
		default:
			cout << "[!] Lua chon khong hop le!" << endl;
			break;
		}
	}
}

Student_App* Student_App::getStudent_App() {
	if (student_app == nullptr) {
		student_app = new Student_App();
	}
	return student_app;
}