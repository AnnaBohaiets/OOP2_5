#include <iostream>
#include "Alcohol.h"
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // ��������� ��'���� ����� Alcohol
    Alcohol a1; // ��������� �� ��������� ������������ �� �������������
    Alcohol a2(5.5, Liquid("Water", 1.0)); // ��������� �� ��������� ������������ �����������
    Alcohol a3 = a2; // ��������� ��ﳿ ��'���� a2

    // ��������� ����� �� �����
    cout << "��'��� a1 ��������� �������������� ������� �����������:" << endl;
    cout << a1 << endl;
    cout << "��'��� a2 ��������� �������������� ����������� � �����������:" << endl;
    cout << a2 << endl;
    cout << "��'��� a3 ��������� �� ���� a2:" << endl;
    cout << a3 << endl;

    // ��������� �� ��������� ��'����
    ++a2; // ���������� ���������
    --a3; // ���������� ���������
    a1++; // ����������� ���������
    a3--; // ����������� ���������

    // ��������� ����� �� ����� ���� ���
    cout << "ϳ��� ���������� a2 (����������):" << endl;
    cout << a2 << endl;
    cout << "ϳ��� ���������� a3 (����������):" << endl;
    cout << a3 << endl;
    cout << "ϳ��� ���������� a1 (�����������):" << endl;
    cout << a1 << endl;
    cout << "ϳ��� ���������� a3 (�����������):" << endl;
    cout << a3 << endl;

    // ������������ ����� ������� ��������� ������ ��'����
    cout << "��������� ������� ��'���� Alcohol:" << endl;
    Alcohol array[3]; // ��������� ������ ��'���� �� ��������� ������������ �� �������������
    cout << array[1];
    // ��������� ������ ����� � ����� #pragma pack(1) � ��� �����
    cout << "����� ����� Alcohol ��� pragma pack(1): " << sizeof(Alcohol) << endl;
#pragma pack(1)
    cout << "����� ����� Alcohol � pragma pack(1): " << sizeof(Alcohol) << endl;
#pragma pack()
    return 0;
}