#include "Vector.h"

using namespace std;

//Listo constructor
UTEC::Vector::Vector(): data{nullptr}, nelementos{0} {
}

//Listo Constructor
UTEC::Vector::Vector(int n): nelementos{n} {
    data = new int[nelementos];
}
//Listo destructor
UTEC::Vector::~Vector() {
        delete[] data;
}

//Listo size
int UTEC::Vector::size() {
    cout<< nelementos;
    return nelementos;
}

//Listo insert
void  UTEC::Vector::insert(int pos, int num) {

    try
    {
        if (pos > nelementos)
            throw logic_error("No entra en el vector");
    }


        catch(std::exception& e){
            cout << e.what();
        }


    int* temp = new int[nelementos + 1];

    for (int i = 0; i < nelementos; i++)
    {
        temp[i]= data[i];
    }
    nelementos++;

    for (int i=0; i < nelementos; i++)
    {
        if ( i < pos )
        {
            temp[i] = data[i];
        }
        else if (i == pos)
        {
         temp[i] = num;
        }
        else if (i> pos)
        {
            temp[i] = data[i-1];
        }

    }
    delete[] data;
    data = temp;
}

//Listo push_back
void UTEC:: Vector::push_back(int num) {
    int* temp = new int[nelementos + 1];
    for (int i=0; i < nelementos; i++)
    {
        temp[i] = data[i];
    }
    delete [] data;
    data = temp;
    data[nelementos]=num;
    nelementos++;
}

//Listo pop_back
void UTEC::Vector::pop_back() {
    int* temp = new int[nelementos-1];

    for (int i=0; i<nelementos; i++){
        temp[i]= data[i];
    }
    delete [] data;
    data = temp;
    nelementos--;

}

//Listo erase
void UTEC::Vector::erase(int borrar)
{
    try {
        if (borrar>nelementos)
            throw logic_error("No entra en el vector");
    }
    catch (std::exception& e)
    {
        cout << e.what();
    }
    int* temp = new int[nelementos-1];
    for (int i = 0; i < nelementos; i++)
    {
       if (borrar != i)
       {
           temp[i] = data[i];
       }
    }

    delete [] data;
    data = temp;
    nelementos--;
}



//Listo sobrecarga de operador []
int UTEC::Vector::operator[](int pos)
{
    try{
    if (pos < nelementos ){
    }
    else {
        cout <<"No se encuentra en el vector";
    }}
    catch (std::exception& e){
        cout << e.what();
    }

    return data[pos];
}

//Listo sobrecarga de operador +
UTEC::Vector UTEC::Vector::operator+( const Vector& v) {
    Vector temp(v);

    for (int i = 0; i < v.nelementos; i++) {
        temp.data[i] = temp.data[i] + this->data[i];
    }

    return temp;
}


//Listo sobrecarga de operador =
UTEC::Vector &UTEC::Vector::operator=(const Vector& v) {
    if(this->nelementos!=0){
        delete[] this->data;
    }
    this->nelementos = v.nelementos;
    this->data = new int[this->nelementos];
    for(int i = 0; i < this->nelementos; i++){
        this->data[i] = v.data[i];
    }
    return *this;
}
