#define GNUSOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[]) {
if (argc < 2) return 1;

struct stat file_stat;
if (stat(argv[1], &file_stat) == -1) {
    perror("Stat failed");
    return 1;
}

gid_t rgid = getgid();
if (rgid != file_stat.st_gid) {
    fprintf(stderr, "Error: You do not belong to the file's group.\n");
    return 1;
}


return 0;


}