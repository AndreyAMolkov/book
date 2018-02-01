#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>
#include "book.h"
//the negative symbol change to '-'
checkNegative(char ch, long int countN,long int len)
{
	char chChange = '-';// change symbol less 0 (c < 0)
	if (ch < 0)
	{
		printf("\nthe Number string %li Error symbol %li  its number= %i letter =%c     change to %c", countN, len, ch, ch, chChange);//look symbol <0
	}
	return ch;
}
checkF(char ch,int i)// if find '\f' then pass it
{
	
	if (ch == '\f')
	{
		i--;
	}
	return i;
}


int long countSymbols(FILE *file)
{
int i = 0,j=0,serialNumber=0;
char c;// symbol from fgetc
char chVoid = ' ';//change '\f'to ' '
long int len = 0,countN=0,checkNumber=0;
int count[512] = { 0 };//count aski 255 Symbol
FILE *fileWork = fopen("fileWork.txt", "w");
for (len = 0;(c = fgetc(file)) !=-1;len++)
{	
	if (c == '\n')
		countN++;
	c = checkNegative(c, countN, len);//check  the negative symbol and change its to '-'
	fputc(c, fileWork);//copy first file to the workFile
	count[c]++;
	
}
i = 0;
while (i < 256)// print symbol, its number and quantity
{
	serialNumber++;
		if (count[i] > 0)
		{	printf("\nSerial Number - %i  %c - %d", i, serialNumber, count[i]);
		checkNumber += count[i];
		}
	i++;
}
printf("\rCount string =%3d  number Symbols =%li",countN, len);

	printf("\n\rcheck symbol =%li\n",checkNumber );
	fclose(file);
	fclose(fileWork);
	return checkNumber;
}


compare(const void *a, const void *b)
{
	if (strlen(*(char **)a) <strlen(*(char **)b))//base function for quick sort
		return 1;
	else
		return-1;
}

void lineSort(char *str[], int size)
{
	qsort(*str, size, sizeof(str), compare);//the base function for quick sort

}
int checkSymbol(char *str, int i)
{
	int j = i - 1;
	char ch = str[j];
	char gap = ' ';
	gap = *str;
	if ( gap == ' ')
		//if ((ch == '>' | ch == '/' || ch == ';' || ch == '{' || ch == '}' || ch == ')') && gap==' ')
		//if (*(str+8)=='\0')
		return IN;
	else
	{
		return OUT;
	}
}

void printToFileDelete(const char *p[], int size, int numb[])
{
	int i = 0, j = 0, c = 0;
	char symbol = ' ';
	int position = 0;
	char *n = '\n';
	FILE *fpTrue = fopen("fileTrue.txt", "w");

	FILE *fpDelete = fopen("fileDelete.txt", "w");
	if (fpDelete == NULL)
	{
		printf("%s -Error of open file\n", fpDelete);
		return -1;
	}
	j = 0;
	while (i < size)
	{
		position = strlen(p[i]) - 1;
		if (numb[i] > 163)
			;// check the lost value
		if (checkSymbol(p[i], position) == IN)
		{
			
			fprintf(fpDelete,"%i",numb[i]);
			fprintf(fpDelete," %s",p[i]);
			fputs("\n", fpDelete);
			//creatBookmidl(p[i],numb[i]);
			i++;
		}
		else
				fprintf(fpTrue, "%i", numb[i]);
				fprintf(fpTrue, " %s", p[i]);
				fputs("\n", fpTrue);
				if (*p[i] != '\0')
				{
					bookmidl.p[j] = p[i];//creat arr for strcat
					bookmidl.numb[j] = numb[i];
					j++;
				}
				i++;
			
	}
	bookmidl.p[j] = '\0';
	bookmidl.numb[j] = '\0';
	printf("%s\n", "The file has been successfuly changed and saved");

}


void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i = 0, j = 0,c=0;
	char symbol = ' ';
	
	while (i < size)
	{
		
			fputs(str[i], fp);
			fputs("\n", fp);
			i++;
		
	
	}

	printf("%s\n", "The file has been successfuly changed and saved");

}

int strfnd(char *str, char *word,int position)// position its the 1 position will be find or not
{
	int i = 0,j;
	int answer = -1;
	int len = strlen(word);
	if (position == 1)
	{
		for (;str[i] != '\0'&& i<len;i++)
		{

			if (str[i] != word[i])
			{
				return -1;
				break;
			}
			answer = 0;
		}
	}

	return answer;
}

void creatLongString(fpFinal)
{
	int flag = OUT, i = 0, j = 0;
	char ch = ' ';
	int FindExercise =0;
	char word[] ="Exercise";
	
	for (;bookmidl.p[i] !=NULL;i++)
	{
		if (bookmidl.numb[i]>308)
			j = j;
		while (FindExercise>=0 )// check condition if we inside string with 'word' then don't print string, but will be one '\n'
		{
			if ((bookmidl.p[i]) == NULL)
				break;
			j = bookmidl.numb[i];
			ch = *(bookmidl.p[i]);
			if ((bookmidl.numb[i++] - j) != 1)// check condition if we inside string with 'word'
				FindExercise = -1;
		}

			
				if ((bookmidl.numb[i]-j) == 1&&ch!=' ')
			{
				fputs(bookmidl.p[i], fpFinal);
				j = bookmidl.numb[i];
				ch = *(bookmidl.p[i]);
			}
				else
				{
					fputs("\n", fpFinal);
					FindExercise = strfnd(bookmidl.p[i], word, 1);
					if (FindExercise == 0) {}
					else
					{
						fputs(bookmidl.p[i], fpFinal);
					}
				}
				j = bookmidl.numb[i];
				ch = *(bookmidl.p[i]);
		

	}



}