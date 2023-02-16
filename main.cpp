#include <iostream>
using namespace std;

void askexchange(int& cointype1, int& cointype2, float& value);
float changing(int cointype1, int cointype2, float value);

int main(){
    float value;
    int cointype1 = 0, cointype2 = 0; // inicializar as variáveis com valor 0
    askexchange(cointype1, cointype2, value);
    value = changing(cointype1, cointype2, value); // atribuir o valor retornado pela função
    cout << "The amount of money that you have now is: " << value << endl;
    return 0;
}

void askexchange(int& cointype1, int& cointype2, float& value){
    cout << "Hello, this is the Chaotic Coin Exchange" << endl;
    do {
        cout << "Please choose one of the following coins: EUR-1, USD-2, BRL-3" << endl;
        cin >> cointype1;
        cout << "Please choose one of the following coins to exchange: EUR-1, USD-2, BRL-3" << endl;
        cin >> cointype2;
    } while (cointype1 == cointype2);

    cout << "What amount of money are you exchanging? " << endl;
    cin >> value;
}

float changing(int cointype1, int cointype2, float value){
    if (cointype1 == 1) {
        if (cointype2 == 2)
            value = value * 1.07;
        if (cointype2 == 3)
            value = value * 5.58;
        return value;
    }

    if (cointype1 == 2) {
        if (cointype2 == 1)
            value = value * 0.94;
        if (cointype2 == 3)
            value = value * 5.22;
        return value;
    }

    if (cointype1 == 3) {
        if (cointype2 == 1)
            value = value * 0.18;
        if (cointype2 == 2)
            value = value * 0.19;
        return value;
    }
    return value; // Adicionar um retorno caso nenhum if seja verdadeiro
}
