# Control de LED mediante Bluetooth – Arduino UNO y HC-05

## 1. Descripción del proyecto

Este proyecto consiste en desarrollar un sistema de control inalámbrico de dos LED mediante comunicación Bluetooth. Se utiliza una placa Arduino UNO y un módulo Bluetooth HC-05 para recibir comandos desde una terminal Bluetooth.

El sistema permite encender el LED verde, encender el LED rojo o apagar ambos LED mediante comandos enviados desde la terminal.

La implementación y las pruebas se realizaron utilizando el simulador Mokxi.

## 2. Objetivos

- Implementar comunicación serial mediante el módulo Bluetooth HC-05.
- Controlar dos salidas digitales de Arduino mediante comandos.
- Utilizar la biblioteca `SoftwareSerial` para establecer la comunicación.
- Validar el funcionamiento del sistema mediante diferentes pruebas.

## 3. Componentes utilizados

| Componente | Cantidad |
|---|---:|
| Arduino UNO | 1 |
| Módulo Bluetooth HC-05 | 1 |
| LED verde | 1 |
| LED rojo | 1 |
| Resistencias | 2 |
| Simulador Mokxi | 1 |

## 4. Conexiones

| Componente | Pin Arduino |
|---|---|
| HC-05 TXD | D2 (RX) |
| HC-05 RXD | D3 (TX) |
| LED verde | D7 |
| LED rojo | D8 |
| VCC HC-05 | 5V |
| GND HC-05 | GND |

Los LED se conectan mediante resistencias limitadoras de corriente.

## 5. Comandos Bluetooth

El sistema reconoce tres comandos principales:

| Comando | Función |
|---|---|
| `1` | Enciende el LED verde y apaga el rojo. |
| `2` | Enciende el LED rojo y apaga el verde. |
| `0` | Apaga ambos LED. |
| Otro carácter | Informa que el comando no es válido. |

## 6. Emparejamiento Bluetooth

Para establecer la conexión con el módulo HC-05 se utiliza el siguiente PIN:

- **PIN: `1234`**

Una vez establecida la conexión, se pueden enviar los comandos desde la terminal Bluetooth del simulador.

## 7. Tecnologías utilizadas

- Arduino UNO.
- Lenguaje de programación C++.
- Biblioteca `SoftwareSerial`.
- Módulo Bluetooth HC-05.
- Simulador Mokxi.

## 8. Estructura del repositorio

```text
Control-LED-Bluetooth-HC05/
│
├── main.ino
├── README.md
└── img/
    ├── comandoInvalido.png
    ├── conexion.png
    ├── desconectarBluetu.png
    ├── detenerConexion.png
    ├── principal.png
    ├── reconexionBluetu.png
    ├── rojoConexion.png
    └── verdeConexion.png
```

## 9. Evidencias de funcionamiento

Las siguientes evidencias documentan las pruebas realizadas:

| Imagen | Descripción |
|---|---|
| `principal.png` | Vista general del circuito. |
| `conexion.png` | Conexión Bluetooth establecida. |
| `verdeConexion.png` | Encendido del LED verde. |
| `rojoConexion.png` | Encendido del LED rojo. |
| `detenerConexion.png` | Apagado de ambos LED. |
| `comandoInvalido.png` | Recepción de un comando no válido. |
| `desconectarBluetu.png` | Desconexión Bluetooth. |
| `reconexionBluetu.png` | Reconexión Bluetooth. |

## 10. Autor

**Juan Camilo Velandia**

Programa: Ingeniería de Sistemas  
Institución: Politécnico Grancolombiano

## 11. Nota sobre las pruebas

Las pruebas descritas corresponden a la implementación realizada en el entorno de simulación Mokxi. Por lo tanto, los resultados documentan el comportamiento observado en el simulador y no deben interpretarse como mediciones de una conexión Bluetooth física.
