//
//Datos simples: un solo valor a la vez
//
//Datos estructurados: varios valores a la vez
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//Estructuras de datos:. colecci�n de datos que se caracterizan por una
//organizaci�n y las operaciones que se definen en ellas.
//
//TDA (Tipo de datos abstractos): Dise�o de una estructura, basado en la abstracci�n.
//
//ABSTRACCI�N; considerar de forma independiente elementos unidos, para solo contemplar los indispensables.
//
//ABSTRACCI�N DE DATOS: representar caracter�sticas b�sicas de una estructura de acuerdo a una serie de reglas.
//
//Colecciones de variables homog�neas o heterog�neas.
//
//Funciones principales: introducir, procesar, mantener, recuperar
//
//SIRVEN: para organizar informaci�n de manera eficiente en el dise�o m�s completos para solucionar un problema.
//
//USOS: manejo din�mico de memoria, recuperar informaci�n, almacenar grandes conjuntos de dato.s
//
//Forma m�s f�cil: struct
//
//Clasificaci�n:
//- Est�ticas: arreglos
//- Din�micas: -lineales: pilas, colas
//             - no lineales: �rboles, grafos
//
//Arreglos: colecci�n ordenada de datos que se emplean para almacenar valores de un mismo tipo.
//
//Pilas: estructura en la que se accede v�a LIFO (Last In First Out)
//
//Colas: estructura en la que se accede v�a FIFO (First In First Out), y por alguno de los extremos.
//
//�rboles: estructura que representa datos con una relaci�n jer�rquica (predecesor y sucesores)
//
//Grafos: estructura formada por un conjunto de puntos y l�neas, que unen a estos.------------------
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//    1. TDA y Estructuras de Datos
//2. Arreglos
//3. Registros
//    4. Recursi�n
//5. Pilas
//6. Colas
//7. Listas
//8. �rboles
//9. Grafos
//
//ESPECIFICACI�N L�GICA DE UN TDA
//1. Tipo de datos
//2. Organizaci�n
//3. Operaciones
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//INSERTAR:
//1. Revisar capacidad
//2. Localizar posicion
//3. Desplazar a la derecha
//4. Insertar en posici�n
//5. Actualizar capacidad
//
//BORRAR:
//1. Localizar posicion
//2. En caso falso: informar/terminar
//3. Desplazar a la izquierda. Posici�n siguiente y hasta ocupados-1
//4. Limpiar posici�n
//5. Actualizar capacidad
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//ARREGLO: dato estructurado que se emplea para almacenar valores de un mismo tipo en una misma variable.
//Finito, homog�neo y ordenado. tipo nombre [tam]
//Localidades contiguas de memoria.
//1. Lectura
//2. Asignaci�n
//3. Modificaci�n
//4. Inserci�n
//5. Borrado
//6. Busqueda
//7. Ordenaci�n
//
//ARREGLO BIDIMENSIONAL: dato estructurado para tener varios datos con el mismo nombre.
//2 �NDICES
//
//Valores organizados en forma de matriz, renglones y columnas. Se
//
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//
//REGISTROS: dato estructurado formado por un conjunto limitado de elementos, sin importar el tipo. En
//Elemento = campo.
//
//Nombre, NO posicion



// Apuntadores: variables que almacenan direcciones de memoria.
// No almacena directamente el valor, sino la direcci�n de memoria donde se encuentra el valor.

// Aritm�tica de apuntadores: operaciones de suma y resta de constantes realizables sobre los apuntadores.
// Al sumar 1, se obtiene la direcci�n de la siguiente localidad de memoria.
// Sumas o restas constantes, no apuntadores

// VENTAJAS DE APUNTADORES:
// - Aritm�tica de apuntadores facilita l�gica de varios algoritmos.
// - Asignaci�n din�mica de memoria.

// Asignaci�n est�tica: durante compilaci�n
// Asignaci�n din�mica: durante ejecuci�n

// ------------------------------------------
// PILAS
// Dato estructurado lineal, homog�neo y finito. Tiene 3 atributos principales: m�nimo, m�ximo y tope. Se pueden realizar dos operaciones: insertar y extraer.
// Ambas operaciones se realizan por el mismo extremo (tope).

