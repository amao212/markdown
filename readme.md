# Uso del lenguaje c y c++ 
C programción estructurada
C++ programació orientada a objetos
## C UNIX (Programación estructurada)
-Tipos de datos 

int,
float,
char,
bool,
...

-Control de flujo (define le conportamiento de los datos)

if-else,
for(n),
while(<>!=),
Do (<> != ==),
beak,
switch

-Lenguaje de máquina

1001010010001

-Lenguaje natural

Idioma en el que hablamos

Ejemplo: 

int a=10;   
char nombre=";

while(a < 10)  
{           
    a =a +1;      
}

" ANSI C" es un instituto para indicar la utilización de las cosas

-Colección de cabezadores (headers)
Nos ayuda para usar librerias
- Import < librerias>
- Funciones( )< return>
procedimientos( )

# Algoritmia

1. Problema
2. Solución    
- Algoritmos(pseudocódigo)
- Diagrama de flujo
- Código (debugging)
- Traza (trace) - prueba de escritorio


1. Problema : ¿Determinar el area de un rectángulo?
2. Solución
- AreaRect = largo x ancho (metros)
- Algoritmo (pseudocódigo)



## Workshop : main

### Comandos para compilar

    1  ls
    2  g++ src/main.c -o output/main.exe
    3  ./output/main.exe     
    4  ./output/main.exe     
    5  history

> Crear un directorio
- resource

> Agragar extenciones
- Draw.io Integration
- Drawio Preview

### Algoritmia
- Problema 
- Solución
   - Pseudocodigo
   - Diagrama de flujo (DFD, Dreaw.io)

> Diagrama de flujo

 ![Maximo2numeros](/resource/Maximo2numeros.png) 

> Codigo 

```c
void maxnumero()
{
     int a=0, b=0;
    printf("Ingrese 1er valor:");
    scanf("%d" , &a);
    printf("Ingrese 1er valor:");
    scanf("%d" , &b);

    
    if(a>b)
    {
        printf("El mayor es: %d",a);
    }
    else
    {
        printf("El mayor es: %d",b);
    }
}
```


30/05/2022
# Introducción general

Programación ensamblador

C++ es la evolución de C

![paracompilar](/resource/2.png)

int -> la variable de la lista son enteros

float -> punto flotante(números que puede tener una parte fraccionaria)

> Datos básicos
- char    -> caracter -un solo breve
- shor    -> entero corto
- long     ->entero largo 
- double   ->punto flotante de doble precición

![2](/resource/3.png)

# Declaración de variables e inicialización

# Estructura de control
- Procedimiento

        void NombreProcedimiento()  {...}

- Procedimiento con parametros

        void NombreProcedimiento(para1, para2, ..) {...}

        para1 = <TipoDato> NombreParametro

- Función

        <TipoDato> NombreProcedimiento() 
        {...   return <TipoDato>}

- Función con parametros

        <TipoDato> NombreProcedimiento(para1, para2 ...) 
        {...   return <TipoDato> }

> Constantes simbólicas

![4](/resource/4.png)

# Flujo de control y diagrama de flujo

![5](/resource/5.png)


# Arreglo de caracteres

1.- Arrays-Bufer-Vector- 

getchar-obtener un caracter, capturar
EOF- final de archivo, genera un desbordamiento
si me dice si entonces salta el caaxter almacenado entonces paso al siguiente nicel y si esta vapturado paso al siguiente, si uno de los tres esta mal hasta ahí, i es menor que cinco en la ssegunda parte c es menor que , hat que tener cuidado con en el orden, tener cuidado en los pararentesis por que puede generar error, tener en cuenta la precedencia de condición y tambien la precedencia de los símbolos 
Las funciones pueden tener un nombre y parametro 

# TIPOS, OPERADORES Y EXPRESIONES

en las constantes se suguiere que esten en las librerias  

# Funciones

getline = ayuda a obtener los archivos de todos los caracteres
 - char línea[300]
   getline(línea, 300);


stindex = nos dice en la posición en la que se encuentra

atoi
atof
- sirve la convercion de streams a números

f=i; // conversión implícita = cast ó casting
// f = 123.00000

i=(int)f; // comversión explicita = cast ó casting

# Archivos de texto

- Apertura y cierrre de fichros

Cuando alguien invoca un archivo ya sea para leer o escribir

archivo binario: nos ayuda a guardar los tipos de datosen forma binaria.

b= binario
r= lectura
w= escritura
a=añade datos al final del mismo
