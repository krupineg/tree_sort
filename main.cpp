#include <iostream>
#include <vector>
#include <conio.h>
#include "tree.h"


int main() {
    std::cout << "Tree sort." << std::endl;
    std::vector<int> vector = std::vector<int>();

    vector.push_back(10);
    vector.push_back(10);
    vector.push_back(5);
    vector.push_back(1);
    vector.push_back(12);
    vector.push_back(18);
    vector.push_back(9);

    tree t = tree();
    for (int i = 0; i < vector.size(); ++i) {
        t.put(vector.at(i));
    }
    t.print();
    t.printBack();

    _kbhit();
    return 0;
}

