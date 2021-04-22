/*!
    @file
    @brief Заголовочный файл класса Complex
*/
#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/*!
    @brief Класс комплексного числа
*/
class Complex
{
    /*!
        @brief Действительаня составляющая
    */
    double Re;

    /*!
        @brief Мнимая составляющая
    */
    double Im;

    /*!
        @brief Список членов класса
        @param aRe Действительная составляющая
        @param aIm Мнимая составляющая
    */
    public:
        Complex(double aRe = 0, double aIm = 0);
        Complex(const Complex &);
        ~ Complex();

        /*!
            @brief Установление мнимой и действительной состовляющих
        */
        void Set(double aRe, double aIm = 0);
        operator double();

        /*!
            @brief Модуль комплексного числа
        */
        double abs();

        /*!
            @brief Перегрузка оператора ввода >>
        */
        friend istream & operator >> (istream &, Complex &);

        /*!
            @brief Перегрузка оператора вывода <<
        */
        friend ostream & operator << (ostream &, Complex &);
        Complex operator + (const Complex &);
        Complex operator - (const Complex &);
        Complex operator + (const double &);

        /*!
            @brief  Операция сложения
        */
        friend Complex operator + (const double &, const Complex &);
        Complex operator - (const double &);

        /*!
            @brief  Операция вычитания
        */
        friend Complex operator - (const double &, const Complex &);
        Complex operator * (const Complex &);
        Complex operator * (const double&);

        /*!
            @brief  Операция умножения
        */
        friend Complex operator * (const double &, const Complex &);
        Complex operator / (const double &);
        Complex & operator += (const Complex &);
        Complex & operator -= (const Complex &);
        Complex & operator *= (const Complex &);
        Complex & operator += (const double &);
        Complex & operator -= (const double &);
        Complex & operator *= (const double &);
        Complex & operator /= (const double &);
        Complex & operator = (const Complex &);
        Complex & operator = (const double &);
};
#endif
