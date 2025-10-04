#include <iostream>
#include <vector>
// #include <queue>
using namespace std;


void display(const std::vector<int>& v) {
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}


int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    vector<int> prefixSum(n);
    prefixSum[0] = v[0];

    for (int i = 1; i<n;i++){
        prefixSum[i] = prefixSum[i-1] + v[i];
    }

    display(v);
    display(prefixSum);

    
}