# -Eficiencia-Polinomios-Horner

Este repositorio compara dos métodos para evaluar polinomios: el método estándar (evaluación directa) y el método de Horner (evaluación anidada). 
El análisis se centra en su eficiencia computacional y complejidad algorítmica.

El programa fue compilado utilizando el compilador predeterminado de Code::Blocks 20.03 (lanzado en marzo de 2020), GNU GCC (MinGW-w64).

Métodos de Evaluación:
-Método Estándar (Evaluación Directa): Este método consiste en calcular cada término del polinomio por separado mediante potencias de x y posteriormente sumar todos los       términos. Su implementación requiere :
    Cálculo individual de cada término aₙxⁿ
    Suma acumulativa de los resultados
    Complejidad computacional: O(n²) operaciones debido al cálculo de potencias.

-Método de Horner (Evaluación Anidada):Este método optimizado reestructura el polinomio como una serie de multiplicaciones y sumas anidadas:
  P(x) = a₀ + x(a₁ + x(a₂ + ... + x(aₙ₋₁ + x·aₙ)...)
  Complejidad computacional: O(n) operaciones, siendo óptimo para computación.

<img width="451" alt="image" src="https://github.com/user-attachments/assets/adaa01a1-243f-4c7a-9903-0b1f9f123ac4" />

Análisis Comparativo
Los resultados experimentales demuestran que el método de Horner presenta menor tiempo promedio de evaluación (en nanosegundos),mayor eficiencia computacional, comportamiento temporal lineal acorde con su complejidad O(n). En contraste, el método estándar muestra: tiempos de ejecución significativamente mayores, crecimiento exponencial del tiempo de ejecución, comportamiento acorde con su complejidad O(n²).
La diferencia fundamental radica en la implementación: mientras el método estándar requiere bucles anidados, el método de Horner se implementa con un único bucle.

Conclusiones
Este estudio evidencia la importancia de seleccionar algoritmos óptimos para resolver problemas computacionales. Aunque ambos métodos proporcionan soluciones válidas para la evaluación de polinomios, el método de Horner demuestra ser significativamente más eficiente.
El análisis resalta un principio fundamental en diseño de algoritmos: con frecuencia es posible reformular problemas aparentemente complejos mediante aproximaciones matemáticas que permitan implementaciones computacionalmente más eficientes. La búsqueda de estas optimizaciones debe ser parte esencial del proceso de desarrollo de software, particularmente en aplicaciones que requieran procesamiento numérico intensivo.
