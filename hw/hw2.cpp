#include <iostream>
using namespace std;
void powerset(char set[], char subset[], int index, int n) {
    if (index == n) {
        cout << "{ ";
        for (int i = 0; i < n; ++i)
            if (subset[i] != '\0') cout << subset[i] << " ";
        cout << "}\n";
        return;
    }
    subset[index] = set[index];
    powerset(set, subset, index + 1, n);
    subset[index] = '\0';
    powerset(set, subset, index + 1, n);
}
int main() {
    char set[10],subset[10];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements";
    for (int i = 0; i < n;i++){
    cin >> set[i];
    }
    cout << "Powerset:\n";
    powerset(set,subset, 0, n);

    return 0;
}
