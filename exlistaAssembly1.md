## Versão 1
Apresentando as instruções no formato de como estão armazenadas em memória.

| End | Instrução 0:19 | Instrução 20:39 |
| - | - | - |
| 0x000 | load m(x) 0x1AA | sub m(x) 0x1AB |
| 0x001 | jump +m(x,0:19) 0x003 | load m(x) 0x1AB |
| 0x002 | stor m(x) 0x1AC | jump m(x,0:19) 0x004 |
| 0x003 | load m(x) 0x1AA | stor m(x) 0x1AC |

## Versão 2
Apresentando sequencialmente com **comentários**.  
Admitir formato de comentários definidos como **ponto e vírgula `;`**

| End | Instrução | Comentários |
| - | - | - |
| 0x000 | load m(x) 0x1AA | ; Carrega o conteúdo do endereço em ACC |
| 0x000 | sub m(x) 0x1AB | ; Realiza a operação ACC <- ACC - conteúdo de 0x1AB |
| 0x001 | jump +m(x,0:19) 0x003 | ; Se ACC >= 0 remete a execução ao endereço 0x003 |
| 0x001 | load m(x) 0x1AB | ; Carrega o conteúdo do endereço em ACC |
| 0x002 | stor m(x) 0x1AC | ; Carrega o conteúdo do ACC no endereço |
| 0x002 | jump m(x,0:19) 0x004 | ; Desvia para o endereço |
| 0x003 | load m(x) 0x1AA | ; Carrega o conteúdo do endereço em ACC |
| 0x003 | stor m(x) 0x1AC | ; Carrega o conteúdo do ACC no endereço |

## Versão 3
Apresentando sequencialmente com comentários e **rótulos**.  
Admitir formato de rótulos definidos como nome seguido de dois pontos `<nome>:`

| End | Instrução | Comentários |
| - | - | - |
| 0x000 | load m(x) 0x1AA | ; Carrega o conteúdo do endereço em ACC |
| 0x000 | sub m(x) 0x1AB | ; Realiza a operação ACC <- ACC - conteúdo de 0x1AB |
| 0x001 | jump +m(x,0:19) rotulo1 | ; Se ACC >= 0 remete a execução ao endereço definido por rotulo1 |
| 0x001 | load m(x) 0x1AB | ; Carrega o conteúdo do endereço em ACC |
| 0x002 | stor m(x) 0x1AC | ; Carrega o conteúdo do ACC no endereço |
| 0x002 | jump m(x,0:19) rotulo2 | ; Desvia para o endereço definido por rotulo2 |
| 0x003 | rotulo1: load m(x) 0x1AA | ; Carrega o conteúdo do endereço em ACC |
| 0x003 | stor m(x) 0x1AC | ; Carrega o conteúdo do ACC no endereço |
| 0x004 | rotulo2: --- | --- |
