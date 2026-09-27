# **🏥 Clínica Pediatrica**

Programa desarrollado en C que permite administrar registros de pacientes de una clínica pediátrica mediante operaciones CRUD.

<img src="https://clinicapromed.com/assets/images/pediatria/banner-pediatria.jpeg" width="500">

### 👾 Tecnologías Usadas:

- *Lenguaje: **C***
- *Librerías: **stdio.h y string.h***

### 📍 Características Principales

- struct pediatria: Define la estructura utilizada para almacenar los datos de cada paciente.
- Arreglo paciente[5]: Permite almacenar información de hasta 5 pacientes.
- Dar de alta: Registra un nuevo paciente ingresando su nombre, tutor, edad, peso y estatura.
- Consultar: Permite consultar los datos de un paciente registrado.
- Modificar: Permite actualizar la información de un paciente.
- Eliminar: Elimina los datos de un paciente y restablece sus valores.
- Menú interactivo: Permite seleccionar la operación que se desea realizar.
- strcpy(): Se utiliza para modificar los datos de tipo cadena al eliminar un paciente.
- do...while y switch: Controlan el menú principal y las diferentes opciones del programa.
- Validaciones: Verifica que el paciente seleccionado exista dentro de los registros disponibles.

### Instalación

**Para ejecutar el proyecto✅:**

1. Descarga o clona este repositorio.
2. Abre el archivo .c en un compilador de C, como Dev-C++.
3. Compila el programa.
4. Ejecuta el programa desde el compilador.

### Uso

**Al iniciar el programa se mostrará un menú con las siguientes opciones:**

=== MENU ===
1. Dar de alta
2. Consultar
3. Modificar
4. Eliminar
5. Salir
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-   
- Para registrar un paciente, ingresa 1 
- Para consultar un paciente, ingresa 2
- Para actualizar sus datos, ingresa 3 
- Para eliminar un registro, ingresa 4 
- Para finalizar el programa, ingresa 5