// PUSH: insertar un elemento en la pila
// a). Verificar que existe capacidad disponible en la pila. Si Tope es igual a M�ximo, la pila est� llena.
// b). Incrementar el valor de �Tope�.
// c). Insertar el nuevo valor en la posici�n se�alada por �Tope�.

// POP: extraer un elemento de la pila
// a). Verificar que hay valores en la pila. Si Tope es menor que M�nimo, la pila est� vac�a.
// b). Extraer el valor de la posici�n se�alada por �Tope�.
// c). Decrementar el valor de �Tope�.

// PEEK: consultar el valor del elemento en el tope de la pila
// a). Verificar que hay valores en la pila. Si Tope es menor que M�nimo, la pila est� vac�a.
// b). Mostrar el valor de la posici�n se�alada por �Tope�.

// ------------------------------------------
// PILAS
// Estructuras de datos de entrada ordenadas
// Acceso a datos: LIFO (Last In First Out)

// Insertar y retirar por el mismo extremo.
// �ltimo en entrar, primero en salir.

// Para insertar elementos en una pila se deben seguir los siguientes
// pasos:
// 1. Se debe de crear el espacio en memoria para almacenar un nodo
// 2. Cargar el valor dentro de un nodo
// 3. Cargar el puntero pila dentro del nodo
// 4. Asignar el nuevo nodo a la pila

// - Navegador Web � Almacenamiento de sitios previamente visitados
// - Editor de texto � Los cambios efectuados son almacenados en una pila


// ------------------------------------------
// INFIJA A POSTFIJA
// - Leer de uno en uno los caracteres de la cadena infija
// - Si el car�cter es una variable o constante se concatena a cadena posfija
// - Si el car�cter es un operador
//     - si es de mayor precedencia que el del tope se inserta a la pila,
//     - si es de menor o igual, se extraen todos los de mayor precedencia en la pila concaten�ndolos en cadena posfija y luego se inserta en la pila
// - Si es Par�ntesis izquierdo, se inserta en la pila (se considera de precedencia 0)
// - Si es Par�ntesis derecho, se extraen repetidamente todos los de la pila, concaten�ndolos a la cadena posfija, hasta encontrar un par�ntesis izquierdo
// - Al terminar cadena infija, se vac�a la pila, insertando a posfija


// ------------------------------------------
// INFIJA A PREFIJA

// COLA
// ESTRUCTURA DE DATOS COLA CON SUS PAR�METROS

// Es una estructura de datos lineal, finita y homog�nea. Caracterizada por
// 4 par�metros en sus forma est�tica: M�nimo, M�ximo, Principio y final.
// Y 2 par�metros en su forma din�mica: Principio y final (ya que no tenemos l�mites
// de tama�o).

// Las dos operaciones que podemos realizar son insertar y extraer.
// Realizamos las inserciones por el extremo final y las extracciones por el inicio.
// Esquema FIFO (First In First Out)


// CONSISTE Y FORMA DE OPERAR DE COLA CIRCULAR

// Las inserciones se realizan por la cola hasta llenarla, y conforme se van extrayendo
// elementos se liberan lugares que se ocupan para poder seguir insertando, es decir, al
// llenarse, los elementos que se van insertando ocupan las primeras localidades que ya
// est�n libres.

// Sabemos que se llena si el inicio es igual a m�nimo y el final es igual al m�ximo o
// si el final m�s uno es igual al inicio.

/*
LISTA
Lineal, fundamental, homog�neo, finito. Cada elemento se llama nodo. Insertar, extraer, recorrer, buscar y ordenar.
No hay restricciones para insertar ni extraer.}
*/

/*
LISTAS ENLAZADAS
Son listas no contirguas y se usan para informaci�n que cambia de manera frecuente.
Conjunto de nodos en el que cada nodo tiene su campo de informaci�n y la ubicaci�n del siguiente nodo de la lista (enlace o liga).
CABECERA
Final->nullptr
No se desplaza en inserci�n y extracci�n, solo cambiamos los enlaces
*/

/*
LISTA CIRCULAR
Lista enlazada donde el �ltimo nodo apunta al primero.
Cualquier nodo se puede acceder desde cualquier otro. Riesgo de ciclos infinitos.
*/

/*
LISTA DOBLEMENTE ENLAZADA
Se puede recorrer en ambos sentidos. SIGUIENTE, ANTERIOR, INFORMACI�N
FINAL
*/

