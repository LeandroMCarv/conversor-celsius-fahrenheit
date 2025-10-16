#include<iostream>

using namespace std;

float calculacase1(float temp_fah,float temp_cel);
float calculacase2(float temp_cel,float temp_fah);

int main(){
    float temp_cel,temp_fah;
    int op;
    do{
        cout << endl << "\tCONVERTE TEMPERATURA" << endl << "<0>Sair do programa" << endl << "<1>Converte de Fahrenheit para Celsius" << endl << "<2>Converte de Celsius para Fahrenheit" << endl << "Opcao escolhida: ";
        cin >> op;
        switch(op){
            case 1:
            cout << endl << "Informe a temperatura em Fahrenheit: ";
            cin >> temp_fah;
            temp_cel = calculacase1(temp_fah,temp_cel);
            cout << endl << "Temperatura em Fahrenheit: " << temp_fah << " convertida para Celsius: " << temp_cel;
            break;
            case 2:
            cout << endl << "Informe a temperatura em Celsius: ";
            cin >> temp_cel;
            temp_fah = calculacase2(temp_cel,temp_fah);
            cout << endl << "Temperatura em Celsius: " << temp_cel << " convertida para Fahrenheit: " << temp_fah;
            break;
            case 0:
            cout << endl << "Saindo do programa...";
            break;
            default:
            cout << endl << "Opcao nao encontrada";
        }
    }while(op!=0);
}

float calculacase1(float temp_fah,float temp_cel){
    temp_cel = ((temp_fah-32)/9) *5;
    return temp_cel;
}

float calculacase2(float temp_cel,float temp_fah){
    temp_fah = temp_cel*9;
    temp_fah = temp_fah+160;
    temp_fah = temp_fah/5;
    return temp_fah;
}
