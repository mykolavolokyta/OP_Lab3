#include "Reader.h"
#include "Item.h"
#include <vector>
#include <fstream>
#include <exception>
#include <string>
Reader::Reader(std::string _filename) :filename(_filename) {}

std::vector<std::string> Reader::read() const {
	std::fstream in(filename);
	if (!in) throw std::exception(("[ERROR] Can`t open file with name \"" + filename + "\".").c_str());

	std::vector<std::string> lines;
	std::string line;
	while (std::getline(in, line)) {
		
		if (line != "") lines.push_back(line);
	}
	return lines;

}