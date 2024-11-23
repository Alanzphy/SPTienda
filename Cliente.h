//
// Created by Alan Ruiz on 23/11/24.
//

#ifndef CLIENTE_H
#define CLIENTE_H

#include <vector>
#include <string>
#include "Producto.h"
using namespace std;

class Cliente {
private:
  int id;
  string nombre;
  double saldoDisponible;
  vector<Producto> productosComprados;

public:
  Cliente(int id, const string &nombre, double saldo);

  void comprarProducto(Producto &producto, int cantidad);
  void recargarSaldo(double cantidad);
  vector<Producto> verHistorialDeCompras() const;
  double calcularGastoTotal() const;
  double getSaldoDisponible() const;
};

#endif //CLIENTE_H
