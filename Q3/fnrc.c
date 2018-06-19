#include <stdio.h>


char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    int repete = 0;
    int i;
    char letra = sentence[i];

    for (i = 0 ; i <= (length - 1); i++){
        if(sentence[i] == ' '){
            i++;
            break;
        }        
        for(int x = 0; x <= ( length - 1); x++){
            if(letra == sentence[x]){
                repete++;
        }        
    }

    if(repete ==1 ){
        printf("%c", letra);
    }
    
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}
int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
