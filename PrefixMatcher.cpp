#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher(){
  root = new PrefixNode();
}
void PrefixMatcher::insert(std::string address, int routerNumber){
  PrefixNode* curr = root;
  for(auto c:address){
    if(curr->children[c]==nullptr || curr==nullptr){
      curr->children[c] = new PrefixNode();
    }
    curr=curr->children[c];
  }
  curr->isEndOfWord = true;
  curr->routerNo = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress){
  PrefixNode* curr = root;
  int longestMatch = -1;
  for(auto c:networkAddress){
    if(curr->children[c]==nullptr || curr==nullptr){
      return longestMatch;
    }
    curr=curr->children[c];
    longestMatch = curr->routerNo;
  }
  return longestMatch;
}