#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int arr1[1000], arr2[1000];
    bool isRated = false, isUnrated = false;
    int maxRating = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> arr1[i] >> arr2[i];
        if (arr1[i] != arr2[i]) {
            isRated = true;
        }
        if (maxRating < arr1[i]) {
            maxRating = arr1[i];
            if (i > 0) {
                isUnrated = true;
            }
        }
    }
 
    if (isRated) {
        cout << "rated\n";
    } else if (isUnrated) {
        cout << "unrated\n";
    } else {
        cout << "maybe\n";
    }
 
    return 0;
}
