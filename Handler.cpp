#include "Handler.h"
#include <iostream>
#include <string>
#include <exception>

Handler::Handler(std::string _row) : row(_row) {}

Item Handler::get_item() const {
	std::string::size_type pos = row.find(';');
	if (pos == std::string::npos) throw std::exception(("[ERROR] Can`t get definition in line:\n" + row).c_str());
	std::string word = row.substr(0, pos);
	std::string definition = row.substr(pos + 1);
	return Item(word, definition);
}
