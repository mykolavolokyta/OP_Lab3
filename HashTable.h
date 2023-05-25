#pragma once
#include <string>
#include "LinkedList.h"

class HashTable {
	int count;
	int size;
	LinkedList* table;
public:
	HashTable();

	int hash(std::string);
	void insert(std::string, std::string);
	pNode search(std::string);
};