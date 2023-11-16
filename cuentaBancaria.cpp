//Ejercicio Clase Cuenta Bancaria
//Autor: Alejandra Galvan Bojorquez (A01424388)
//Fecha de creacion: 13/11/23.

#include <iostream>
#include <string>

using namespace std;

class CtaBanc {
private:
    double saldo, deposito, retiro; // Atributo de la clase
    string nombre;


public:
    // Método para establecer la velocidad del automóvil
    void setNombre(string n) {
        nombre = n;
    }

    void setSaldo(double s) {
        saldo = s;
    }

    // Métodos
    double getSaldo(){
        return saldo;
    }

    string getNombre(){
        return nombre;
    }


    void deposita(double deposito) {
        saldo = saldo + deposito;
    }

    bool retira(double retiro) {
        if (retiro > saldo) {
            return false;
        }else{
            saldo = saldo - retiro;
            return true;
        }
    }

    void muestra() {
        cout << getNombre() << " tu saldo es de " << getSaldo() <<endl;
    }
};

int main() {
    CtaBanc miCuenta; // Crear un objeto de la clase cuentaBancaria

    double deposito, retiro, saldo= 23000; // Atributo de la clase
    string nombre;
    bool estadoRetiro;

    miCuenta.setSaldo(saldo);

    cout << "Inserta tu nombre: " << endl;
    cin>>nombre;
    miCuenta.setNombre(nombre);

    miCuenta.muestra();

    cout << "Inserta cantidad a depositar: " << endl;
    cin >> deposito;
    miCuenta.deposita(deposito);

    miCuenta.muestra();

    cout << "Inserta cantidad a retirar: " << endl;
    cin >> retiro;
    estadoRetiro = miCuenta.retira(retiro);

    if (estadoRetiro == false) {
        cout << "Retiro rechazado" << endl;
    }else{
        cout << "Retiro exitoso" << endl;
    }

    miCuenta.muestra();


    return 0;
}
