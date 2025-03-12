/*
 * Modos de Abertura de Arquivos:
 * - "r": Abre um arquivo só para leitura. O arquivo deve existir.
 * - "w": Cria um arquivo para escrita. Se já existe, sobrescreve.
 * - "a": Adiciona dados no final de um arquivo. Cria um novo se não existir.
 * - "r+": Abre para leitura e escrita. O arquivo deve existir.
 * - "w+": Cria para leitura e escrita. Sobrescreve se o arquivo existir.
 * - "a+": Abre para leitura e escrita, adicionando no final. Cria um novo se não existir.
 *
 * Funções:
 * - fgets: Lê uma linha de texto de um arquivo.
 * - fprintf: Escreve texto formatado em um arquivo.
 * - fread: Lê blocos de dados de um arquivo.
 * - fwrite: Escreve blocos de dados em um arquivo.
 */


 /*Exemplo:fprintf*/

 FILE *arquivo = fopen("saida.txt", "w");
fprintf(arquivo, "Escrevendo em um arquivo!\n");
fclose(arquivo);


/*Exemplo:freadf*/

int buffer[10];
FILE *arquivo = fopen("binario.dat", "rb");
fread(buffer, sizeof(int), 10, arquivo);
fclose(arquivo);


/*Exemplo:fgets*/

char linha[100];
FILE *arquivo = fopen("dados.txt", "r");
fgets(linha, sizeof(linha), arquivo);
fclose(arquivo);


/*Exemplo:fwrite*/

int dados[5] = {1, 2, 3, 4, 5};
FILE *arquivo = fopen("binario.dat", "wb");
fwrite(dados, sizeof(int), 5, arquivo);
fclose(arquivo);



