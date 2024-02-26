#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string find_elements_with_sum(vector<int>& arr, int key) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int current_sum = arr[left] + arr[right];
        if (current_sum == key) {
            return to_string(arr[left]) + " " + to_string(arr[right]);
        } else if (current_sum < key) {
            left++;
        } else {
            right--;
        }
    }

    return "No Such Elements Exist";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int key;
        cin >> key;

        string result = find_elements_with_sum(arr, key);
        cout << result << endl;
    }

    return 0;
}
