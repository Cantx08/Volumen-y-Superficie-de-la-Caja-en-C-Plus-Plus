#include <iostream>

using namespace std;

int main() {
    cout << "05 Programa que calcula el volumen y superficie de una caja" << endl;
    float ancho, largo, alto, superficie, volumen;

    // Ingresar la longitud del ancho, largo y alto de la caja.
    // Nota: El ancho, largo y alto deben tener una longitud mayor a 0!
    cout << "Ingrese el ancho de la caja (cm): ";
    cin >> ancho;
    cout << "Ingrese el largo de la caja (cm): ";
    cin >> largo;
    cout << "Ingrese la altura de la caja (cm): ";
    cin >> alto;

    // Calcular el volumen de la caja.
    volumen = ancho * largo * alto;

    // Calcular la superficie de la caja.
    superficie = 2 * ((ancho * largo) + (largo * alto) + (alto * ancho));

    // Mostrar el resultado en consola.
    cout << "El volumen de la caja es: " << volumen << " cm^3." << endl;
    cout << "Se necesita " << superficie << " cm^2 de papel para cubrir la caja." << endl;
    return 0;
}