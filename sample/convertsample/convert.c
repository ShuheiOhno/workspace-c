#include <stdio.h>
#include <ctype.h>

void convert_text_to_lowercase(const char *input_filename, const char *output_filename) {
    FILE *input_file = fopen(input_filename, "r");
    FILE *output_file = fopen(output_filename, "w");

    if (input_file == NULL || output_file == NULL) {
        perror("Cant open this file");
        return;
    }

    int ch;
    while ((ch = fgetc(input_file)) != EOF) {
        fputc(tolower(ch), output_file);
    }

    fclose(input_file);
    fclose(output_file);
    printf("OK,OUTPUT: %s\n", output_filename);
}

int main() {
    const char *input_filename = "input.txt";   // 入力ファイル
    const char *output_filename = "output.txt"; // 出力ファイル

    convert_text_to_lowercase(input_filename, output_filename);

    return 0;
}
