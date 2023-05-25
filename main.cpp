#include <iostream>
#include <exception>
#include <string>
#include "Item.h"
#include "HashTable.h"
#include "Reader.h"
#include "Handler.h"

int main() {
	
	try {
		Reader reader("D:/Study/OP/examples/Lab3/dict_processed.txt");
		auto lines = reader.read();
		HashTable table;
		for (auto& line : lines) {
			Handler handler(line);
			auto item = handler.get_item();
			table.insert(item);
		}

		std::cout << "Type a sentence to get definition: ";
		std::string input;
		std::getline(std::cin, input);
	}
	catch (std::exception& exception) {
		std::cout << exception.what();
	}
	return 0;
}