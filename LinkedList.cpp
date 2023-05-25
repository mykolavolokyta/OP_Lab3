#include "LinkedList.h"
#include "Item.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(const LinkedList& list) {
	pNode current = list.head;
	while (current != nullptr) {
		this->insert(current->data);
		current = current->next;
	}
}

void LinkedList::insert(const Item& item) {
	pNode new_node = new Node(item);
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
	while (current != nullptr && current->data.get_key() != _key) {
		current = current->next;
	}
	return current;
}

std::ostream& operator<<(std::ostream& out, const LinkedList& list) {
	pNode temp = list.head;
	while (temp != nullptr) {
		out << temp->data.get_key() << ' ' << temp->data.get_value() << '\n';
		temp = temp->next;
	}
	return out;
}