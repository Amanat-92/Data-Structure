#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){

    cout << myMax<int>(63, 92) << endl;
    cout << myMax<double>(92.2, 88.8) << endl;
    cout << myMax<char>('a', 'p');
    return 0;
}
