#include "Sentence.h"
#include <vector>
#include <sstream>
#include <algorithm>

Sentence::Sentence(std::string _row) : sentence(_row) {}

std::vector<std::string> Sentence::get_words() const {
	std::vector<std::string> words;
	std::string temp = sentence;
	std::string::size_type pos = temp.find_first_of(" .,:;!");
	while (pos != std::string::npos) {
		std::string word = temp.substr(0, pos);
		if (word != "") {
			std::transform(word.begin(), word.end(), word.begin(), ::toupper);
			words.push_back(word);
		}
		temp = temp.substr(pos + 1);
		pos = temp.find_first_of(" .,:;!");
	}
	temp = temp.substr(pos + 1);
	if (temp != "") {
		std::transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
		words.push_back(temp);
	}
	return words;
}

Sentence::~Sentence() {}