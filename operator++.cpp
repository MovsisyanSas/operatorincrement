#include <iostream>

class A {
public:
	int b;
	A() : b(1) {
		std::cout << "call default " << __func__ << std::endl;
	}
	A operator++ () {
		this->b += 1;
		return *this;
	}
};

int main() {
	A a;
	std::cout << a.b << std::endl;
	++a;
	std::cout << a.b << std::endl;
}