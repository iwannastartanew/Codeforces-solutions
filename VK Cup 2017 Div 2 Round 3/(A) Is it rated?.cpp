#include <iostream>
#include <string>
using namespace std;
 
string Word(int a, int b, int c) {
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int max_val = max(a, max(b, c));
    int min_val = min(a, min(b, c));
    int mid_val = (a + b + c) - (max_val + min_val);
    return string(1, letters[min_val]) + letters[mid_val] + letters[max_val];
}
 
int main() {
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    bool isRated = false;
 
    for (int i = 0; i < n; i++) {
        cin >> arr1[i] >> arr2[i];
        if (arr1[i] != arr2[i]) {
            isRated = true;
        }
    }
 
    if (isRated) {
        cout << "rated" << endl;
        return 0;
    }
 
    int max_rating = arr1[0];
    bool isUnrated = true;
 
    for (int i = 1; i < n; i++) {
        if (max_rating < arr1[i]) {
            isUnrated = false;
            break;
        }
        max_rating = arr1[i];
    }
 
    if (!isUnrated) {
        cout << "unrated" << endl;
    } else {
        cout << "maybe" << endl;
    }
 
    return 0;
}
