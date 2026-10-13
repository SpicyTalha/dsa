#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    vector <vector <int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> grid(3, vector<int>(4, 0));
    grid[1][2] = 5;
    v.reserve(5); //This means it can contain 5 elements without resizing
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << "Capacity: " << v.capacity() << endl;

    for (auto num:v){ // auto is used to get a copy of each element in the vector, so we can print them without modifying them
        cout << num << " ";
    }
    cout << endl;

    for (auto& num:v){ // auto& is used to get a reference to each element in the vector, so we can modify them
        num *= 2; //This will double the value of each element in the vector
    }
    cout << endl;

    // Print the vector after modification
    for (auto num:v){ // auto is used to get a copy of each element in the vector, so we can print them without modifying them
        cout << num << " ";
    }
    cout << endl;
    cout << "Size: " << v.size() << endl; //This will print the size of the vector  
    cout << "Last Element: " << v.back() << endl; //This will print the last element of the vector
    v.pop_back(); //This will remove the last element of the vector

    //Final print of the vector
    for (auto num:v){ // auto is used to get a copy of each element in the vector, so we can print them without modifying them
        cout << num << " ";
    }
    cout << endl;
    cout << "Size: " << v.size() << endl; //This will print the size of the vector

    // Print the matrix
    for (auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    //Difference between auto and auto&
    for (auto num : v) {
        num *= 2; //This will double the value of each element in the vector, but it won't modify the original vector
        cout << num << " ";
    }
    cout << endl;

    for (auto num : v) {
     cout << num << " "; // You will see that the original vector is the same as before, because we didn't modify it in the previous loop
    }
    cout << endl;

    for (const auto& num : grid) {
        for (const auto& inner_num : num) {
            cout << inner_num << " ";
        }
        cout << endl;
    }
    cout << endl;
}