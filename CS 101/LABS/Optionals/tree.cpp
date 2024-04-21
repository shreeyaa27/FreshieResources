#include <iostream>
#include <vector>

void constructTree(int a, int b, int c) {
    // Check if it's possible to construct a tree
    if (a < 2 || b < 1) {
        std::cout <<0<< std::endl;
        return;
    }

    std::vector<int> levels;

    // Add vertices with 2 children
    for (int i = 0; i < a; ++i)
        levels.push_back(2);

    // Add vertices with 1 child
    for (int i = 0; i < b; ++i)
        levels.push_back(1);

    // Add vertices with 0 children
    for (int i = 0; i < c; ++i)
        levels.push_back(0);

    // Calculate the height of the tree
    int maxHeight = 0;
    for (int i = 0; i < levels.size(); ++i) {
        int height = 0;
        int j = i;
        while (levels[j] != 0) {
            height++;
            j = (levels[j] == 1) ? i + a : j + 1;
        }
        maxHeight = std::max(maxHeight, height);
    }

    std::cout << "Minimum height of the tree: " << maxHeight << std::endl;
}

int main() {
    int a, b, c;
    
    // Taking input for the number of vertices with 2 children, 1 child, and 0 children
    
    std::cin >> a;
    
    std::cin >> b;
    
    std::cin >> c;

    // Construct the tree and find the minimum height
    constructTree(a, b, c);

    return 0;
}
