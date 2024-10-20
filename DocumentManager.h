#pragma once
#include <string>
#include <unordered_set>
#include <unordered_map>

class DocumentManager{
  std::unordered_map<int,int> licenses_table;
  std::unordered_map<std::string,int> documents_table;
  std::unordered_set<int> patrons;
public:
  void addDocument(std::string name, int id, int license_limit);
  void addPatron(int patronID);
  int search(std::string name);
  bool borrowDocument(int docid, int patronID);
  void returnDocument(int docid, int patronID);
};