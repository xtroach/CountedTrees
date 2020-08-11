#ifndef UNTITLED_COUNTEDTREES_H
#define UNTITLED_COUNTEDTREES_H
typedef struct countedTree{
    struct countedTree* left;
    int leftWeight;
    struct countedTree* right;
    int rightWeight;
    int value;
}CountedTree;
void countedTreesInsert(struct countedTree* root, int value);
int selectFromCountedTree(CountedTree* tree, int index);
CountedTree* createCountedTree(int value);
#endif //UNTITLED_COUNTEDTREES_H
