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
![grafo-exemplo](http://url/to/img.png)

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

## Ford-Fulkerson

## Bellman-Ford
