#pragma once
#include <iostream>

class Data {
public:
	Data() { std::cout << "ctor" << std::endl; }
	~Data() { std::cout << "dtor" << std::endl; }
	Data(const Data& data) { std::cout << "copy ctor" << std::endl; }
	Data(const Data&& data) noexcept { std::cout << "move ctor" << std::endl; }
	Data& operator=(const Data& rhs) { std::cout << "copy asign" << std::endl; return *this; }
	Data& operator=(const Data&& rhs) noexcept { std::cout << "move asign" << std::endl; return *this;
	}
};