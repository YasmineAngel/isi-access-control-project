# Rendu "Les droits d’accès dans les systèmes UNIX"

## Binome

- Nom, Prénom, email: ___

- Nom, Prénom, email: ___

## Question 1

Réponse : 
- Yes it can write . The user toto does not have the permission to write but because the process launched by toto will have the user group ubuntu and the members of the group ubuntu are allowed to write . the second triplet -rw in the  -r--rw-r-- represents the permissions of the users that belong to the group ubuntu .

## Question 2

- the x for a directory is permission to acess the directory 
- after removing the permission for the group ubuntu sudo chmod g-x mydir and trying to acess the directory cd mydir as toto we get : "bash: cd: mydir: Permission denied " : the user toto can't access the directory because he is part of the group ubuntu but the members of the group do not have the permission to execute . the system checks EUID and RUID , they do not match so it checks RGID and EGID they match but does not have permission.
- after creating the data.txt as ubuntu and running ls -al mydir as toto :
ls -al mydir
ls: cannot access 'mydir/..': Permission denied
ls: cannot access 'mydir/data.txt': Permission denied
ls: cannot access 'mydir/.': Permission denied
total 0
d????????? ? ? ? ?              ? .
d????????? ? ? ? ?              ? ..
-????????? ? ? ? ?              ? data.txt
Why ? : since the user toto does not have acess permission to mydir he shouldn't be allowed to know information about the files inside the folder mydir .


## Question 3

- ./myopen mydir/data.txt as toto : 
values of the ids (toto's) : 
RUID: 1001, EUID: 1001
RGID: 1001, EGID: 1001
can't open file: Permission denied
it can't open the file because toto doesn't have permission x  for data.txt 

- chmod u+s myopen : 
toto@isi1:/home/ubuntu$ ./myopen mydir/data.txt
RUID: 1001, EUID: 1000 (ubuntu's)
RGID: 1001, EGID: 1001
File opened successfully!
yes it can open the file .

## Question 4
values (toto's): 
EUID: 1001
EGID: 1001

## Question 5

visualisation : 
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/run/ircd:/usr/sbin/nologin
_apt:x:42:65534::/nonexistent:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
systemd-network:x:998:998:systemd Network Management:/:/usr/sbin/nologin
systemd-timesync:x:996:996:systemd Time Synchronization:/:/usr/sbin/nologin
dhcpcd:x:100:65534:DHCP Client Daemon,,,:/usr/lib/dhcpcd:/bin/false
messagebus:x:101:101::/nonexistent:/usr/sbin/nologin
syslog:x:102:102::/nonexistent:/usr/sbin/nologin
systemd-resolve:x:991:991:systemd Resolver:/:/usr/sbin/nologin
uuidd:x:103:103::/run/uuidd:/usr/sbin/nologin
tss:x:104:104:TPM software stack,,,:/var/lib/tpm:/bin/false
sshd:x:105:65534::/run/sshd:/usr/sbin/nologin
pollinate:x:106:1::/var/cache/pollinate:/bin/false
tcpdump:x:107:108::/nonexistent:/usr/sbin/nologin
landscape:x:108:109::/var/lib/landscape:/usr/sbin/nologin
fwupd-refresh:x:990:990:Firmware update daemon:/var/lib/fwupd:/usr/sbin/nologin
polkitd:x:989:989:User for polkitd:/:/usr/sbin/nologin
ubuntu:x:1000:1000:Ubuntu:/home/ubuntu:/bin/bash
toto:x:1001:1001:,,,:/home/toto:/bin/bash


- Chfn is used to change the finger information : fullname and room number , work phone , home phone .
- -rwsr-xr-x 1 root root 72792 mai   30  2024 /usr/bin/chfn : root user can read write and setUID , group root can read and execute and the others can read and execute .
- updated information for root : root:x:0:0:1,2,3,4,5:/root:/bin/bash




## Question 6

The password are stored in : /etc/shadow
why ? because the /etc/passwd file must remain readable to allow system tools to map User IDs to names. but passwords need to be protected .

## Question 7

Mettre les scripts bash dans le repertoire *question7*.

## Question 8

Le programme et les scripts dans le repertoire *question8*.

## Question 9

Le programme et les scripts dans le repertoire *question9*.

## Question 10

Les programmes *groupe_server* et *groupe_client* dans le repertoire
*question10* ainsi que les tests. 








