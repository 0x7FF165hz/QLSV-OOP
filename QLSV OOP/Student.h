#pragma once
#include <string>

class Student {
private:
	std::string id;
	std::string name;
	std::string country;
	int age;
public:
	Student() {
		id = "No ID";
		name = "Unknow";
		country = "No Country";
		age = 0;
	}
	Student(std::string i, std::string n, std::string c, int a) : id(i), name(n), country(c), age(a) {}

	void setid(std::string i);

	void setName(std::string n);

	void setCountry(std::string c);

	void setAge(int a);

	std::string getid();

	std::string getName();

	std::string getCountry();

	int getAge();
};
