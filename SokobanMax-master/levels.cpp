#include "levels.h"

Levels::Levels()
{

}
unsigned short int Levels::level00[30*30] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 2, 0, 0, 10, 0, 5, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 5, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 5, 0, 5, 3, 0, 0, 0, 22, 5, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 1, 0, 5, 0, 5, 5, 0, 5, 5, 0, 5, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 5, 0, 0, 5, 0, 0, 2, 3, 5, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
unsigned short int Levels::level01[13*15]={
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0,
        0, 0, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 0,
        0, 0, 5, 0, 2, 2, 5, 5, 5, 5, 5, 0,21, 5, 0,
        0, 0, 5, 0, 2, 0, 5, 5, 5, 5, 3, 2, 0, 5, 0,
        0, 0, 5, 5, 5, 0, 5, 5, 5, 5, 5, 5, 3, 5, 0,
        0, 0, 0, 5, 5, 0, 0,10, 5, 0, 0, 5, 3, 5, 0,
        0, 0, 0, 5, 0, 0, 0, 5, 5, 0, 0, 5, 3, 5, 0,
        0, 0, 0, 5, 0, 0, 0, 5, 0, 0, 0, 5, 5, 5, 0,
        0, 0, 0, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short int Levels::level02[13*15]={
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0,
        0, 0, 5, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0,
        0, 5, 5, 2, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0,
        0, 5, 0, 0, 0, 2, 0, 0, 2, 0,23, 3, 5, 0, 0,
        0, 5, 0,31, 3, 5, 0, 2, 0, 5, 5, 0, 5, 0, 0,
        0, 5, 5, 3, 3, 5, 0, 2, 0,10, 0, 0, 5, 0, 0,
        0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short int Levels::level03[13*15]={
        0, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        5, 5,21, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        5, 3, 3, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        5, 3, 0, 0,10, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        5, 3, 3, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        5, 3, 0, 0, 5, 0, 0, 0, 0, 0, 5, 5, 5,10, 5,
        5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5,
        0, 5, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 5,
        0, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 5, 2, 0, 5,
        0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 2, 0, 2, 0, 5,
        0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 1, 0, 2, 5,
        0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 0, 0, 5,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5};
unsigned short int Levels::level04[13*15]={
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 5, 0, 2, 0, 0,10, 5, 0, 0, 0, 0,
        0, 0, 5, 5, 5, 0, 2, 0, 5, 5, 5, 5, 0, 0, 0,
        0, 0, 5, 3, 3, 3, 0, 2, 0, 0,22, 5, 0, 0, 0,
        0, 0, 5, 3, 3, 3, 2, 5, 2, 0, 5, 5, 0, 0, 0,
        0, 0, 5, 5, 5, 5, 0, 5, 0, 2, 0, 5, 0, 0, 0,
        0, 0, 0, 0, 0, 5, 1, 0, 0, 0, 0, 5, 0, 0, 0,
        0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short int Levels::level05[13*15]={
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0,
        0, 0, 0, 5, 5, 5, 5,31, 0, 0, 0, 5, 0, 0, 0,
        0, 0, 0,23, 0, 0, 2, 2, 2, 0, 0, 5, 0, 0, 0,
        0, 0, 0, 5, 3, 5, 5, 3, 5, 5, 3, 5, 0, 0, 0,
        0, 0, 0, 5, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0,
        0, 0, 0, 5, 0, 0, 2, 3, 5, 0, 5, 5, 0, 0, 0,
        0, 0, 0, 5, 5, 5, 5, 0, 0, 0, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 5,10, 5, 5, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short int Levels::level06[13*15]={
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 5, 3, 0, 3, 3, 5, 0, 0, 0, 0, 0,
        0, 0, 0, 5, 5, 3, 0, 2, 3, 5, 0, 0, 0, 0, 0,
        0, 0, 0, 5,10, 0, 0, 0, 2, 5, 5, 0, 0, 0, 0,
        0, 0, 0, 5, 0, 2, 2, 0, 2,22, 5, 0, 0, 0, 0,
        0, 0, 0, 5, 1, 5, 0, 5, 5, 5, 5, 0, 0, 0, 0,
        0, 0, 0, 5, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned short int Levels::level07[13*15]={
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 5, 5, 5, 5, 5,
        5, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 3, 5,
        5, 0, 0, 2, 0, 2, 0, 5, 5, 5, 5, 3, 3, 3, 5,
        5, 0, 5, 0, 0, 2, 0, 5, 5, 0, 0, 0, 0, 3, 5,
        5, 0, 0, 2, 2, 2, 1, 0, 2, 4,10, 2, 0, 3, 5,
        5, 5, 5, 0, 0, 2, 0, 0, 5, 0, 5, 0, 0, 3, 5,
        0, 0, 5, 0, 0, 2, 5, 2, 5, 0,23, 3, 3, 3, 5,
        0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 3, 5,
        0, 0, 0, 5, 5, 5, 5, 5, 5,10, 5, 5, 5, 5, 5,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//unsigned short int Levels::levelxx[13*15]={
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
QVector<unsigned short int> Levels::basicLevel(unsigned short int nr)
{
    unsigned short int * numerOfLevel;
    switch (nr) {
    case 00 : {numerOfLevel = level00; break;}
    case 01 : {numerOfLevel = level01; break;}
    case 02 : {numerOfLevel = level02; break;}
    case 03 : {numerOfLevel = level03; break;}
    case 04 : {numerOfLevel = level04; break;}
    case 05 : {numerOfLevel = level05; break;}
    case 06 : {numerOfLevel = level06; break;}
    case 07 : {numerOfLevel = level07; break;}
    default : {numerOfLevel = level00; break;}
    }
    QVector<unsigned short int> tmp;
    for (unsigned int i=0; i<30*30 ; i++)
    {
        tmp.push_back(numerOfLevel[i]);
    }
    return tmp;
}
