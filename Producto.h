//
// Created by Alan Ruiz on 23/11/24.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto {
private:
  int id;
  string nombre;
  string descripcion;
  double precio;
  int cantidadStock;
  string categoria;

public:
  Producto(int id, const string &nombre, const string &descripcion, double precio, int cantidadStock, const string &categoria);

  void actualizarStock(int cantidad);
  bool verificarDisponibilidad(int cantidad) const;
  string detallesProducto() const;

  // Getters
  int getId() const;
  string getNombre() const;
  double getPrecio() const;
  int getCantidadStock() const;
};

#endif // PRODUCTO_H

