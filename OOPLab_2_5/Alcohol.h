#pragma once
#include <iostream>
#include "Liquid.h"
using namespace std;

class Alcohol
{
private:
    float alco;
    Liquid liquid;

public:
    // Конструктори
    Alcohol();
    Alcohol(float alco, const Liquid& liquid);
    Alcohol(const Alcohol& other);

    // Оператор присвоєння
    Alcohol& operator=(const Alcohol& other);

    // Методи доступу
    float getAlco() const;
    Liquid getLiquid() const;
    void setAlco(float alco);
    void setLiquid(const Liquid& liquid);

    // Методи
    void Init(float alco, const Liquid& liquid);
    void Display() const;
    void Read();
    string toString() const;

    // Перевантаження операторів
    Alcohol& operator++();    // Префіксний інкремент
    Alcohol operator++(int);  // Постфіксний інкремент
    Alcohol& operator--();    // Префіксний декремент
    Alcohol operator--(int);  // Постфіксний декремент

    // Перевантаження операторів виводу та вводу
    friend ostream& operator<<(ostream& output, const Alcohol& alcohol);
    friend istream& operator>>(istream& input, Alcohol& alcohol);
};