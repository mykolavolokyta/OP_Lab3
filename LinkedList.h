#pragma once
#include <iostream>
#include <string>
#include "Item.h"

struct Node;
typedef Node* pNode;

struct Node {
	Item data;
	pNode next;
	Node(const Item& _data) : data(_data), next(nullptr) {}
};


class LinkedList {
	pNode head;
public:
	LinkedList();
	LinkedList(const LinkedList&);

	void insert(const Item&);
	pNode search(std::string);
	friend std::ostream& operator<<(std::ostream&, const LinkedList&);

	~LinkedList();
};