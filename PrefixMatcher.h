#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include "PrefixNode.h"
#include <string>
class PrefixMatcher{
private:
  PrefixNode* root;
public:
  PrefixMatcher();
  int selectRouter(std::string networkAddress);
  void insert(std::string address, int routerNumber);
};
#endif