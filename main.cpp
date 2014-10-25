// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
    while(!mi_cola.empty()) // con el while hacemos un cliclo, en el cual crearemos una condicion para ver que la cola no este vacia
    {
        if(mi_cola.front() %2 !=0) // creamos la condicion para comparar si el elemento no es par (impar)
        {
           return false; // si resulta ser impar retornara false
        }
        mi_cola.pop(); // borramos el elemento que es en frente de la cola.
    }
    return true; // si no encontramos Num. impares, retornamos que todos son pares.
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    do // creamos la condicion, revisando el primer elemento directamente de la lista.
    {
        if(mi_lista.front() %2 !=0) // se hace la comparacion del elemento frontal, para saber si es par o impar
        {
            return false; // si el elemento es impar, retornara false
        }
        mi_lista.pop_front(); // borramos el elemento que esta frente de la lista
    }while(!mi_lista.empty()); // creamos un ciclo para revisar cada uno de los elementos en la lista.

    return true; // si no se encuentran numeros impares, return true
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty()) // creamos un ciclo para asegurar que la cola no este vacia
    {
        if(mi_cola.front()==str) // comparamos si el elemnto str para saber si existe dentro de la cola
        {
            return true; // retorna true si se encuentra
        }
        mi_cola.pop(); // sacamos el elemento que esta frente en la cola
    }
    return false; // sino esta return false
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty()) // creamos un ciclo para verificar que la lista no este vacia
    {
        if(mi_lista.front()== str)  // se hace la comparacion del elemento para ver si se encuentra en la lista
        {
            return true; // return true si el elemento se encuentra en la lista.
        }
        mi_lista.pop_front(); // sacamos el elemento frontal en la lista
    }
    return false; // sino se encuentra return false
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int suma =0; // creamos una variable para guardar la suma en memoria
    while(!mi_cola.empty()) // con el while creamos un ciclo para recorrer todos los elementos dentro de la cola
    {
        suma += mi_cola.front(); // se genera la suma de los elementos
        mi_cola.pop(); // se elimina el elemento frontal en la cola

    }
    return suma; // retornamos el resultado total de la suma obtenida
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int suma =0; // creamos una variable donde se guardara la suma de los elementos en memoria
    while(!mi_lista.empty()) // se hace un ciclo para revisar cada uno de los elementos encontrados de la lista
    {
        suma += mi_lista.front(); // acumulamos la suma en cada pasada del recorrido dentro de la lista
        mi_lista.pop_front(); // eliminamos el elemento frontal en cada pasada
    }
    return suma; // return la suma de elementos
    }



//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    list<char> aux = mi_lista; // creamos una variable aux para guardar en memoria los caracteres de la lista que tenemos
    aux.sort(); // se ordenan los elementos en orden alfabetico sort() dentro de nuestro aux

   do // hecemos la comparacion directamente de la lista
    {
        if(mi_lista.front() != aux.front()) // si el elemento frontal de la lista base, es diferente al elemento del usamos aux( lista ordenada) para ordenarla
        {
            return false; // retornamos false si no esta ordenada
        }
        mi_lista.pop_front(); // eliminaremos el primer elemento de la lista base
        aux.pop_front(); // eliminaremos el primer elemento de nuestra lista aux.
    } while(!mi_lista.empty()); // creamos el ciclo para revisar todos los elementos de la lista

    return true; // si esta ordenada return true
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
