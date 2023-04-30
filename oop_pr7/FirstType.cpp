class LinearEquation 
{
    private:
        double a, b; // коэффициенты уравнения ax + b = 0

    public:
        LinearEquation(double _a, double _b) {
            a = _a;
            b = _b;
        }

        double solve() { // метод решения уравнения
            if (a == 0) {
                if (b == 0) {
                    return INFINITY; // уравнение имеет бесконечное множество решений
                }
                else {
                    return NAN; // уравнение не имеет решений
                }
            }
            else {
                return -b / a; // возвращаем решение уравнения
            }
        }
};