#pragma once
#include <string>
#include <vector>
#include "Item.h"

class Handler {
	std::string row;
public:
	Handler(std::string);

	Item get_item() const;
};