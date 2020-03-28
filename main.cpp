#include <iostream>

using namespace std;

int main(){
    system("cls");
    int fn1, fn2, fn, n;
    cout << " ===== Program Deret Fibonacci =====" << endl << endl;
    cout << "Masukkan nilai ke-n : ";
    cin >> n;
    fn  = 1;
    fn1 = 0;
    fn2 = 0;
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << "Deret Fibonacci ke-" << i+1 << " : " << fn << endl;
        fn2 = fn1;
        fn1 = fn;
        fn = fn1 + fn2;
    }
    cin.get();
    return 0;
}


