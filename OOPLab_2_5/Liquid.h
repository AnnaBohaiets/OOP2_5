#pragma once
#include <iostream>
#include <string>
using namespace std;

class Liquid
{
private:
    string name;
    float density;

public:
    // Конструктори
    Liquid();
    Liquid(const string& name, float density);
    Liquid(const Liquid& other);

    // Оператор присвоєння
    Liquid& operator=(const Liquid& other);

    // Методи доступу
    string getName() const;
    float getDensity() const;
    void setName(const string& name);
    void setDensity(float density);

    // Методи
    void Init(const string& name, float density);
    void Display() const;
    void Read();
    string toString() const;

    // Перевантаження операторів
    Liquid& operator++();     // Префіксний інкремент
    Liquid operator++(int);   // Постфіксний інкремент
    Liquid& operator--();     // Префіксний декремент
    Liquid operator--(int);   // Постфіксний декремент

    // Перевантаження операторів
    friend ostream& operator<<(ostream& output, const Liquid& liquid);
    friend istream& operator>>(istream& input, Liquid& liquid);
};