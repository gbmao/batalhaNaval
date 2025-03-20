#include <stdio.h>






int main(){

    char linha[11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    // criando o tabuleiro
    int tabuleiro [10] [10] = {
        
    };
    
    printf ("***TABULEIRO BATALHA NAVAL***\n");
    printf(" "); // espaço para alinhar o identificador


    // identificador das colunas
    for (int j = 0; j < 11; j++) 
    {
        printf("%c ", linha[j]);
    } 
    printf("\n"); 
    
    //imprimindo as linhas
    for (int i = 0; i < 10; i++)
    {  
        
       // o numero 10 estava comendo 1 espaço a mais
       // adicionei um operador ternario para melhor vizualização do tabuleiro 
       // utilizando apenas um espaço no numero 10
      i == 9 ? printf("%d ", coluna[i]) : printf("%d  ", coluna[i]); 
        
        
        
        
        //imprimindo as colunas nas linhas
        for (int a = 0; a < 10; a++)
        {   

            printf("%d ", tabuleiro[i][a]);
        
           

        }

        // vai rodar ao final de cada coluna para iniciar na proxima linha
        printf("\n"); 
    }







    // o usuario colocara o valor com scanf
    int x;



     
    // iniciando a rodada de posicionamento dos navios
    /*printf("\n");
    printf("Digite a linha Onde deseja colocar o contratorpedeiro vertical?\n");
    scanf("%d", &x);
    x = x - 1; */

    printf ("***TABULEIRO BATALHA NAVAL***\n");
    printf(" "); // espaço para alinhar o identificador


    // identificador das colunas
    for (int j = 0; j < 11; j++) 
    {
        printf("%c ", linha[j]);
    } 
    printf("\n"); 
    
    //imprimindo as linhas
    for (int i = 0; i < 10; i++)
    {  
        
       // o numero 10 estava comendo 1 espaço a mais
       // adicionei um operador ternario para melhor vizualização do tabuleiro 
       // utilizando apenas um espaço no numero 10
      i == 9 ? printf("%d ", coluna[i]) : printf("%d  ", coluna[i]); 
        
        
        
        
        //imprimindo as colunas nas linhas
        for (int a = 0; a < 10; a++)
        {   

            printf("%d ", tabuleiro[i][a]);
        
            // Adicionando o navio horizontal
            // começando pela linha
            for(int i = 2 ; i < 3; i++) 
            {
                // aqui posiciona a coluna
                for ( int a = 2; a < 5 ; a++) 
                {
                tabuleiro [i] [a] = 3;
                }
            }    
            

            // adicionando o navio vertical
            for(int i = 2; i < 5; i++) // linha
            {
                // aqui posiciona a coluna
                for ( int a = 6; a < 7 ; a++) 
                {
                tabuleiro [i] [a] = 3;
                }
            } 

            // primeiro navio na diagonal
            for(int i = 5, j = 5; i < 8; i++, j++) // linha
            {
                
                
                tabuleiro [i] [j] = 3;
                
            } 
            // segundo navio diagonal
            for(int i = 7, j = 3; i < 10; i++, j--) // linha
            {
                
                
                tabuleiro [i] [j] = 3;
                
            } 


        }

        // vai rodar ao final de cada coluna para iniciar na proxima linha
        printf("\n"); 
    }
    
    
    //printf("%s", linha);
    //printf("%s", tabuleiro);

}