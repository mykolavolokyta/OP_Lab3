#include <iostream>
#include "LinkedList.h"

int main() {
	LinkedList list;
	list.insert("hello", "bebra");
	list.insert("hello1", "bebra1");
	list.insert("hello2", "bebra2");


	LinkedList list1 = list;
	list1.insert("Mister", "Bingus");

	//std::cout << list << "\n\n" << list1 << "\n\n";
	
	std::string key = "Mister";
	auto result = list1.search(key);
	if (result) {
		std::cout << result->key << ": " << result->value;
	}
	else {
		std::cout << key << ": [EMPTY]";
	}
	return 0;
}