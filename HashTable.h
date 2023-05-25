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
	void insert(const Item&);
	pNode search(std::string);

	~HashTable();
};