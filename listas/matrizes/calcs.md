

# Q05:
Para calcular o determinante de uma matriz 3x3, o método mais rápido e utilizado é a Regra de Sarrus. Este método baseia-se em duplicar as duas primeiras colunas da matriz para realizar multiplicações cruzadas em diagonal.
Passo a Passo da Regra de Sarrus
• Duplique as colunas: Escreva as duas primeiras colunas à direita da matriz original.
• Diagonais principais: Multiplique os elementos das três diagonais que descem da esquerda para a direita.
• Some os resultados: Adicione os três valores obtidos nessas diagonais principais.
• Diagonais secundárias: Multiplique os elementos das três diagonais que sobem da esquerda para a direita.
• Subtraia os valores: Subtraia a soma das diagonais secundárias do resultado das principais.
Exemplo Prático
```latex
Dada a matriz \(A\):
\(A=\left(\begin{matrix}1&2&3\\ 0&1&4\\ 5&6&0\end{matrix}\right)\)
```
1. Expandir a matriz:
\(\begin{matrix}1&2&3&|{}&1&2\\ 0&1&4&|{}&0&1\\ 5&6&0&|{}&5&6\end{matrix}\)
2. Calcular as diagonais principais (descendo):
• Diag 1: \(1 \times 1 \times 0 = 0\)
• Diag 2: \(2 \times 4 \times 5 = 40\)
• Diag 3: \(3 \times 0 \times 6 = 0\)
• Soma Principal = \(0 + 40 + 0 = 40\)
3. Calcular as diagonais secundárias (subindo):
• Diag 1: \(5 \times 1 \times 3 = 15\)
• Diag 2: \(6 \times 4 \times 1 = 24\)
• Diag 3: \(0 \times 0 \times 2 = 0\)
• Soma Secundária = \(15 + 24 + 0 = 39\)
4. Resultado Final:
\(\text{Det}(A)=40-39=1\)

Para calcular o determinante de uma matriz \(3\times3\) pelo Teorema de Laplace, você deve escolher uma linha ou uma coluna e somar os produtos de seus elementos pelos seus respectivos cofatores.
A dica de ouro é escolher a linha ou coluna que tiver mais zeros, pois isso reduz drasticamente a quantidade de contas.
📑 Passo a Passo do Cálculo
Seja a matriz \(A\) de ordem 3:
\(A=\left(\begin{matrix}a_{11}&a_{12}&a_{13}\\ a_{21}&a_{22}&a_{23}\\ a_{31}&a_{32}&a_{33}\end{matrix}\right)\)
Escolhendo a 1ª linha como referência, a fórmula de Laplace fica assim:
\(\det (A)=a_{11}\cdot C_{11}+a_{12}\cdot C_{12}+a_{13}\cdot C_{13}\)
Onde \(C_{ij}\) é o cofator de cada elemento, calculado por:
\(C_{ij}=(-1)^{i+j}\cdot \det (M_{ij})\)
• \(( -1 )^{i+j}\): Define o sinal do termo (se a soma da linha + coluna for par, fica \(+\); se for ímpar, fica \(-\)).
• \(\det(M_{ij})\): É o determinante da matriz menor (\(2\times2\)) que sobra quando você esconde a linha \(i\) e a coluna \(j\) do elemento atual.
🧮 Exemplo Prático
Vamos calcular o determinante da matriz abaixo utilizando a 1ª linha:
\(A=\left(\begin{matrix}\mathbf{2}&\mathbf{1}&\mathbf{3}\\ 4&0&1\\ -1&5&2\end{matrix}\right)\)
Passo 1: Elemento \(a_{11} = 2\)
• Sinal: \((-1)^{1+1} = (-1)^2 = +1\)
• Matriz Restante: Eliminando a 1ª linha e a 1ª coluna, sobra: \(\left(\begin{matrix}0&1\\ 5&2\end{matrix}\right)\)
• Cofator \(C_{11}\): \(+1 \cdot [(0 \cdot 2) - (1 \cdot 5)] = 1 \cdot (-5) = -5\)
• Termo 1: \(a_{11} \cdot C_{11} = 2 \cdot (-5) = \mathbf{-10}\)
Passo 2: Elemento \(a_{12} = 1\)
• Sinal: \((-1)^{1+2} = (-1)^3 = -1\)
• Matriz Restante: Eliminando a 1ª linha e a 2ª coluna, sobra: \(\left(\begin{matrix}4&1\\ -1&2\end{matrix}\right)\)
• Cofator \(C_{12}\): \(-1 \cdot [(4 \cdot 2) - (1 \cdot (-1))] = -1 \cdot [8 + 1] = -9\)
• Termo 2: \(a_{12} \cdot C_{12} = 1 \cdot (-9) = \mathbf{-9}\)
Passo 3: Elemento \(a_{13} = 3\)
• Sinal: \((-1)^{1+3} = (-1)^4 = +1\)
• Matriz Restante: Eliminando a 1ª linha e a 3ª coluna, sobra: \(\left(\begin{matrix}4&0\\ -1&5\end{matrix}\right)\)
• Cofator \(C_{13}\): \(+1 \cdot [(4 \cdot 5) - (0 \cdot (-1))] = 1 \cdot [20 - 0] = 20\)
• Termo 3: \(a_{13} \cdot C_{13} = 3 \cdot 20 = \mathbf{60}\)
Passo 4: Somar os resultados
\(\det (A)=(-10)+(-9)+60\)
\(\det (A)=-19+60=\mathbf{41}\)
💡 Regra Prática dos Sinais
Para não precisar calcular \((-1)^{i+j}\) toda vez, decore o "tabuleiro de xadrez" de sinais fixos para matrizes \(3\times3\):
\(\left(\begin{matrix}+&-&+\\ -&+&-\\ +&-&+\end{matrix}\right)\)
Você só precisa multiplicar o sinal da posição pelo valor do elemento e pelo determinante \(2\times2\) restante.
Se você tiver um exercício específico que esteja tentando resolver, compartilhe os números da sua matriz comigo para fazermos o passo a passo juntos! Quer que eu mostre como resolver esse mesmo exemplo usando a 2ª linha (que tem um zero) para você ver como fica mais rápido? 