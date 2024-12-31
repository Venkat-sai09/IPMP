#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMinMax(const vector<int>& arr) {
    int n = arr.size();
    int min_val, max_val;
    int i = 0;

    if (n % 2 == 0) {
        if (arr[0] > arr[1]) {
            max_val = arr[0];
            min_val = arr[1];
        } else {
            max_val = arr[1]; 
            min_val = arr[0];
        }
        i = 2;
    } else {
        max_val = min_val = arr[0];
        i = 1;
    }

    while (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            if (arr[i] > max_val) max_val = arr[i];
            if (arr[i + 1] < min_val) min_val = arr[i + 1];
        } else {
            if (arr[i + 1] > max_val) max_val = arr[i + 1];
            if (arr[i] < min_val) min_val = arr[i];
        }
        i += 2;
    }

    return {min_val, max_val};
}

int main() {
    vector<int> arr ;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    pair<int, int> result = findMinMax(arr);
    cout << "Minimum: " << result.first << endl;
    cout << "Maximum: " << result.second << endl;
    return 0;
}
