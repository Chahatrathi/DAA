#include <iostream>
#include <cstring>
using namespace std;

string find_max_occurrences(string arr) {
    const int MAX_CHAR = 26;
    int count[MAX_CHAR];
    memset(count, 0, sizeof(count));
    int max_occurrences = 0;
    char max_char;
    for (char c : arr) {
        count[c - 'a']++;
    }
    for (int i = 0; i < MAX_CHAR; ++i) {
        if (count[i] > max_occurrences) {
            max_occurrences = count[i];
            max_char = 'a' + i;
        }
    }
    if (max_occurrences == 1) {
        return "No Duplicates Present";
    }
    return string(1, max_char) + "-" + to_string(max_occurrences);
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        cout << find_max_occurrences(arr) << endl;
    }
    return 0;
}
