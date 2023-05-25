#pragma once
#include <string>
class Item {
	std::string key;
	std::string value;
public:
	Item(std::string _key, std::string _value) :key(_key), value(_value) {}
	Item(const Item& item) :key(item.get_key()), value(item.get_value()) {}
	std::string get_key() const { return key; }
	std::string get_value() const { return value; }
	~Item() {}
};