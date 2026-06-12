#include <iostream>
using namespace std;

//membuat class node
class Node {

    //membuat akses modifier serta mendeklarasi variabel dan object node
public :
    string info;
    Node* leftChild;
    Node* rightChild;


    //membuat constructor untuk class node
    Node(string i, Node* 1, Node* r) {

        info = i;
        leftChild = l;
        rightChild = r;
    }
};

class BinaryTree {

public :
    Node* ROOT;


    BinaryTree() {
        ROOT = nullptr;
    }

    void insert(string element) {

        Node* newNode = new Node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode);

        if (parent == nullptr) {
            ROOT = newNode;
            return;
        }
