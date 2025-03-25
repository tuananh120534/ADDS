#ifndef PREFIXNODE_H
#define PREFIXNODE_H
#include <unordered_map>

struct PrefixNode {
  bool isEndOfWord = false;
  int routerNo;
  std::unordered_map<char,PrefixNode*> children;
};
#endif