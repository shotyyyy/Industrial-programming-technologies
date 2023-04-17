#pragma once
#include <iostream>

using namespace std;

class cone
{
    protected:
        double x, y, z, radius, height;

    public:
        // Конструктор по умолчанию
        cone();

        // Конструктор с центорм в начале координат
        cone(double radius1, double height1);

        // Конструктор с произвольным центром
        cone(double x1, double y1, double z1, double radius1, double height1);

        // Ввод конуса
        void Set(double x1, double y1, double z1, double radius1, double height1);

        // Вывод конуса
        void Print();

        // Площадь поверхности конуса
        virtual double Surface_Area() const;

        // Объем конуса
        virtual double Volume() const;

        // Получение значений
        double GetX();
        double GetY();
        double GetZ();
        double GetRadius();
        double GetH();
        
        // Перегрузка операторов >> и <<
        friend std::ostream& operator<<(std::ostream& stream, cone &obj);
	    friend std::istream& operator>>(std::istream& is, cone& obj);
};



class truncatedCone : public cone
{
    protected:
        double radius2;
        double vol;
    
    public:
        // Конструктор по умолчанию
        truncatedCone();

        // Конструктор с центром в начале координат
        truncatedCone(double radius1, double _radius2, double height1);

        // Конструктор с произвольным центром
        truncatedCone(double x1, double y1, double z1, double radius1, double _radius2, double height1);

        // Ввод конуса
        void Set(double x1, double y1, double z1, double radius1, double _radius2, double height1);

        // Вывод конуса
        void Print();

        // Ввод объема
        void setVolume(double vol1);

        // Вывод объема
        double getVolume();

        // Площадь поверхности усеченного конуса
        double Surface_Area() const;

        // Объем усеченного конуса
        double Volume() const;

        // Перегрузка операторов >> и <<
        friend std::ostream &operator<<(std::ostream &stream, truncatedCone odj);
        friend std::istream &operator>>(std::istream &stream, truncatedCone obj);

        // Сравнение площадей поверхности конусов
        void Comprassion(truncatedCone cone1, truncatedCone cone2);

};