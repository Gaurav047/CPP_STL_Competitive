void insert( struct TrieNode *root , string key ){
    struct TrieNode *pTravel = root;

    for ( int i=0 ; i<key.length(); i++ ){
        int index = key[i] - 'a';
        if ( !pTravel->children[index] ){
            pTravel->children[index] = getNode();
        }
        pTravel = pTravel->children[index];
    }
    pTravel->isEndOfWord = true;
}

bool search( struct TrieNode *root , string key ){
    struct TrieNode * pTravel = root;
    for ( int i = 0 ; i< key.length() ; i++ ){
        int index = key[i] -'a';
        if ( !pTravel->childrenp[index] )
            return false;
        pTravel = pTravel->children[index];
    }
    return ( pTravel != NULL && pTravel->isEndofWord);

}



