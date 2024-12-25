#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r"); 
    char line[1000];                   

  
    if (file == NULL) {
        printf("loi.\n");
        return 1; 
    }
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("dong dau tien trong file là:\n%s", line);
    } else {
        printf("file rong.\n");
    }

    fclose(file); 
    return 0;
}
