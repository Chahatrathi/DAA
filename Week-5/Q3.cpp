#include <iostream>
#include <vector>

using namespace std;

vector<int> findCommonElements(vector<int>& arr1, vector<int>& arr2) {
    vector<int> commonElements;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            commonElements.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return commonElements;
}

int main() {
    int m, n;
    cin >> m;
    vector<int> arr1(m);
    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }

    cin >> n;
    vector<int> arr2(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    vector<int> commonElements = findCommonElements(arr1, arr2);

    // Output the common elements
    for (int i = 0; i < commonElements.size(); ++i) {
        cout << commonElements[i] << " ";
    }
    cout << endl;

    return 0;
}
