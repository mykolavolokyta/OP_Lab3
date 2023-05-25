#include <iostream>
#include "Item.h"
#include "HashTable.h"

int main() {
	
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

	return 0;
}