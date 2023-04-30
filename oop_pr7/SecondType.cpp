class QuadraticEquation 
{
    private:
        double a, b, c; // ax^2 + bx + c = 0

    public:
        QuadraticEquation(double _a, double _b, double _c) {
            a = _a;
            b = _b;
            c = _c;
        }

        void solve(double& x1, double& x2) { 
            double discriminant = b * b - 4 * a * c;
            if (discriminant < 0) {
                x1 = x2 = NAN; 
            }
            else if (discriminant == 0) {
                x1 = x2 = -b / (2 * a); 
            }
            else {
                x1 = (-b + sqrt(discriminant)) / (2 * a);
                x2 = (-b - sqrt(discriminant)) / (2 * a); 
            }
        }
};