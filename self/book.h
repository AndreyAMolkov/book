#define OUT 0
#define IN 1
//int *file2arr(char c, int i, int countVoid);
unsigned int countLetter(char c, unsigned countSymbols);
#define SIZEFILE 1024
//int FirstCountLetter(FILE *file);
unsigned countSymbols(FILE *file);
char creatWorkFile(FILE *file1);
void printLinesToFile(const char *str[], int size, FILE *fp);
void lineSort(char *str[], int size);
void printToFileDelete(const char *p[], int size,int numb[]);
typedef struct book
{
	int numb[100000];// nubber of string
	char *p[100000];//pointer to string
}BOOK;
BOOK mybook;
typedef struct bookmidl
{
	int numb[100000];// nubber of string
	char *p[100000];//pointer to string
}BOOKMIDL;
BOOK bookmidl;

void creatLongString(FILE *fpFinal);
int strfnd(char *str, char *word, int position);