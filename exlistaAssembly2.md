## Versão 1
Apresentando as instruções no formato de como estão armazenadas em memória.

| End | Instrução 0:19 | Instrução 20:39 |
| - | - | - |
| 0x000 | load m(x) 0x100 | add m(x) 0x101 |
| 0x001 | add m(x) 0x102 | add m(x) 0x103 |
| 0x002 | add m(x) 0x104 | stor m(x) 0x105 |

## Versão 2
Apresentando sequencialmente com **comentários**.  
Admitir formato de comentários definidos como **ponto e vírgula `;`**

| End | Instrução | Comentários |
| - | - | - |
| 0x000 | load m(x) 0x100 | ; Carrega o conteúdo do endereço em ACC |
| 0x000 | add m(x) 0x101 | ; Realiza a operação ACC <- ACC + conteúdo de 0x101 |
| 0x001 | add m(x) 0x102 | ; Realiza a operação ACC <- ACC + conteúdo de 0x102 |
| 0x001 | add m(x) 0x103 | ; Realiza a operação ACC <- ACC + conteúdo de 0x103 |
| 0x002 | add m(x) 0x104 | ; Realiza a operação ACC <- ACC + conteúdo de 0x104 |
| 0x002 | stor m(x) 0x105 | ; Carrega o conteúdo do ACC no endereço |

## Versão 3
Apresentando sequencialmente com comentários e **rótulos** - **Generalização da solução com *loop*. Por exemplo, somar 10 dados**.
Admitir formato de rótulos definidos como **nome seguido de dois pontos `<nome>:`**

Admitir também instruções de **modo de endereçamento imediato** adicionais às instruções já vistas na máquina de von Neumman, definidas por...  

| **Código de operação** | **Representação simbólica** | **Descrição** |
| ---------------------- | --------------------------- | ------------- |
| 1000 0001 | LOADI | Transfere o **conteúdo do operando** para o acumulador |

A solução do problema pode ser generalizada mais facilmente para, por exemplo, 10 posições de memória.

| End | Instrução | Comentários |
| - | - | - |
| 0x000 | loadI 0x001 | ; Carrega 0x001 para o acumulador |
| 0x000 | stor m(x) 0x10B | ; Carrega o conteúdo do acumulador (valor 1) para o endereço 0x10B |
| 0x001 | loadI 0x101 | ; Carrega 0x101 para o acumulador |
| 0x001 | stor m(x) 0x10C | ; Carrega o conteúdo do acumulador para o endereço 0x10C (armazena o endereço do dado a somar) |
| 0x002 | loadI 0x109 | ; Carrega 0x109 para o acumulador |
| 0x002 | stor m(x) 0x10D | ; Carrega o conteúdo do acumulador para o endereço 0x10D (armazena o último endereço dos 10 dados) |
| 0x003 | load m(x) 0x100  | ; Carrega o conteúdo da memória no acumulador |
| 0x003 | stor m(x) 0x10A  | ; Carrega o conteúdo do acumulador na memória |
| 0x004 | loop: add m(x) 0x101  | ; Realiza a operação ACC <- ACC + conteúdo da memória |
| 0x004 | stor m(x) 0x10A  | ; Carrega o conteúdo do acumulador no endereço de memória - 0x10A armazena a soma |
| 0x005 | load m(x) 0x10C  | ; Carrega o conteúdo do endereço atual do dado no acumulador |
| 0x005 | add m(x) 0x10B  | ; Realiza a operação ACC <- ACC + conteúdo da memória - **incrementa o acumulador** |
| 0x006 | stor m(x) 0x10C  | ; Carrega o conteúdo do acumulador no endereço de memória - **atualiza o endereço do próximo dado** |
| 0x006 | stor m(x,8:19) 0x004  | ; Altera o operando da instrução do endereço 0x004 para o endereço atual do dado |
| 0x007 | load m(x) 0x10D  | ; Carrega o conteúdo da memória no acumulador |
| 0x007 | sub m(x) 0x10C  | ; Realiza a operação ACC <- ACC - conteúdo da memória |
| 0x008 | jump +m(x,0;19) loop | ; Desvia para o endereço especificado |