/*
EST�TICA
Insertar:
1. Revisar que tenga capacidad
2. Seleccionar en que posici�n debe insertarse
3. Desplazar a partir de esa posici�n y hasta el final una posici�n a
la derecha, empezando por el final
4. insertar el nuevo nodo
Extraer:
1. Revisar que haya nodos en la lista
2. Seleccionar el nodo que se desea borrar
3. A partir del nodo seleccionado desplazarlos todos a la izquierda.
4. Colocar un nulo en el �ltimo nodo
*/

/*
LIGADA
Insertar:
1. Localizar la posici�n en que se
insertar�
2. Crear un nodo nuevo
3. Llenar el campo de informaci�n del
nodo nuevo
4. Colocar en el enlace del nodo
nuevo el enlace del nodo �anterior�
5. En el enlace del nodo anterior
colocar la direcci�n del nuevo nodo
INSERTAR INICIO
1. Crear un NODO nuevo
2. Llenar el campo de informaci�n del nodo nuevo
3. Llenar el campo de enlace del nodo nuevo con
la direcci�n de �cabecera�
4. Igualar �cabecera� a la direcci�n del nuevo nodo
INSERCION Final
1. Crear un NODO nuevo
2. Llenar el campo de informaci�n del nodo nuevo
3. Apuntar a NULO el campo de enlace del nuevo nodo
4. Apuntar a nuevo nodo el campo de enlace de FINAL
Extraer:
1. Localizar el nodo a extraer, conservando el nodo anterior
2. Tomar e informar la informaci�n a extraer
3. Apuntar el enlace de nodo anterior al nodo que sigue al
extra�do
4. Eliminar el nodo extra�do
EXTRAER FINAL
1. Localizar el nodo final y su anterior
2. Tomar e informar la informaci�n del nodo a
extraer
3. Apuntar a NULO el enlace del nodo anterior
4. Apuntar la variable final a nodo anterior
5. Eliminar el nodo extra�do
EXTRAER INICIO
1. Localizar nodo se�alado por cabecera
2. Tomar e informar la informaci�n del nodo a
extraer
3. Apuntar cabecera al siguiente de cabecera
4. Eliminar el nodo extra�do
*/


/*
* DOBLE enlace
Insertar:
1. Localizar posici�n para insertar
2. Generar nuevo nodo �C�
3. Incluir informaci�n en el nodo �C�
4. Enlace siguiente de �C� apunta a �B�
5. Enlace anterior de �C� apunta a �A�
6. Enlace siguiente de �A� apunta a �C�
7. Enlace anterior de �B� apunta a �C�
INSERTAR INICIO
1. Generar nuevo nodo �A�
2. Incluir informaci�n en el nodo �A�
3. Enlace siguiente de �A� apunta a �B�
4. Enlace anterior de �A� apunta a �nulo�
5. Enlace anterior de �B� apunta a �A�
6. Cabecera apunta a �A�
INSERCION Final
1. Generar nuevo nodo �A�
2. Incluir informaci�n en el nodo �A�
3. Enlace siguiente de �A� apunta a �nulo�
4. Enlace anterior de �A� apunta a �B�
5. Enlace siguiente de �B� apunta a �A�
6. �ltimo apunta a �A�
Extraer:
1. Localizar nodo a borrar �B�
2. Enlace siguiente de �A� apunta a �C�
3. Enlace anterior de �C� apunta a �A�
4. Se pone disponible �B�
EXTRAER FINAL
1. �ltimo apunta a �A�
2. Enlace siguiente de �A� apunta a �nulo�
3. Se pone disponible �B�
EXTRAER INICIO
1. Cabecera apunta a �B�
2. Enlace anterior de �B� apunta a �nulo�
3. Se pone disponible �A�
*/


// ARBOLES
// Estructura no lineal, no fundamental, homogenea y finita.

// Conjunto finito de uno o m�s nodos, con 2 caracter�sticas principales:
// 1) Existe un nodo llamado ra�z
// 2) Cada nodo se divide en "m", m>=0 conjuntos disconjuntos denominados
// An...Am, cada uno de los cuales es a su vez un �rbol que toma por nombre sub�rbol.

// Otra de sus caracter�sticas primarias es la recursividad.


// TERMINOLOGIA:
// NODO: A cada elemento de la estructura se le llama nodo. Cada nodo tiene
// UN ascendiente llamado �padre� y cero o m�s descendientes
// llamados �hijos�. A los hijos de un mismo padre se les suele llamar
// �hermanos�.

