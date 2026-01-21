#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc , char *argv[]) {
uid_t ruid, euid, suid;
gid_t rgid, egid, sgid;
getresuid(&ruid, &euid, &suid); 
getresgid(&rgid, &egid, &sgid);  

printf("RUID: %d, EUID: %d\n", ruid, euid);
printf("RGID: %d, EGID: %d\n", rgid, egid);
    printf("RUID: %d, EUID: %d\n", ruid, euid);
printf("RGID: %d, EGID: %d\n", rgid, egid);
    
FILE *f ;
if (argc<2){
printf("missing argument");
exit(EXIT_FAILURE);
}   
f = fopen(argv[1], "r");
if (f == NULL) {
    perror("can't open file");
    exit(EXIT_FAILURE);
}
printf("File opened successfully!\n");
fclose(f);
exit(EXIT_SUCCESS);


}

