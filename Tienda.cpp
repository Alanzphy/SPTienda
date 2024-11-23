//
// Created by Alan Ruiz on 23/11/24.
//

#include "Tienda.h"
#include <iostream>
using namespace std;

Tienda::Tienda(const string &nombre) : nombre(nombre), ventasTotales(0) {}

void Tienda::agregarProducto(const Producto &producto) {
  productos.push_back(producto);
}

void Tienda::registrarCliente(const Cliente &cliente) {
  clientes.push_back(cliente);
}

void Tienda::realizarVenta(Cliente& cliente, Producto& producto, int cantidad) {
  if (producto.verificarDisponibilidad(cantidad)) {
    double costoTotal = producto.getPrecio() * cantidad;
    if (cliente.getSaldoDisponible() >= costoTotal) {
      // Actualizar stock del producto
      producto.actualizarStock(-cantidad);
      cliente.comprarProducto(producto, cantidad);
      ventasTotales += costoTotal;

      // Actualizar el producto en la lista de la tienda
      for (auto& prod : productos) {
        if (prod.getId() == producto.getId()) {
          prod.actualizarStock(-cantidad);  // Actualiza el stock en la tienda
          break;
        }
      }
      cout << "Venta realizada con exito!" << endl;
    } else {
      cout << "Saldo insuficiente para realizar la compra." << endl;
    }
  } else {
    cout << "Stock insuficiente para realizar la compra." << endl;
  }
}


void Tienda::mostrarInventario() const {
  for (const auto& producto : productos) {
    cout << "ID: " << producto.getId()
              << ", Nombre: " << producto.getNombre()
              << ", Precio: " << producto.getPrecio()
              << ", Stock: " << producto.getCantidadStock()  // Mostrar cantidad
              << endl;
  }
}

string Tienda::generarReporteVentas() const {
  return "Ventas Totales: " + to_string(ventasTotales);
}
