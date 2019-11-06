// Get the shape of a 2D vector in terms of number of rows and number of columns

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector< vector<int>> v1;
    vector<int> temp;

    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(3);
    temp.push_back(4);
    temp.push_back(1);
    v1.push_back(temp);
    v1.push_back(temp);
    cout << " Number of rows in the 2D vector is : " << v1.size() << endl;
    cout << " Number of columns in the 2D vector is : " << v1[0].size() << endl;
    return 0;
}