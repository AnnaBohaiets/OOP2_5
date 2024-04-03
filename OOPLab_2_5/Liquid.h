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
    // ������������
    Liquid();
    Liquid(const string& name, float density);
    Liquid(const Liquid& other);

    // �������� ���������
    Liquid& operator=(const Liquid& other);

    // ������ �������
    string getName() const;
    float getDensity() const;
    void setName(const string& name);
    void setDensity(float density);

    // ������
    void Init(const string& name, float density);
    void Display() const;
    void Read();
    string toString() const;

    // �������������� ���������
    Liquid& operator++();     // ���������� ���������
    Liquid operator++(int);   // ����������� ���������
    Liquid& operator--();     // ���������� ���������
    Liquid operator--(int);   // ����������� ���������

    // �������������� ���������
    friend ostream& operator<<(ostream& output, const Liquid& liquid);
    friend istream& operator>>(istream& input, Liquid& liquid);
};