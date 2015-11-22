#include <iostream>

using namespace std;

class Mobike
{
   // friend std::ostream& operator<<(std::ostream&, const Bikes&);

private:
    int Codigo;
    //string Marca;
    //float Preco;
    int Disponibilidade;


public:
    Mobike(int c, int d);
    Mobike();
    void SetQtd( int c, int d );
    int getCodigo();
    int getDisponibilidade();
};
