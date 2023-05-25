#include "HashTable.h"
#include <cmath>

HashTable::HashTable() : count(0), size(100), table(new LinkedList[size]) {}

int HashTable::hash(std::string _key) {
    int hashCode = 0;
    for (int i = 0; i < _key.length(); i++) {
        hashCode += _key[i] * pow(31, i);
    }
    return abs(hashCode % this->size);
}

void HashTable::insert(std::string _key, std::string _value) {
    int index = hash(_key);
    table[index].insert(_key, _value);
}

pNode HashTable::search(std::string _key) {
    int index = hash(_key);
    return table[index].search(_key);
}