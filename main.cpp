#include <iostream>
#include <exception>
#include <string>
#include "Item.h"
#include "HashTable.h"
#include "Reader.h"
#include "Handler.h"
#include "Sentence.h"

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
		Sentence sentence(input);
		auto words = sentence.get_words();
		for (auto& word : words) {
			pNode result = table.search(word);
			if (result) {
				std::cout << word << ": " << result->data.get_value() << "\n\n";
			}
			else {
				std::cout << word << ": [NO DEFINITION]" << "\n\n";
			}
		}
	}
	catch (std::exception& exception) {
		std::cout << exception.what();
	}
	return 0;
}