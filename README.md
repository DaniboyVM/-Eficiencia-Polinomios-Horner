# -Eficiencia-Polinomios-Horner

En este repositorio compararemos el metodo de evaluacion de polinomios de Horner con el metodo estándar

Daniel Alberto flores Preciado

Este programa fue compilado por el pompilador predeterminado de Code::Blocks 20.03 (lanzado en marzo de 2020)  GNU GCC (MinGW-w64)

-Método Estándar (Evaluación Directa): Consiste en calcular cada término del polinomio por separado (usando potencias de x ) y luego sumarlos.
Su eficiencia es O(n^2) operaciones (por las potencias).

-Método de Horner (Evaluación Anidada): Reestructura el polinomio para minimizar operaciones, convirtiéndolo en una multiplicación y suma anidadas.
Su eficiencia es O(n) operaciones (óptimo para computación).

<img width="351" alt="image" src="https://github.com/user-attachments/assets/4fc5885c-7a09-4450-b81c-c91fc3a8eb3e" />





Como podemos observar el metodo de Honer es mas eficiente, ya que su tiempo(nanosegundos) promedio de evalucacion es menor al metodo estandar, esto se debe por su complejidad algoritmica, el algoritmo estandar es un for anidado dentro de otro for y el metodo de horner es solo un for.
Los tiempos promedios del metodo de horner se asemeja a una funcion lineal y esto lo podemos refutar por su complejidad algoritmica, a cambio del metodo estandar que va creciendo exponencialmente, esto igual lo podemos refutar con su complejidad algirtmica

conclusiones: aveces podemos encontrar una solucion algoritmica que satisfaga nuestro problema pero a lo mejor no es tan viable algoritmicamente y a la larga, es por eso que es importante pensar y buscar como podermos simplificar o reescribir el mismo problema para encontrar una solucion mas simple y asi reducir el tiempo de un algirtmo 



