#include "Move.h"

NS_MOVE_S

void usage() {
	//1. 效率比较高
	//2. 使用后的对象会变成未定义
	std::string str = "123";
	std::cout << "ori str addr = " << &str << ", size = " << str.size() << std::endl;
	std::vector<std::string> vs;
	vs.push_back(std::move(str));
	std::cout << "vec str addr = " << &(vs[0]) << ", size = " << vs[0].size() << std::endl;

	Data d;
	std::cout << "ori data addr = " << &d << std::endl;
	std::vector<Data> vd;
	vd.push_back(std::move(d));
	std::cout << "vec data addr = " << &(vd[0]) << std::endl;
}

NS_MOVE_E