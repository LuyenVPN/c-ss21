#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "w");              
    char input[1000];
    if (file == NULL) {
        printf("Loi mo file\n");
        return 1; 
    }
    printf("Nhap mot chuoi bat ki: ");
    fgets(input, sizeof(input), stdin);
    fprintf(file, "%s", input);
    fclose(file);
    printf("luu thanh cong \n");

    return 0;
}

