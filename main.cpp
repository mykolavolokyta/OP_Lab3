#include <iostream>
#include "HashTable.h"

int main() {
	HashTable h;
	h.insert("hello", "bebra");
	std::string key = "hello";
	auto result = h.search(key);
	if (result) {
		std::cout << key << ": " << result->value;
	}
	else {
		std::cout << key << ": [EMPTY]";
	}

	return 0;
}