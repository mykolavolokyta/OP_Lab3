#include <iostream>
#include <exception>
#include "Item.h"
#include "HashTable.h"
#include "Reader.h"

int main() {
	
	try {
		Reader reader("D:/Study/OP/examples/Lab3/dict_processed.txt");
		auto lines = reader.read();
		for (auto line : lines) {
			std::cout << line << '\n';
		}

		HashTable h;
		Item i("hello", "bebra");
		h.insert(i);
		std::string key = "hello";
		auto result = h.search(key);
		if (result) {
			std::cout << key << ": " << result->data.get_value();
		}
		else {
			std::cout << key << ": [EMPTY]";
		}
	}
	catch (std::exception& exception) {
		std::cout << exception.what();
	}
	return 0;
}