#ifndef EJERCICIO_MYVECTOR_VECTOR_H
#define EJERCICIO_MYVECTOR_VECTOR_H

namespace UTEC {
    class Vector {

    private:
        int *data;
        int nelementos;

    public:
        Vector();

        Vector(int);

        virtual ~Vector();

        int size();

        void insert(int, int);

        void push_back(int);

        void pop_back();

        void erase(int);

        int operator[](int);

        Vector operator+(const Vector &);

        Vector &operator=(const Vector &);


    };
}

#endif //EJERCICIO_MYVECTOR_VECTOR_H
