#include <iostream>
using namespace std;

class Node {
private:
  int data;
  Node *left;
  Node * right;

public:
  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }

  int getData() {
    return data;
  }

  Node *getLeft() {
    return left;
  }

  Node *setLeft(Node *node) {
    return left = node;
  }

  Node *getRight() {
    return right;
  }

  Node *setRight(Node *node) {
    return right = node;
  }
};

class Tree {
private:
  Node *root;
public:
  Tree() {
    root = NULL;
  }

  Node *getRoot() {
    return root;
  }

  void insert(int data) {
    if (root == NULL) {
      root = new Node(data);
    } else {
      auxInsert(root, data);
    }
  }

  void auxInsert(Node *node, int data) {
    if (data < node->getData()) {
      if (node->getLeft() == NULL) {
        Node *new_node = new Node(data);
        node->setLeft(new_node);
      } else {
        auxInsert(node->getLeft(), data);
      }
    } else {
      if (node->getRight() == NULL) {
        Node *new_node = new Node(data);
        node->setRight(new_node);
      } else {
        auxInsert(node->getRight(), data);
      }
    }
  }
  
  void pre_order(Node *node) {
    cout << node->getData() << " ";   
    if (node->getLeft() != NULL) {
      pre_order(node->getLeft());
    }
    if (node->getRight() != NULL) {
      pre_order(node->getRight());
    }
  }

  Node *findNode(Node *node, int element) {
    if (node == nullptr) return nullptr;
    if (node->getData() == element) return node;

    Node *nodeFound = findNode(node->getLeft(), element);
    if (nodeFound != nullptr) return nodeFound;

    return findNode(node->getRight(), element);
  }

  void getLeaf(Node *node) {
    if (node->getLeft() == NULL && node->getRight() == NULL) {
      cout << node->getData() << endl;
    } else {
      if (node->getLeft() != NULL) {
        getLeaf(node->getLeft());
      }
      if (node->getRight() != NULL) {
        getLeaf(node->getRight());
      }
    }
  }

  void getGrade(Node *node, int element) {
    Node *nodeFound = findNode(node, element);

    if (nodeFound == 0) {
      cout << "Are you kidding my brother? type an existing node pls";
    } else {
      if (nodeFound->getLeft() == NULL && nodeFound->getRight() == NULL ) {
        cout << "Grade is 0";
      } else if (nodeFound->getLeft() != NULL && nodeFound->getRight() != NULL) {
        cout << "Grade is 2";
      } else {
        cout << "Grade is 1";
      }
    }
  }

  void getAllGrade(Node *node) {
    if (node->getRight() == NULL && node->getLeft() == NULL) {
      cout << node->getData() << ": 0" << endl;
    } else if (node->getRight() != NULL && node->getLeft() != NULL) {
      cout << node->getData() << ": 2" << endl;
      if (node->getLeft() != NULL) {
        getAllGrade(node->getLeft());
      }
      if (node->getRight() != NULL) {
        getAllGrade(node->getRight()); 
      }
    } else {
      cout << node->getData() << ": 1" << endl;
      if(node->getRight() != NULL) {
        getAllGrade(node->getRight());
      } else {
        getAllGrade(node->getLeft());
      }
    }
  }

  int getNodeHeight(Node *node) {
    int leftHeigt = -1;
    int rightHeigt = -1;

    if(root != NULL) {
      if (node->getLeft() != NULL) {
        leftHeigt = getNodeHeight(node->getLeft());
      }
      if (node->getRight() != NULL) {
        rightHeigt = getNodeHeight(node->getRight());
      }

      return max(leftHeigt, rightHeigt) + 1;
    }
    return 0;
  }

  int getHeight(Node *node, int element) {
    Node *nodeFound = findNode(node, element);

    if (nodeFound == NULL) {
      cout << "Are you kidding my brother? type an existing node pls";
    } else {
      return getNodeHeight(nodeFound);
    }
    return 0;
  }

  void getAllHeights(Node *node) {
     if (node == NULL) {
      cout << "Are you kidding my brother? type an existing node pls";
    } else {
       cout << node->getData() << ": " << getNodeHeight(node) << endl;
       if (node->getLeft() != NULL) {
         getAllHeights(node->getLeft());
       }
       if (node->getRight() != NULL) {
         getAllHeights(node->getRight());
       }
       
    }
  }

  void getAncestors(Node *node, int ancestors) {
    if (node == NULL) {
      cout << "";
    } else {
      cout << node->getData() << ": " << ancestors << endl;

      if (node->getLeft() != NULL || node->getRight() != NULL) {
        getAncestors(node->getLeft(), ancestors + 1);
        getAncestors(node->getRight(), ancestors + 1);
      } 
    }
  }

  void getAllDepths(Node *node) {
    if (node == NULL) {
      cout << "Are you kidding my brother? type an existing node pls";
    } else {
      getAncestors(node, 0);
    }
  }

  void getSubtree(Node *node) {
    if (node == NULL) {
      cout << "Are you kidding my brother? type an existing node pls";
    } else {
      pre_order(node);
    }
  }

  void getAllSubtrees(Node *node) {
    if (node == NULL) {
      cout << "Are you kidding my brother? type an existing node pls";
    } else {
      pre_order(node);
      cout << endl;
      if (node->getLeft()) {
        getAllSubtrees(node->getLeft());
      }
      if (node->getRight()) {
        getAllSubtrees(node->getRight());
      }
    }
  }
};

int main() {
  Tree t = Tree();

  t.insert(10);
  t.insert(8);
  t.insert(9);
  t.insert(12);
  t.insert(11);
  t.insert(14);
  t.insert(20);
  t.insert(13);
  t.insert(7);

  cout << "a) ";
  t.pre_order(t.getRoot());
  cout << endl << "b) ";
  t.getLeaf(t.getRoot());
  cout << endl << "c) ";
  //t.getGrade(t.getRoot(), 10);
  t.getAllGrade(t.getRoot());
  cout << endl << "d) ";
  t.getAllHeights(t.getRoot());
  cout << endl << "e,f) ";
  //cout << t.getDepth(t.getRoot());
  t.getAllDepths(t.getRoot());
  cout << endl << "g) ";
  //t.getSubtree(t.getRoot(), 14);
  t.getAllSubtrees(t.getRoot());
  
  return 0;
}
