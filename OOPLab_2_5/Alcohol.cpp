#include "Alcohol.h"
#include "iostream"

Alcohol::Alcohol() : alco(0), liquid() {}

Alcohol::Alcohol(float alco, const Liquid& liquid) : alco(alco), liquid(liquid) {}

Alcohol::Alcohol(const Alcohol& other) : alco(other.alco), liquid(other.liquid) {}

Alcohol& Alcohol::operator=(const Alcohol& other)
{
    if (this != &other)
    {
        alco = other.alco;
        liquid = other.liquid;
    }
    return *this;
}

float Alcohol::getAlco() const { return alco; }
Liquid Alcohol::getLiquid() const { return liquid; }
void Alcohol::setAlco(float alco) { this->alco = alco; }
void Alcohol::setLiquid(const Liquid& liquid) { this->liquid = liquid; }

void Alcohol::Init(float alco, const Liquid& liquid)
{
    setAlco(alco);
    setLiquid(liquid);
}

void Alcohol::Display() const
{
    cout << endl;
    cout << "Alcohol Content: " << alco << "%" << endl;
    liquid.Display();
}

void Alcohol::Read()
{
    cout << endl;
    cout << "Enter alcohol content (%): ";
    cin >> alco;
    liquid.Read();
}

string Alcohol::toString() const
{
    return "Alcohol Content: " + to_string(alco) + "%, " + liquid.toString();
}


// Перевантаження операторів
Alcohol& Alcohol::operator++() {
    ++alco;
    return *this;
}

Alcohol Alcohol::operator++(int) {
    Alcohol temp(*this);
    ++(*this);
    return temp;
}

Alcohol& Alcohol::operator--() {
    --alco;
    return *this;
}

Alcohol Alcohol::operator--(int) {
    Alcohol temp(*this);
    --(*this);
    return temp;
}

ostream& operator<<(ostream& output, const Alcohol& alcohol) {
    output << "Alcohol: " << endl;
    output << alcohol.liquid << endl;
    output << "Alco: " << alcohol.alco << endl;
    return output;
}

istream& operator>>(istream& input, Alcohol& alcohol) {
    cout << "Enter liquid details:" << endl;
    input >> alcohol.liquid;
    cout << "Enter alcohol content: ";
    input >> alcohol.alco;
    return input;
}