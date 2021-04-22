/*!
    @file
    @brief Header file of Complex.
*/
#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/*!
    @brief Class of a complex number
*/
class Complex
{
    /*!
        @brief The real component
    */
    double Re;

    /*!
        @brief Imaginary component
    */
    double Im;

    /*!
        @brief List of class members.
    */
    public:
        Complex(double aRe = 0, double aIm = 0);
        Complex(const Complex &);
        ~ Complex();

        void Set(double aRe, double aIm = 0);
        operator double();

        double abs();

        friend istream & operator >> (istream &, Complex &);

        friend ostream & operator << (ostream &, Complex &);
        Complex operator + (const Complex &);
        Complex operator - (const Complex &);
        Complex operator + (const double &);

        friend Complex operator + (const double &, const Complex &);
        Complex operator - (const double &);

        friend Complex operator - (const double &, const Complex &);
        Complex operator * (const Complex &);
        Complex operator * (const double&);

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
