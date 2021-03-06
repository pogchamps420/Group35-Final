#pragma once
#ifndef VARIABLES_H
#define VARIABLES_H 

#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

//variables buck and boost have in common: Pi, Po
//variables they differ on: Vout, Ii, Io, Vl, C, delta_vo, K, L


namespace bbc
{
    class Values
    {
    public:
        Values();
        double Vin;
        double Vout;
        double Vl;
        double K;
        double Ii;
        double Io;
        double Il;
        double Fs;
        double L;
        double delta_vo;
        double delta_i;
        double Rl;
        double Ro;
        double C;
        double Pi;
        double Po;
        double Ts;
        std::vector <int> return_coeffs;
    };

    class CONVERTERS
    {


    public:

        CONVERTERS();
        CONVERTERS(Values values);

        void AddValues(Values _values);
        Values ShowValues();
        double CalcPi();
        double CalcPo();
        double CalcRl();
        double CalcVlON();
        double CalcVlOFF();
        double CalcFs();
        std::vector<int> calculus();
        void ClearValues();
        void Add(char option, double value);
        double Get(char option);
        Values _values;
    private:
    };

    class BUCK : public CONVERTERS
    {
    public:
        BUCK();
        BUCK(Values values);
        //Values ShowValues();
        //void AddValues(Values _values);
        double CalcVout();
        double CalcK();
        double CalcIi();
        double CalcIo();
        double CalcL();
        double CalcC();
        //Values _values;
    };

    class BOOST : public CONVERTERS
    {
    public:
        BOOST();
        BOOST(Values values);
        //Values ShowValues();
        //void AddValues(Values _values);
        double CalcVout();
        double CalcK();
        double CalcIi();
        double CalcIo();
        double CalcL();
        double CalcC();
        //Values _values;
    };
}
#endif