// RAIZ: �nico nodo especial debido a que no tiene padre.

// HOJA: nodo que no tiene hijos.

// INTERIOR: Todos los nodos que no son la ra�z, ni son hojas.

// CAMINO: secuencia de nodos por los que hay que pasar para llegar de un
// nodo a otro.

// RAMA: camino que lleva hasta una hoja.

// PROFUNDIDAD O ALTURA: n�mero de nodos de la rama m�s larga del �rbol.

// PESO: n�mero de hojas del �rbol.

// GRADO DEL NODO: n�mero de hijos que tiene el nodo.

// GRADO DEL ARBOL: grado del nodo de mayor grado

// NIVEL: nivel de su padre +1, ra�z empieza en 0

// ARBOL BINARIO: puede tener hasta 2 hijos cada nodo. Orden 2

// BALANCEADO: diferencia de altura entre los sub�rboles es m�ximo 1.

// COMPLETO: cada uno de sus nodos tiene 2 hijos exactos.

// SIMILAR: si tienen misma estructura.

// EQUIVALENTE: si son similares y tiene la misma informacion.

// OPERACIONES:
// RECORRER: visitar todos los nodos del �rbol sin repetir ninguno (in-orden, pre-orden y post-orden)
// in-orden: izquierdo en in-orden. Raiz, derecho in-orden
// pre-orden: raiz, izquierdo, derecho
// post-orden: izquiero, derecho, ra�z


// ARBOL BINARIO DE Busqueda

// los nodos del izquierdo son menores que la raiz, y los derechos mayores
// recorrer in-orden




// GRAFOS
// Conjunto finito de nodos y arcos o v�rtices y aristas.
// Dato estructurado no lineal, no fundamental, homog�neo y finito.
// Recorrer, buscar nodo, buscar arco, insertar nodo, insertar arco, borrar arco, borrar nodo

// NODO: elemnto fundamental de informaci�n.
// ARCO: liga que une dos nodos del grafo. Puede tener peso (almacena informaci�n)
// NODOS ADYACENTES: si un arco los une
// CAMINO: secuencia de nodos en donde todos son ADYACENTES
// CAMINO SIMPLE: camino donde todos los nodos son diferentes, primero y �ltimo (pueden ser el mismo)
// GRAFO NO DIRIGIDO: los arcos son bidireccionales
// GRAFO DIRIGIDO: digrafo, los arcos tienen direcci�n asociada. Primer elementoes origen y segundo destino.
// GRAFO PONDERADO: cada arco tiene un peso asociado. Distancias
// GRAFO CONECTADO: un grafo no dirigido es conectado cuando para cualquier par de nodos existe un camino que los una.
// GRADO DE UN NODO: cantidad de arcos de ese nodo.
// GRADO DEL GRAFO: m�ximo grado de nodos.

// REPRESENTACIONES:
// - Matriz de adyacencias:
// arreglo bidimensional del tama�o de la cantidad de nodos. Cada casilla se llena con 1 o 0 dependiendo si existe o no un arco que conecte esos nodos.
// en los no dirigidos, la matriz es cuadrada. En los ponderados: en lugar de 1 o 0 se pone el peso asociado a cada arco

// - Lista de adyacencias:
// Representaci�n din�mica, que define una lista enlazada de nodos y en cada uno de esos se enlaza con otra lista con los nodos adyacentes.

// - Lista de arcos


// RECORRIDOS: visitar todos los nodos del grafo sin repetir ninguno. Profunidad y anchura
// PROFUNDIDAD: se hace hacia delante siempre que se pueda, buscando el nodo m�s profundo.
// Recursiva o iterativa con pila.

// ANCHURA: se visitan y marcan los nodos adyacentes  y se continua recursivamente a lo ancho.
// Iterativo con fila/cola

///////////////////////////////////////////////////
// Define con precisi�n qu� es una �Estructura de Datos�.
// Permiten organizar la informaci�n de manera eficiente, y definitiva dise�ar la soluci�n correcta para un determinado problema.
// A trav�s de una colecci�n de valores relacionados entre ellos y funciones y operaciones que se pueden aplicar sobre los datos.

