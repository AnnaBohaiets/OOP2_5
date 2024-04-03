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
    // ������������
    Alcohol();
    Alcohol(float alco, const Liquid& liquid);
    Alcohol(const Alcohol& other);

    // �������� ���������
    Alcohol& operator=(const Alcohol& other);

    // ������ �������
    float getAlco() const;
    Liquid getLiquid() const;
    void setAlco(float alco);
    void setLiquid(const Liquid& liquid);

    // ������
    void Init(float alco, const Liquid& liquid);
    void Display() const;
    void Read();
    string toString() const;

    // �������������� ���������
    Alcohol& operator++();    // ���������� ���������
    Alcohol operator++(int);  // ����������� ���������
    Alcohol& operator--();    // ���������� ���������
    Alcohol operator--(int);  // ����������� ���������

    // �������������� ��������� ������ �� �����
    friend ostream& operator<<(ostream& output, const Alcohol& alcohol);
    friend istream& operator>>(istream& input, Alcohol& alcohol);
};