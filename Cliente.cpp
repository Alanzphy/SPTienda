//
// Created by Alan Ruiz on 23/11/24.
//

#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(int id, const string &nombre, double saldo)
    : id(id), nombre(nombre), saldoDisponible(saldo) {}

void Cliente::comprarProducto(Producto &producto, int cantidad) {
  if (producto.verificarDisponibilidad(cantidad) && saldoDisponible >= producto.getPrecio() * cantidad) {
    producto.actualizarStock(-cantidad);
    saldoDisponible -= producto.getPrecio() * cantidad;
    productosComprados.push_back(producto);
  } else {
    cout << "Compra no realizada.\n";
  }
}

void Cliente::recargarSaldo(double cantidad) {
  saldoDisponible += cantidad;
}

vector<Producto> Cliente::verHistorialDeCompras() const {
  return productosComprados;
}

double Cliente::calcularGastoTotal() const {
  double total = 0;
  for (const auto &producto : productosComprados) {
    total += producto.getPrecio();
  }
  return total;
}

double Cliente::getSaldoDisponible() const {
  return saldoDisponible;
}
