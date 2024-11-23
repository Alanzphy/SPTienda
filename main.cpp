#include <iostream>
#include "Tienda.h"
using namespace std;

int main() {
// Crear la tienda
    Tienda tienda("Tech Store");

    // Crear y agregar productos
    Producto prod1(1, "Laptop", "Laptop de gama alta", 1500, 5, "Electrónica");
    Producto prod2(2, "Smartphone", "Teléfono inteligente de última generación", 800, 10, "Electrónica");
    Producto prod3(3, "Teclado mecánico", "Teclado RGB para gaming", 120, 15, "Periféricos");
    Producto prod4(4, "Mouse inalámbrico", "Mouse ergonómico con batería recargable", 60, 20, "Periféricos");

    tienda.agregarProducto(prod1);
    tienda.agregarProducto(prod2);
    tienda.agregarProducto(prod3);
    tienda.agregarProducto(prod4);

    // Crear y registrar clientes
    Cliente cliente1(1, "Juan", 2000);
    Cliente cliente2(2, "Maria", 1000);
    Cliente cliente3(3, "Carlos", 300);

    tienda.registrarCliente(cliente1);
    tienda.registrarCliente(cliente2);
    tienda.registrarCliente(cliente3);

    // Mostrar inventario inicial
cout << "\n--- Inventario inicial ---" << endl;
    tienda.mostrarInventario();

    // Realizar ventas
cout << "\nJuan intenta comprar 1 Laptop:" << endl;
    tienda.realizarVenta(cliente1, prod1, 1);
    tienda.mostrarInventario();

cout << "\nMaria intenta comprar 2 Smartphones:" << endl;
    tienda.realizarVenta(cliente2, prod2, 2);
    tienda.mostrarInventario();

cout << "\nCarlos intenta comprar 3 Mouse inalámbricos:" << endl;
    tienda.realizarVenta(cliente3, prod4, 3);
    tienda.mostrarInventario();

    // Mostrar reporte de ventas totales
cout << "\n" << tienda.generarReporteVentas() << endl;

    // Recargar saldo a Carlos
    cliente3.recargarSaldo(500);
cout << "\nCarlos recarga $500. Su nuevo saldo es: $" << cliente3.getSaldoDisponible() << endl;

    // Venta adicional
cout << "\nCarlos intenta comprar 2 Teclados mecánicos:" << endl;
    tienda.realizarVenta(cliente3, prod3, 2);
    tienda.mostrarInventario();

    // Mostrar reporte de ventas finales
cout << "\n" << tienda.generarReporteVentas() << endl;


    return 0;
}
