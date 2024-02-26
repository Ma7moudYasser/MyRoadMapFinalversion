#include <iostream>
#include <vector>
using namespace std;

vector<int> productArray(vector<int> arr){
    int n = arr.size();
    vector<int> output(n, 1);

    // Calculate product of all elements to the left of current element
    int product = 1;
    for (int i = 0; i < n; i++) {
        output[i] *= product;
        product *= arr[i];
    }

    // Reset product to 1 for product of elements to the right of current element
    product = 1;
    for (int i = n - 1; i >= 0; i--) {
        output[i] *= product;
        product *= arr[i];
    }

    return output;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> result = productArray(arr);

    cout << "Output Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
