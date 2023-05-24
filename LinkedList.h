#pragma once
#include <iostream>
#include <string>

struct Node;
typedef Node* pNode;

struct Node {
	std::string key;
	std::string value;
	pNode next;
	Node(std::string _key, std::string _value) : key(_key), value(_value), next(nullptr) {}
};


class LinkedList {
	pNode head;
public:
	LinkedList();
	LinkedList(const LinkedList&);

	void insert(std::string, std::string);
	pNode search(std::string);
	friend std::ostream& operator<<(std::ostream&, const LinkedList&);
};