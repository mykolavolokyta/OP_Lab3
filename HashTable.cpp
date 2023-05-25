#include "HashTable.h"
#include "Item.h"
#include <cmath>

HashTable::HashTable() : count(0), size(100000), table(new LinkedList[size]) {}

int HashTable::hash(std::string _key) {
    int hashCode = 0;
    for (int i = 0; i < _key.length(); i++) {
        hashCode += _key[i] * pow(31, i);
    }
    return abs(hashCode % this->size);
}

void HashTable::insert(const Item& item) {
    int index = hash(item.get_key());
    table[index].insert(item);
}

pNode HashTable::search(std::string _key) {
    int index = hash(_key);
    return table[index].search(_key);
}

HashTable::~HashTable() {
    delete[] table;
}