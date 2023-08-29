#include "Student.h"

void Student::setid(std::string i) {
	id = i;
}
void Student::setName(std::string n) {
	name = n;
}
void Student::setCountry(std::string c) {
	country = c;
}
void Student::setAge(int a) {
	age = a;
}

std::string Student::getid() {
	return id;
}
std::string Student::getName() {
	return name;
}
std::string Student::getCountry() {
	return country;
}
int Student::getAge() {
	return age;
}