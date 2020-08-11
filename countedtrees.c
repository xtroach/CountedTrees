#include "countedtrees.h"

#include <stdio.h>
#include <stdlib.h>



void countedTreesInsert(CountedTree *root, int value){
    CountedTree* cur = root;
    while(1){
        if(value<=cur->value){
            cur->leftWeight++;
            if(cur->left){
                cur = cur->left;
            }else{
                cur->left = malloc(sizeof(struct countedTree));
                cur->left->value = value;
                break;
            }
        }
        if(value>cur->value){
            cur->rightWeight++;
            if(cur->right){
                cur = cur->right;
            }else{
                cur->right = malloc(sizeof(struct countedTree));
                cur->right->value = value;
                break;
            }
        }
    }
}
int selectFromCountedTree(CountedTree* tree, int index){

    while(1) {
        if(index>=tree->leftWeight+tree->rightWeight+1)return -1;
        int curIndex = tree->leftWeight;
        if (index == curIndex) {
            return tree->value;
        }
        if (index < curIndex){
            tree = tree->left;
        }else {
            tree = tree->right;
            index = index -(curIndex+1);
        }
    }

}
CountedTree* createCountedTree(int value){
    struct countedTree* ret = malloc(sizeof(struct countedTree));
    ret->value = value;
}



