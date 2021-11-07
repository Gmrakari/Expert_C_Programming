

One problem with begin able to double-subscript a two-dimensional array and a one-dimensional array of pointers is that looking at the reference sqush[i][j] does not tell you whether squah was declared as:

int squash[23][12];

int * squash[23];

int ** squah;

int (* squash)[12];

The rules for pointer subscripting tell us that pea[i][j] becomes:

* ( *(pea + i) + j)


char *turnip[UMPTEEN];
char my_string[] = "your message here";

/* share string */
turnip[i] = &my_string[0];

/* copy string */
trunip[j] = malloc(strlen(my_string) + 1);
strcpy(trunip[j],my_string);



