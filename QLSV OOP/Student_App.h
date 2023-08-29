#pragma once
#include "Student_Manager.h"
#include "Menu.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

const std::string filename = "data.txt";

class Student_App : public Student_Manager, public Menu {
private:
	static Student_App* student_app;
	Student_App() {}
public:
	void init();

	void menu();

	static Student_App* getStudent_App();
};



