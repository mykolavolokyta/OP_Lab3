#pragma once
#include <string>
#include <vector>
#include "Item.h"

class Reader {
	std::string filename;
public:
	Reader(std::string);
	std::vector<std::string> read() const;
};