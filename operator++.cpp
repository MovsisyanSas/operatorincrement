#include <iostream>

class A {
public:
	int i;
	A(int num) {
		i = num;
	}
	A operator++ () {
		this->i += 1;
		return *this;
	}
	A operator++ (int) {
		A copy(*this);
		++(this->i);
		return copy;
	}
};

int main() {
	A a(5);
	A b(0);
	b = a++;
	
	std::cout << a.i << "  " << b.i << std::endl;
}