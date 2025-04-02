// Cola circular.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
class ColaCircular :
    def __init__(self, capacidad) :
    self.capacidad = capacidad  # Tamaño máximo de la cola
    self.cola = [None] * capacidad  # Inicializamos una lista vacía con el tamaño de la capacidad
    self.front = -1  # Puntero al frente
    self.rear = -1   # Puntero al final

    def esta_vacia(self) :
    return self.front == -1

    def esta_llena(self) :
    # La cola está llena si el siguiente valor de rear es igual a front
    return (self.rear + 1) % self.capacidad == self.front

    def enqueue(self, valor) :
    if self.esta_llena() :
        print("Cola circular está llena. No se puede insertar más elementos.")
        return
        if self.front == -1 : # Si la cola está vacía, se inicializa el puntero front
            self.front = 0
            self.rear = (self.rear + 1) % self.capacidad  # Calculamos la nueva posición de rear
            self.cola[self.rear] = valor  # Insertamos el valor en la posición de rear

            def dequeue(self) :
            if self.esta_vacia() :
                print("Cola circular está vacía. No se puede eliminar elementos.")
                return
                eliminado = self.cola[self.front]  # Obtenemos el elemento que será eliminado
                if self.front == self.rear:  # Si hay un solo elemento, la cola quedará vacía
                    self.front = self.rear = -1
                else:
self.front = (self.front + 1) % self.capacidad  # Actualizamos el puntero front
return eliminado

def ver_cola(self) :
    if self.esta_vacia() :
        print("La cola está vacía.")
        return
        i = self.front
        while True :
            print(self.cola[i], end = " ")
            if i == self.rear :
                break
                i = (i + 1) % self.capacidad
                print()
