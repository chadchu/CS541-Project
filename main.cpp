#include "bTree.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <iostream>


bool cmp(const int a, const int b) {
    return a < b;
}

int main() {
    BTree<int> t(2, cmp);
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
        cout << t.insert(rand()) << endl;

    // for (int i = 0; i < 60000000; i++)
    //     t.insert(rand());

    // for (int i = 0; i < 5000; i++) {
    //     int total_split = 0;
    //     for (int j = 0; j < 10000; j++) {
    //         total_split += t.insert(rand());
    //     }
    //     cout << total_split << endl;
    // }


    return 0;
}