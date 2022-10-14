// C++ program to sort an array of strings
// using Trie
#include <bits/stdc++.h>
using namespace std;
 
const int MAX_CHAR = 26;
 
struct Trie {
 
    // index is set when node is a leaf
    // node, otherwise -1;
    int index;
 
    Trie* child[MAX_CHAR];
 
    /*to make new trie*/
    Trie()
    {
        for (int i = 0; i < MAX_CHAR; i++)
            child[i] = NULL;
        index = -1;
    }
};
 
/* function to insert in trie */
void insert(Trie* root, string str, int index)
{
    Trie* node = root;
 
    for (int i = 0; i < str.size(); i++) {
 
        /* taking ascii value to find index of
          child node */
        char ind = str[i] - 'a';
 
        /* making new path if not already */
        if (!node->child[ind])
            node->child[ind] = new Trie();
 
        // go to next node
        node = node->child[ind];
    }
 
    // Mark leaf (end of word) and store
    // index of word in arr[]
    node->index = index;
}
 
/* function for preorder traversal */
bool preorder(Trie* node, string arr[])
{
    if (node == NULL)
        return false;
 
    for (int i = 0; i < MAX_CHAR; i++) {
        if (node->child[i] != NULL) {
 
            /* if leaf node then print key*/
            if (node->child[i]->index != -1)
                cout << arr[node->child[i]->index] << endl;
 
            preorder(node->child[i], arr);
        }
    }
}
 
void printSorted(string arr[], int n)
{
    Trie* root = new Trie();
 
    // insert all keys of dictionary into trie
    for (int i = 0; i < n; i++)
        insert(root, arr[i], i);
 
    // print keys in lexicographic order
    preorder(root, arr);
}
 
// Driver code
int main()
{
    string arr[] = {"geeks", "for", "geeks", "a", "portal", 
        "to", "learn", "can", "be", "computer", 
        "science", "zoom", "yup", "fire", "in", "data" };
    int n = sizeof(arr) / sizeof(arr[0]);
    printSorted(arr, n);
    return 0;
}