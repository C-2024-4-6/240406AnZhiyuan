#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        int num;
        cin >> num;
        bool isNew = true;
        for (int j = 0; j < v.size(); ++j) {
            if (v[j] == num) {
                isNew = false;
                break;
            }
        }
        if (isNew) {
            v.push_back(num);
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
    return 0;
}