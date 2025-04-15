[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# tp1

## ¿Que es el .gitignore?
El **.gitignore** es un archivo de texto especial que indicara a git que archivos o carpetas no deben ser rastreados ni incluidos en el control de versiones.
### ¿Porque es conveniente incluirlo?
Esto sera para que tengamos el repositorio mas "limpio", _evitando subir los archivos innecesarios o sensibles_, a veces pueden ser archivos creados por el sistema de compilacion, otras alguna carpeta en especifico que deseemos.
```
Ej de archivos que son archivos temporales: *.vscode/, *.swp, *.log*
Ej.2 de archivos binarios o de compilacion: *.exe, *.o, *.class*
```

### ¿Como crearlo o usarlo?
Se creara el  archivo **.gitignore** en el directorio raíz del repositorio para indicarle a **Git** qué archivos y directorios ignorar cuando se realiza una confirmación, antes de inciar el proyecto y de hacer el primer commit para evitar que estos archivos queden en el historial.
### ¿Como configurar el archivo .gitignore?
Simplemente con editar el archivo en un txt y agregar lo que vamos a ignorar:
_ejemplo:_
```
# ignora los archivos terminados en .a
*.a

# pero no lib.a, aun cuando había ignorado los archivos terminados en .a en la línea anterior
!lib.a

# ignora unicamente el archivo TODO de la raiz, no subdir/TODO
/TODO

# ignora todos los archivos del directorio build/
build/

# ignora doc/notes.txt, pero no este: doc/server/arch.txt
doc/*.txt

# ignora todos los archivos .txt del directorio doc/
doc/**/*.txt
```

## Preguntas del Ejercicio 2.3 apartado g

**¿Por qué los puntos 2 y 3 tienen el mismo resultado?**

Porque el puntero fue asignado con la dirección de la variable, es decir, `puntero = &numero;`. Entonces, cuando se imprime el contenido del puntero (`puntero`) y la dirección de la variable (`&numero`), ambos muestran la misma dirección de memoria.

**¿Qué se obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?**

En el punto 4 se obtiene la dirección de memoria del puntero (`&puntero`). No es igual a los puntos anteriores porque el puntero también es una variable que ocupa su propio espacio en memoria, distinto al de la variable a la que apunta.
