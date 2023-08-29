#pragma once
#include <vector>
#include "Student.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Student_Manager {
private:
	std::vector<Student> student_list;
	int count;
public:
	void add_person_to_list();

	void push_back_person_to_list(Student student);

	void setCount(int c);

	int getCount();

	void print_all_student();

	void change_info_person();

	bool check(int index);

	void remove_person_from_list();

};

