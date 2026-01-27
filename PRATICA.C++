#include <iostream>
#include <cmath>

using namespace std;

class ponto{

    int x, y;

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
    
    reta(ponto p1, ponto p2){}

    //getters
    double getA(){return a;}
    double getB(){return b;}
    double getC(){return c;}
    double distanciaParaPonto(ponto p){}
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




    return 0;
}