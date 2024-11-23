//
// Created by Alan Ruiz on 23/11/24.
//

#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include <string>
#include "Producto.h"
#include "Cliente.h"

class Tienda {
private:
  string nombre;
  vector<Producto> productos;
  vector<Cliente> clientes;
  double ventasTotales;

public:
  Tienda(const string &nombre);

  void agregarProducto(const Producto &producto);
  void registrarCliente(const Cliente &cliente);
  void realizarVenta(Cliente &cliente, Producto &producto, int cantidad);
  void mostrarInventario() const;
  string generarReporteVentas() const;
};

#endif // TIENDA_H
