//
// Created by Alan Ruiz on 23/11/24.
//

#include "Producto.h"

Producto::Producto(int id, const string &nombre, const string &descripcion, double precio, int cantidadStock, const string &categoria)
    : id(id), nombre(nombre), descripcion(descripcion), precio(precio), cantidadStock(cantidadStock), categoria(categoria) {}

void Producto::actualizarStock(int cantidad) {
  cantidadStock += cantidad;
}

bool Producto::verificarDisponibilidad(int cantidad) const {
  return cantidad <= cantidadStock;
}

string Producto::detallesProducto() const {
  return "ID: " + to_string(id) + ", Nombre: " + nombre + ", Precio: " + to_string(precio);
}

// Getters
int Producto::getId() const { return id; }
string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }
int Producto::getCantidadStock() const { return cantidadStock; }
