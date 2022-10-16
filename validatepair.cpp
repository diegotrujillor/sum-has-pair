#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool HasPairWithSum(const unordered_set<int> data, int sum) {
    unordered_set<int> comp;

    for (int value : data) {
        if (comp.find(value) != comp.end())
            return true;
        comp.insert(sum-value);
        
    }
    
    return false;
}

int main() {
    int sum = 8;
    unordered_set<int> data { 1, 2, 3, 9 };
    //unordered_set<int> data{ 1, 2, 4, 4 };

    if (HasPairWithSum(data, 8))
        std::cout << "Yes"; 
    std::cout << "No";     
}