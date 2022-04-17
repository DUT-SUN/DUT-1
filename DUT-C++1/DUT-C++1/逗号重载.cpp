//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//
//class Person {
//	int _id;
//	std::string _name;
//	unsigned int _age;
//public:
//	explicit Person(int id) : _id(id) {
//	}
//
//	Person(std::string name, unsigned int age) :_id(0), _name(name), _age(age) {
//	}
//
//	std::string toString() {
//		char strAge[10];
//		sprintf(strAge, "Age:\t%d", _age);
//		std::string res("Name:\t");
//		res.append(_name);
//		res += "\n";
//		res.append(strAge);
//		res += "\n";
//		return res;
//	}
//
//	/// set person age.
//	/// return the reference to self.
//	Person& operator, (unsigned int age) {
//		_age = age;
//		return *this;
//	}
//
//	/// set person name.
//	/// note that the return value is the instance self.
//	Person& operator, (std::string name) {
//		_name = name;
//		return *this;
//	}
//};
//
//
///// The resposibility of Nuwa class is to create Person through operator << () method
//class Nuwa {
//public:
//	// return a person.
//	Person operator << (unsigned int id) {
//		return Person(id);
//	}
//};
//
//int main(int argc, char** argv) {
//	Nuwa nuwa;
//	std::cout << (nuwa << 1, "Eric", 23).toString().c_str() << std::endl; //Name:   Eric Age:    23
//	return 0;
//}