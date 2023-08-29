#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include "Student.h"
#include "Menu.h"
#include "Student_Manager.h"
#include "Student_App.h"
using namespace std;
Student_App* Student_App::student_app = nullptr;

int main() {
	Student_App* app = Student_App::getStudent_App();
	app->init();
	app->menu();
	cout << "Anh hom bik";
}