// Explica a qu� se refiere la aritm�tica de apuntadores.
// Apuntador: variable que almacena la direcci�n de memoria de una variable (no su valor).
// Aritm�tica de apuntadores: operaciones que les hacemos a los apuntadores. 
// A trav�s de la suma y resta de constantes podemos ir cambiando de localidad. Al sumar 1, se obtiene la siguiente localidad de memoria. 
// Es importante tener en cuenta que siempre es suma y resta de constante, nunca apuntadores.

// Menciona en que consiste la Implementaci�n Est�tica y en que consiste la Implementaci�n Din�mica de una Pila
// En la implementaci�n est�tica: utilizamos arreglos, en los que insertamos/extraemos por solo uno de los 2 extremos. Los elementos est�n en localidades contiguas por lo que es m�s sencillo acceder a cada uno de ellos. Est�n limitados a un tama�o fijo.
// En la implementaci�n din�mica: siguiendo con la conceptualizaci�n principal de la pila, ahora utilizamos listas ligadas, usamos apuntadores para conectar/vincular cada una de las direcciones de memoria con la anterior (si lo vemos desde arriba hacia abajo/izquierda a derecha) o siguiente (si lo conceptualizamos de (derecha a izquierda). Podemos utilizar una estructura nodo para completar y facilitar el acceso de cada uno de los elementos. No tenemos l�mite de tama�o.

// Menciona y explica el esquema de operaci�n de una Cola.
// Las colas son una estructura de datos lineal, homog�nea y finita que tiene el esquema FIFO, que significa First In, First Out, es decir, el primer elemento que ingresa es el �ltimo que sale. Realizamos inserci�n por el final y extraemos por el inicio. EJEMPLO: cola de banco, cola de impresi�n (en el orden en el que se llega, es el orden que se atiende).

// Explica a qu� se le llama Cola Ligada, sus caracter�sticas y como opera.
// Cuando no es de la forma consecutiva, es decir, no se cuentan con localidades de memoria consecutiva, usamos las colas ligadas o din�micas. Su caracter�stica es que empleamos la estructura nodo donde cada elemento de la cola guarda su dato respectivo y adem�s guarda la direcci�n donde se localiza el siguiente elemento (a trav�s de un puntero), a excepci�n del �ltimo, que como es el final, el dato de direcci�n es nulo. 

// Describe ampliamente la estructura de datos Lista y menciona las operaciones asociadas a la misma.
// Una lista es una estructura de datos l�nea, fundamental, homog�nea y finita. Donde cada uno de los elementos se llama Nodo. Y las operaciones que podemos hacer son: 1) Insertar elemento (ya sea al inicio, final o intermedio), 2) Extraer elemento (de igual manera en cualquier posici�n), recorrer elementos y buscar alg�n elemento en la lista. En esta estructura de datos, no tenemos restricciones (posici�n) para agregar nuevos datos y eliminar los existentes. 
// Podemos implementar listas enlazadas, es decir que no est�n ubicadas en localidades contiguas,  para informaci�n que cambia de manera frecuente. Para las listas enlazadas tenemos dos campos en cada nodo, 1) informaci�n, 2) ubicaci�n del nodo siguiente.


// Define el algoritmo para realizar una de las operaciones asociadas a las listas, la que t� elijas, indicando tambi�n a qu� tipo de lista aplica dicho algoritmo.
// Para las listas enlazadas: 
// INSERTAR INTERMEDIO:  (asumiendo que el nodo a insertar no va en el inicio ni el final, existen ya nodos e insertaremos entre esos) 
// 1) Ubicar la posici�n donde debemos insertar.
// 2) Crear el nuevo nodo.
// 3) Completar la informaci�n del nuevo nodo.
// 4) Conectar el nodo anterior al nuevo nodo a trav�s del campo siguiente del nodo anterior.
// 5) Conectar el nodo siguiente al nuevo nodo a trav�s del campo siguiente del nodo nuevo.

// EXTRAER INTERMEDIO:  (asumiendo que el nodo a buscar no es ni el inicio ni el final, existen ya nodos) 
// 1) Localizar el nodo a eliminar.
// 2) Guardar informaci�n a extraer.
// 3) Actualizar los enlaces: el enlace del nodo previo, ahora apuntar� al nodo siguiente del que se extrajo (analog�a de un puente donde saltamos el medio y usamos los extremos como postes). 
// 4) Eliminar el nodo extra�do. 