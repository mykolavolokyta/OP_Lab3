#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(const LinkedList& list) {
	pNode current = list.head;
	while (current != nullptr) {
		this->insert(current->key, current->value);
		current = current->next;
	}
}

void LinkedList::insert(std::string _key, std::string _value) {
	pNode new_node = new Node(_key, _value);
	if (this->head == nullptr) {
		this->head = new_node;
		return;
	}
	pNode temp = this->head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = new_node;
}

pNode LinkedList::search(std::string _key) {
	pNode current = this->head;
	while (current != nullptr && current->key != _key) {
		current = current->next;
	}
	return current;
}

std::ostream& operator<<(std::ostream& out, const LinkedList& list) {
	pNode temp = list.head;
	while (temp != nullptr) {
		out << temp->key << ' ' << temp->value << '\n';
		temp = temp->next;
	}
	return out;
}