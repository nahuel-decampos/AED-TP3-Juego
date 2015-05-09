
/* Juego de preguntas
   Nahuel de Campos
   02/05/15
*/

#include <iostream>
using namespace std;

int main (){
    bool abandon = false;
    char topic;
    char option;
    int acu = 0;
    int score = 0;

    do
    {
        cout << "\n";
        cout << "                   JUEGO DE PREGUNTAS\n";
        cout << "                   ------------------\n";
        cout << "   Elige una categoria:\n";
        cout << "   a) Hardware\n";
        cout << "   b) Software\n";
        cout << "   c) Salir (alternativamente puedes presionar 's'\n\n";
        cin >> topic;
        switch (topic)
        {
            case 'a':
                cout << "   Has elegido la categoria: Hardware\n";
                cout << "   Puedes presionar 'q' en cualquier momento para abandonar\n\n";
                cout << "   Pregunta: Cual es la esencia de la arquitectura de Von Neumann?\n";
                cout << "   Opciones:\n";
                cout << "   a) El sistema de programa fijo\n";
                cout << "   b) El sistema de programa almacenado\n";
                cout << "   c) El conjunto dedicado de direcciones y buses de datos\n";
                cin >> option;
                if (option == 's'){
                    break;
                }
                else if (option == 'b'){
                    acu++;
                    cout << "   CORRECTO!!!\n\n";
                    break;
                }
                else if (option == 'a' or option == 'c'){
                    acu--;
                    cout << "   Que pena! Respuesta incorrecta ='(\n\n";
                    break;
                }
            case 'b':
                cout << "   Has elegido la categoria: Software\n";
                cout << "   Puedes presionar 'q' en cualquier momento para abandonar\n\n";
                cout << "   Pregunta: Cual es la principal funcion de un Sistema Operativo?\n";
                cout << "   Opciones:\n";
                cout << "   a) Gestionar los recursos de la computadora y actuar como intermediario entre el harware y las aplicaciones\n";
                cout << "   b) Presentar una interface intuitiva y amigable para el usuario\n";
                cout << "   c) Permitir al usuario tener control absoluto de su computadora y sus procesos\n";
                cin >> option;
                if (option == 's'){
                    break;
                }
                else if (option == 'a'){
                    acu++;
                    cout << "   CORRECTO!!!\n\n";
                    break;
                }
                else if (option == 'b' or option == 'c'){
                    acu--;
                    cout << "   Que pena! Respuesta incorrecta ='(\n\n";
                    break;
                }
            case 'c':
                abandon = true;
                break;

            case 's':
                abandon = true;
                break;
        }
    } while (abandon == false);
    if (acu <= 0)
        score = 0;
    else if (acu >= 2)
        score = 2;
    else
        score = 1;

    cout << "   Respuestas correctas: " << score << "\n";
}
