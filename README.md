# AlgoritmosGrafos
### Olá a todos 👋, Este repositório contém os quatro algoritmos solicitados para a matéria "Teoria dos Grafos" ministrada pelo professor Rian no PLE.<br>
* [Djikstra](#djikstra)
* [Floyd-Warshall](floyd-warshall)
* [Ford-Fulkerson](ford-fulkerson)
* [Bellman-Ford](bellman-ford)

## Djikstra
O algoritmo recebe como entrada o número de vértices (v) e o número de arestas (e), seguido da descrição das e arestas cada uma contendo 3 entradas: vértice de saída, vértice de entrada e peso.
Ele para quando recebe o número de vértices v = 0.

#### Exemplo utilizado no input:<br>
![imagem de um grafo](https://user-images.githubusercontent.com/34218434/104390785-41b92f80-551d-11eb-9d6d-4ae579402963.png)

#### Saída: 
Distance from 0 to 0 = 0<br>
Distance from 0 to 1 = 10<br>
Distance from 0 to 2 = 15<br>
Distance from 0 to 3 = 20<br>
Distance from 0 to 4 = 20<br>
Distance from 0 to 5 = 5<br>
Distance from 0 to 6 = 15<br>
Distance from 0 to 7 = 1000000000<br>
Distance from 0 to 8 = 1000000000<br>
Distance from 0 to 9 = 1000000000<br>

Percebe-se que quando não existe um caminho entre dois vértices, foi colocado o peso 1000000000.

## Floyd-Warshall
O algoritmo recebe como entrada o número de vértices (v) e o número de arestas (e), seguido da descrição das e arestas cada uma contendo 3 entradas: vértice de saída, vértice de entrada e peso.

#### Exemplo utilizado no input:<br>
![image](https://user-images.githubusercontent.com/34218434/104391169-171ba680-551e-11eb-8b00-d33b818d54aa.png)

#### Saída: 
Minimum Distance from 0 to 0 = 0<br>
Minimum Distance from 0 to 1 = 1<br>
Minimum Distance from 0 to 2 = -3<br>
Minimum Distance from 0 to 3 = 2<br>
Minimum Distance from 0 to 4 = -4<br>
Minimum Distance from 1 to 0 = 3<br>
Minimum Distance from 1 to 1 = 0<br>
Minimum Distance from 1 to 2 = -4<br>
Minimum Distance from 1 to 3 = 1<br>
Minimum Distance from 1 to 4 = -1<br>
Minimum Distance from 2 to 0 = 7<br>
Minimum Distance from 2 to 1 = 4<br>
Minimum Distance from 2 to 2 = 0<br>
Minimum Distance from 2 to 3 = 5<br>
Minimum Distance from 2 to 4 = 3<br>
Minimum Distance from 3 to 0 = 2<br>
Minimum Distance from 3 to 1 = -1<br>
Minimum Distance from 3 to 2 = -5<br>
Minimum Distance from 3 to 3 = 0<br>
Minimum Distance from 3 to 4 = -2<br>
Minimum Distance from 4 to 0 = 8<br>
Minimum Distance from 4 to 1 = 5<br>
Minimum Distance from 4 to 2 = 1<br>
Minimum Distance from 4 to 3 = 6<br>
Minimum Distance from 4 to 4 = 0<br>

## Ford-Fulkerson
O algoritmo recebe como entrada o número de vértices (v), o número de arestas (e), o vértice de saída e o vértice de chegada. Seguido da descrição das e arestas cada uma contendo 3 entradas: vértice de saída, vértice de entrada e peso.

#### Exemplo utilizado no input:<br>
![image](https://user-images.githubusercontent.com/34218434/104391382-8a251d00-551e-11eb-8b74-474fb29be5b8.png)

#### Saída: 
Max flow from 0 to 5 = 23<br>

## Bellman-Ford
O algoritmo recebe como entrada o número de vértices (v), o número de arestas (e), o vértice de saída. Seguido da descrição das e arestas cada uma contendo 3 entradas: vértice de saída, vértice de entrada e peso.

#### Exemplo utilizado no input:<br>
![image](https://user-images.githubusercontent.com/34218434/104392034-00764f00-5520-11eb-8d66-36a09cf78fea.png)

#### Saída: 
Distance from 0 to 0 = 0<br>
Distance from 0 to 1 = -1<br>
Distance from 0 to 2 = 2<br>
Distance from 0 to 3 = -2<br>
Distance from 0 to 4 = 1<br>
