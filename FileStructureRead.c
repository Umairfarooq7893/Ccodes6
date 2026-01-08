#include <stdio.h>
struct Student {
    int id;
    char name[20];
};
int main() {
    struct Student s;
    FILE *fp = fopen("student.dat", "rb");
    fread(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("ID: %d\nName: %s\n", s.id, s.name);

    return 0;
}
