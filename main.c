#include <stdio.h>
#include "countedtrees.h"

void printCountedTree(CountedTree* tree){
    if(tree){
        printf("%d ",tree->value);

        printCountedTree(tree->left);
        printCountedTree(tree->right);
    }

}
int main() {
    CountedTree* countedTree1 = createCountedTree(5);
    countedTreesInsert(countedTree1, 5);
    countedTreesInsert(countedTree1, 10);
    countedTreesInsert(countedTree1, 4124);
    countedTreesInsert(countedTree1, 151);
    printCountedTree(countedTree1);
    printf("\n 1:%d:: 2:%d 3:%d 4:%d",selectFromCountedTree(countedTree1,10),selectFromCountedTree(countedTree1,1),selectFromCountedTree(countedTree1,4),selectFromCountedTree(countedTree1,3));
}
