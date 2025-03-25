#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include "TrieNode.h"
#include <vector>
#include <string>

class Autocomplete{
private:
  TrieNode* root;

public:
  std::vector<std::string> getSuggestions(std::string partialWord);
  void insert(std::string word);
  Autocomplete();
};

#endif