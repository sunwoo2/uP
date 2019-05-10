#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    int r0 = 1;
    int r1 = 1;
    int r2 = 2;
    int r5 = 10;

    r5 -= r2;

    // Fibonacci number
    while(r5){
        int r6 = r0 + r1;
        r1 = r0;
        r0 = r6;
        r5--;
    }

    cout << "Result: " << r0 << endl;

    return 0;

}
