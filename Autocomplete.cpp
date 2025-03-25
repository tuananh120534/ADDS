#include "Autocomplete.h"
#include "TrieNode.h"
#include <vector>
#include <string>
#include <stack>

Autocomplete::Autocomplete(){
  root = new TrieNode();
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
  std::vector<std::string> ans;
  TrieNode* curr = root;
  for (char c : partialWord)
  {
      if (curr->children[c] == nullptr)
      {
          return ans;
      }
      curr = curr->children[c];
  }
  std::string temp = partialWord;
  if (curr->isEndOfWord){
    ans.push_back(temp);
  }
  for (auto m: curr->children)
  {
    std::string suggestion = temp+m.first;
    std::vector<std::string> suggestions = getSuggestions(suggestion);
    for (auto string : suggestions)
    {
        ans.push_back(string);
    }
  }
  return ans;
}


void Autocomplete::insert(std::string word){
  TrieNode* curr = root;
  for (char c : word){
    if (curr && curr->children[c] == nullptr){
      curr->children[c] = new TrieNode();
    }
    curr = curr->children[c];
  }
  curr->isEndOfWord = true;
}