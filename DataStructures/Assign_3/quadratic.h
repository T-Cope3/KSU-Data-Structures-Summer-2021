//Troy Cope
//3305 Summer Section W01
//Prof. Yong
//6/15/21

#ifndef QUADRATIC_H
#define QUADRATIC_H

class quadratic
{
public:
    quadratic();
    ~quadratic();
    
    quadratic(double a_input, double b_input, double c_input);
    int numberOfRealZeroes();
    void evaluateRealZeroes();
    void reassignQuad(double a_input, double b_input, double c_input);
    const void queryValues();
    const double evaluateExpression(double x);
    
private:
    double a, b, c;
};

#endif // QUADRATIC_H
