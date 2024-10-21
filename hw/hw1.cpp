#include <iostream>
using namespace std;
int count=0;
int Ackermann(int m,int n) {
    if (m == 0) {
        return n+1;
    } else if (n == 0) {
        return Ackermann(m-1,1);
    } 
    else {
        return Ackermann(m-1,Ackermann(m,n-1));
    }
}

int main() {
    int m, n;
    cout << "Enter values for m and n: ";
    cin >> m >> n;
    cout << "Ackermann(" << m << ", " << n << ") = " << Ackermann(m,n)<< endl;
    return 0;
}

