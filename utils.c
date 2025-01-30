#include "utils.h"

bool is_valid_input(char *s){

    if(s == NULL || *s == '\0'){
        return false;
    }

    bool has_decimal = false;
    bool has_digit = false;

    int i = 0;
    
    if(s[0] == '-'){
        i++;
    }

    while(s[i] != '\0'){


        if(isdigit(s[i])){
            has_digit = true;
        }

        else if(s[i] == '.'){

            if(has_decimal){
                return false; 
            
            }

            has_decimal = true;
        }

        else{

            return false;
        }

        i++;
    }
    return has_digit;
}

int choice_input() {

    char num[2];
    if(fgets(num, sizeof(num), stdin) == NULL){
        return 0;
    }
    num[strcspn(num, "\n")] = 0;
    return atoi(num);    
}

char* value_input(){

    char string_input[100];

    if(fgets(string_input, sizeof(string_input), stdin) == NULL){
        return NULL;
    }

    string_input[strcspn(string_input, "\n")] = 0; 
    char* string_return = (char*)malloc(strlen(string_input) + 1);

    if(string_return == NULL){

        fprintf(stderr, "Memory Allocation Failed");
        return NULL;
    }

    strcpy(string_return, string_input);
    return string_return;
 }

 void clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
}

void clear_screen(){
    
    system("cls");
    
}

void default_screen(){

    system("cls");
    clear_buffer();
    puts("Invalid choice, try again.\n\n");
    puts("Press Enter to return to menu...");
    getchar();
}

void conversion_function(const char *prompt, const char *title, const char *input_unit, const char *output_unit, double(*conversion_func)(double)){
    double double_input_value;
    char* user_input_value = NULL;
    

   
        
    clear_screen();
    clear_buffer();
    puts(title);
    puts("-------------------------");
    puts(prompt);
    user_input_value = value_input();
    
    
    if(is_valid_input(user_input_value)){

        double_input_value = atof(user_input_value);
        printf("\n%.2lf %s is equivalent to %.2lf %s \n", double_input_value, input_unit, conversion_func(double_input_value), output_unit);
        

    }

    else{
        printf("\nInvalid input: '%s' \n\n", user_input_value);
    }

    free(user_input_value);  
    printf("\nPress Enter to return to Menu\n");
}


