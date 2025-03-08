#include <iostream>
using namespace std;
int main() {
int n=50, a=0, b=0;
    cout<<"Suma de numeros pares:"<<endl;
    for (int i = 2; i <= 50; i+=2) {
        a = a + i;
        std::cout << a << std::endl;
    }
    cout<<"Suma de numeros impares:"<<endl;

    for (int i = 1; i <= 50; i+=1) {
        b = b + i;
        std::cout  <<  b<< std::endl;
    }

    return 0;
}