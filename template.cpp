#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){

    cout << "Max of 16 and 44 is: " << myMax<int>(16, 44) << endl;
    cout << "Max of 3.5 and 7.5 is :" << myMax<double>(3.5, 7.5) << endl;
    cout << "Max of 'a' and 'p' is: " << myMax<char>('a', 'p') << endl;
    return 0;
}
