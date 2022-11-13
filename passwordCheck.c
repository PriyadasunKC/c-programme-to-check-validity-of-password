#include <stdio.h>
#include <string.h>
int checkValidity(void);
int main(){
    checkValidity();
    return 0;
}

int checkValidity(void){
    char pass[20];
    int capCount = 0;
    int numCount = 0;
    int letterCount = 0;
    
    printf("Password should contain,\n- At least 6 characters\n- At least 1 digit\n- At least 1 Uppercase letter\n\n");
    printf("Enter Password : ");
    scanf("%s",pass);
    letterCount = strlen(pass);
    if(letterCount <6){
        printf("Password Should Contain at least 6 characters !");
    }else{
    for(int i = 0; i<=letterCount;i++){
        if(pass[i]>='A' && pass[i]<='Z'){
            capCount++;
        }
        if(pass[i]>='0' && pass[i]<='9'){
            numCount++;
        }
    }
    if(capCount == 0){
        printf("Password Should Contain at least 1 UPPERCASE LETTER !");
    }else{
    if(numCount == 0){
        printf("Password Should Contain at least 1 DIGIT !");
    }else{
        int newCount = 0;
        char defaultPass[9] = "Chathura1";
        int len1 = 9;
        for(int k = 0; k <=letterCount;k++){
            if((defaultPass[k] == pass[k])&& len1 == letterCount){
                newCount++;
            }
        }
        if(newCount == len1){
            printf("Password is correct");
        }else{
            printf("Password is incorrect!");
        }
    }
    }
    }
}
