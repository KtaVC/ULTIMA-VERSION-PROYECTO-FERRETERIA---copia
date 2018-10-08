#ifndef PILA_CARRITO_H
#define PILA_CARRITO_H
#include "Producto.h"



class Pila_Carrito
{
    struct nodo{
        Producto miProducto;
        struct nodo *sgte;
    };

    typedef struct nodo *Puntero;


        public:
            Pila_Carrito();
            void Apilar(Producto);
            void Cima();
            void Desapilar(void );
            bool PilaVacia(void);
            void MostrarPila(void);
            void DestruirPila(void);
            ~Pila_Carrito();
            //void menu(void);

        private:
            Puntero cima;
};

#endif // PILA_CARRITO_H
