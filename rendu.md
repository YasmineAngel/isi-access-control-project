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
values of the ids : 
RUID: 1001, EUID: 1001
RGID: 1001, EGID: 1001
can't open file: Permission denied
it can't open the file because toto doesn't have permission x  for data.txt 

- chmod u+s myopen : 
toto@isi1:/home/ubuntu$ ./myopen mydir/data.txt
RUID: 1001, EUID: 1000
RGID: 1001, EGID: 1001
File opened successfully!
yes it can open the file .

## Question 4

Réponse

## Question 5

Réponse

## Question 6

Réponse

## Question 7

Mettre les scripts bash dans le repertoire *question7*.

## Question 8

Le programme et les scripts dans le repertoire *question8*.

## Question 9

Le programme et les scripts dans le repertoire *question9*.

## Question 10

Les programmes *groupe_server* et *groupe_client* dans le repertoire
*question10* ainsi que les tests. 








