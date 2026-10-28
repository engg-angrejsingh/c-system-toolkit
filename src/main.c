
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void show_help(const char *program) {
    printf("C System Toolkit\n\n");
    printf("Usage: %s <command> [argument]\n\n", program);
    printf("Commands:\n");
    printf("  help             Show this help menu\n");
    printf("  info             Show system information\n");
    printf("  count <file>     Count lines in a file\n");
}

static void count_lines(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Cannot open file");
        return;
    }

    int ch;
    long lines = 0;
    int has_content = 0;
    int last_char = '\n';

    while ((ch = fgetc(file)) != EOF) {
        has_content = 1;
        last_char = ch;

        if (ch == '\n') {
            lines++;
        }
    }

    if (has_content && last_char != '\n') {
        lines++;
    }

    printf("Lines: %ld\n", lines);
    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc < 2 || strcmp(argv[1], "help") == 0) {
        show_help(argv[0]);
        return 0;
    }

    if (strcmp(argv[1], "info") == 0) {
        printf("C System Toolkit is running!\n");
        return 0;
    }

    if (strcmp(argv[1], "count") == 0) {
        if (argc < 3) {
            fprintf(stderr, "Usage: %s count <file>\n", argv[0]);
            return 1;
        }

        count_lines(argv[2]);
        return 0;
    }

    fprintf(stderr, "Unknown command: %s\n", argv[1]);
    show_help(argv[0]);
    return 1;
}
