#include <iostream>
#include <cassert>
#include "Vector.cpp"
using namespace std;
using namespace UTEC;


int main() {
    Vector v1;
    assert(v1.size() == 0);

    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(8);

    cout << "Push Back"<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] <<endl;
    }

    cout <<"\n";
    assert(v1.size()==5);

    cout <<"Insert"<<endl;
    v1.insert(1,8);
    for (int j = 0 ; j<v1.size();j++)
    {
        cout<<v1[j]<<endl;
    }
    cout <<"\n";
    assert(v1.size()==6);


    cout <<"Pop back"<<endl;
    v1.pop_back();
    for (int i= 0; i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
    cout <<"\n";
    assert(v1.size()==5);

    cout <<"Erase" <<endl;
    v1.erase(1);
    for(int i=0; i < v1.size();i++)
    {
        cout <<v1[i] <<endl;
    }
    cout <<"\n";
    assert(v1.size()==4);

    Vector v2;

    v2.push_back(10);
    v2.push_back(10);
    v2.push_back(10);

    Vector v3;

    v3 = v1 + v2;

    cout <<"Concatenar" <<endl;

    for (int i = 0; i < v1.size(); i++){
        cout<< v3[i] <<endl;
    }
    v1.operator[](0);
    return 0;
}