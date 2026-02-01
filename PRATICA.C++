#include <iostream>
#include <cmath>

using namespace std;

class ponto{

    double x, y;

    public:
    
    ponto(double X, double Y){ x = X; y = Y;}
    
    //getters
    double getX() {return x;}
    double getY() {return y;}
    double distanciaParaPonto(ponto p){ return sqrt(pow(p.x - x, 2)+pow(p.y - y,2));}
};

class reta{

    double a, b, c;
    
    public:
    
    reta(ponto p1, ponto p2){ 

        a = p1.getY() - p2.getY();
        b = p2.getX() - p1.getX();
        c = p1.getX() * p2.getY() - p1.getY() * p2.getX();
    }

    //getters
    double getA(){return a;}
    double getB(){return b;}
    double getC(){return c;}
    double distanciaParaPonto(ponto p){return fabs(a * p.getX() + b * p.getY() + c ) / sqrt(a*a + b*b);}
};

int main(){

    int x, y;

    cout << "Ponto A > "; 
    cin >> x >> y;
    ponto A(x,y);
    
    cout << "Ponto B > ";
    cin >> x >> y;
    ponto B(x,y); 

    cout << "Ponto C > ";
    cin >> x >> y;
    ponto C(x,y);

    cout << "Distancia AB " << A.distanciaParaPonto(B) << endl;

    reta A1(A,B);

    cout << "R: " << A1.getA() << "X ";
    if(A1.getB() > 0){
        cout << "+ " << A1.getB() << "Y "; 
     }else cout << A1.getB() << "Y ";   
    if(A1.getC() > 0){
       cout << "+" << A1.getC() << " = 0"; 
    }else cout << A1.getC() << " = 0" << endl;

    cout << "Distancia RC = " << A1.distanciaParaPonto(C);

    return 0;
}