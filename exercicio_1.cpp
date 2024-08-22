#include <cmath>
#include <iostream>

const double PI = 3.14;

class Piramide {
private:
  double areaBase;
  double areaLateral;
  double altura;

public:
  Piramide(double ab, double al, double h)
      : areaBase(ab), areaLateral(al), altura(h) {}

  double getAreaBase() const { return areaBase; }
  void setAreaBase(double ab) { areaBase = ab; }

  double getAreaLateral() const { return areaLateral; }
  void setAreaLateral(double al) { areaLateral = al; }

  double getAltura() const { return altura; }
  void setAltura(double h) { altura = h; }

  double calcularArea() const { return areaBase + areaLateral; }
  double calcularVolume() const { return (1.0 / 3.0) * areaBase * altura; }
};

class Cubo {
private:
  double aresta;

public:
  Cubo(double a) : aresta(a) {}

  double getAresta() const { return aresta; }
  void setAresta(double a) { aresta = a; }

  double calcularArea() const { return 6 * pow(aresta, 2); }
  double calcularVolume() const { return pow(aresta, 3); }
};

class Paralelepipedo {
private:
  double aresta1;
  double aresta2;
  double aresta3;

public:
  Paralelepipedo(double a1, double a2, double a3)
      : aresta1(a1), aresta2(a2), aresta3(a3) {}

  double getAresta1() const { return aresta1; }
  void setAresta1(double a1) { aresta1 = a1; }

  double getAresta2() const { return aresta2; }
  void setAresta2(double a2) { aresta2 = a2; }

  double getAresta3() const { return aresta3; }
  void setAresta3(double a3) { aresta3 = a3; }

  double calcularArea() const {
    return 2 * (aresta1 * aresta2 + aresta1 * aresta3 + aresta2 * aresta3);
  }
  double calcularVolume() const { return aresta1 * aresta2 * aresta3; }
};

class Esfera {
private:
  double raio;

public:
  Esfera(double r) : raio(r) {}

  double getRaio() const { return raio; }
  void setRaio(double r) { raio = r; }

  double calcularArea() const { return 4 * PI * pow(raio, 2); }
  double calcularVolume() const { return (4.0 / 3.0) * PI * pow(raio, 3); }
};

int main() {

  Piramide piramide(30, 40, 10);
  Cubo cubo(5);
  Paralelepipedo paralelepipedo(2, 3, 4);
  Esfera esfera(7);

  std::cout << "PIRAMIDE" << std::endl;
  std::cout << "Área: " << piramide.calcularArea() << std::endl;
  std::cout << "Volume: " << piramide.calcularVolume() << std::endl;

  std::cout << "\nCUBO" << std::endl;
  std::cout << "Área: " << cubo.calcularArea() << std::endl;
  std::cout << "Volume: " << cubo.calcularVolume() << std::endl;

  std::cout << "\nPARALELEPIPEDO" << std::endl;
  std::cout << "Área: " << paralelepipedo.calcularArea() << std::endl;
  std::cout << "Volume: " << paralelepipedo.calcularVolume() << std::endl;

  std::cout << "\nESFERA" << std::endl;
  std::cout << "Área: " << esfera.calcularArea() << std::endl;
  std::cout << "Volume: " << esfera.calcularVolume() << std::endl;

  return 0;
}
