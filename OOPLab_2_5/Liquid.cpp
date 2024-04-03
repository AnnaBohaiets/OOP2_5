#include "Liquid.h"
Liquid::Liquid() : name(""), density(0.0) {}

Liquid::Liquid(const string& name, float density) : name(name), density(density) {}

Liquid::Liquid(const Liquid& other) : name(other.name), density(other.density) {}

Liquid& Liquid::operator=(const Liquid& other)
{
    if (this != &other)
    {
        name = other.name;
        density = other.density;
    }
    return *this;
}

string Liquid::getName() const { return name; }
float Liquid::getDensity() const { return density; }
void Liquid::setName(const string& name) { this->name = name; }
void Liquid::setDensity(float density) { this->density = density; }

void Liquid::Init(const string& name, float density)
{
    setName(name);
    setDensity(density);
}

void Liquid::Display() const
{
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Density: " << density << endl;
}

void Liquid::Read()
{
    cout << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter density: ";
    cin >> density;
}

string Liquid::toString() const
{
    return "Name: " + name + ", Density: " + to_string(density);
}


// Перевантаження операторів
Liquid& Liquid::operator++() {
    ++density;
    return *this;
}

Liquid Liquid::operator++(int) {
    Liquid temp(*this);
    ++(*this);
    return temp;
}

Liquid& Liquid::operator--() {
    --density;
    return *this;
}

Liquid Liquid::operator--(int) {
    Liquid temp(*this);
    --(*this);
    return temp;
}

ostream& operator<<(ostream& output, const Liquid& liquid) {
    output << "Name: " << liquid.name << endl;
    output << "Density: " << liquid.density << endl;
    return output;
}

istream& operator>>(istream& input, Liquid& liquid) {
    cout << "Enter liquid name: ";
    input >> liquid.name;
    cout << "Enter liquid density: ";
    input >> liquid.density;
    return input;
}