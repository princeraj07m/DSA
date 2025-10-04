#include <iostream>
#include <vector>
void display(const std::vector<int>& v) {
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(v);



    v.erase(v.begin()+1, v.begin()+4);
    // v.clear();
    display(v);

    v.insert(v.begin()+1, 2);
    display(v);


    

}