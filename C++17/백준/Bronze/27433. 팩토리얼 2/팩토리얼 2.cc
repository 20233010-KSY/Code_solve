#include <iostream>

using namespace std;

// 20!까지 계산하기 위해 long long 타입을 사용합니다.
long long factorial(int n) {
    // Base Case: 0!과 1!은 1입니다. [cite: 208, 209]
    if (n <= 1) {
        return 1;
    }
    // Recursive Case: n * (n-1)! 
    // 반드시 앞에 return을 붙여 계산 값을 상위 호출로 전달해야 합니다.
    return (long long)n * factorial(n - 1);
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    cout << factorial(n) << endl;

    return 0;
}