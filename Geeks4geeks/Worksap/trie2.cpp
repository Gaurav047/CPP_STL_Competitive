#include <bits/stdc++.h>
#include <string>

using namespace std;

const int ALPH = 26;

struct TrieNode {
    struct TrieNode *children[ALPH];

    bool isEndOfWord;
};

struct TrieNode *getNode(){
    struct TrieNode* pNode = new TrieNode;

    pNode->isEndOfWord = false;

    for ( int i=0 ; i<ALPH ; i++ ){
        pNode->children[i] = NULL;
    }
    return pNode;
}

// insert function 

void insert( struct TrieNode *root, string key ){
    struct TrieNode *pTravel = root;
    for ( int i=0 ; i<key.length() ; i++ ){
        int index = key[i] -'a';
        if ( !pTravel->children[index] ){
            pTravel->children[index] = getNode();
        }
        pTravel = pTravel->children[index];
    }
    pTravel->isEndOfWord = true;
}


// return TRUE for a key is found in the trie else return false
bool search( struct TrieNode *root , string key ){
    struct TrieNode *pTravel = root;
    for ( int i=0 ; i<key.length() ; i++ ){
        int index = key[i] - 'a';
        if ( !pTravel->children[index]){
            return false;
        }
        pTravel = pTravel->children[index];
    }
    return ( pTravel != NULL && pTravel->isEndOfWord );
}

int main(){
    string keys[] = {"the", "a", "there", 
                    "answer", "any", "by", 
                     "bye", "their" }; 
    int n = sizeof(keys)/sizeof(keys[0]); 
  
    struct TrieNode *root = getNode(); 
  
    // Construct trie 
    for (int i = 0; i < n; i++) 
        insert(root, keys[i]); 

    search(root, "the")? cout << "Yes\n" : 
                         cout << "No\n"; 
    search(root, "these")? cout << "Yes\n" : 
                           cout << "No\n"; 
    return 0; 
}