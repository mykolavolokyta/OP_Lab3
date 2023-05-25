#pragma once
#include <vector>
#include <string>
class Sentence {
	std::string sentence;
public:
	Sentence(std::string);
	std::vector<std::string> get_words() const;
	~Sentence();
};