#include <iostream>
#include <algorithm>
#include <vector>

#include "MemoryBlock.h"


// rvalue-references-move-semantics.cpp
// compile with: /EHsc

using namespace std;

int main()
{
    // Create a vector object and add a few elements to it.
    vector<MemoryBlock> v;
    v.push_back(MemoryBlock(25));
    v.push_back(MemoryBlock(75));

    // Insert a new element into the second position of the vector.
    v.insert(v.begin() + 1, MemoryBlock(50));
}