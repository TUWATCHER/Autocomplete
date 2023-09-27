#pragma once

#include <string>
using namespace std;

const int ALPHABET_SIZE = 26; 
  

struct TrieNode
{ 
    struct TrieNode *children[ALPHABET_SIZE];
    
    bool isEndOfWord;
    int freq;
};

TrieNode *getNewNode(void);
void insert(TrieNode*, string);
bool search(TrieNode *, string);
bool isEmpty(TrieNode*);

TrieNode* remove(TrieNode*, string, int depth = 0);
void findMinPrefixes(TrieNode*, char[], int, string&);
void autocomple(TrieNode*, string);
int printPrefixes(TrieNode* , const string);

