#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>
//#define SIZEFILE 1024
#include "book.h"
#include<time.h>
#include<ctype.h>

int main()
{
	
	int i=0,countEnd=0,count=0,countVoid=0,countSymb=0;
	long int countLetterDone=0,countLetterWas=0,j=0;
	int  flag = OUT, flagN = OUT, countGo = 0,countN=0;
	int long len=0;// lenght source
	char c = ' ';
	char arr[SIZEFILE] = {' '};
//	char *p[100000] = { arr };
//char *copyNumbuk[100000] = { arr };
	char *pmidl[100000] = { arr };
	char buf[SIZEFILE] = { ' '};
	long int countFile = 0;
	FILE *fileWork = fopen("fileWork.txt", "a+");
FILE *file = fopen("Begin.txt", "r");

	if (file == NULL)
	{
		printf("%s -Error of open first file\n", file);
		return -1;
	}
	
	FILE *filenew = fopen("new.txt", "w");//open for clear	
	FILE *filenumber = fopen("copyNumbook.txt", "w");//open for clear	
	FILE *fp = fopen("fileDelete.txt", "w");//open for clear
	FILE *fpFinal = fopen("fpFinal.txt", "w");//
	clock_t start, finish=0;
	start = clock();//begin time
	
	len=countSymbols(file);//find lenght file
	rewind(fileWork);// now will be work with copy of first file
	
	for((i=(countSymb=0));countSymb < len;)//create pointer to array
	{
		countSymb++;
		
		if ((arr[i] = fgetc(fileWork)) == '\n')
		{
			arr[i] = '\0';
		mybook.p[j] = (malloc(i * sizeof(arr)));
			strcpy( mybook.p[j], arr);
		mybook.numb[j]= j++;
			//rewind();
			i = -1;// first letter of new string
		}else 
			if (arr[i] == '\f')
			{
				len--;
				i--;
			}
		i++;
	}
	mybook.p[j] = '\0';
	mybook.numb[j] = '\0';
	
 	printToFileDelete(mybook.p, j,mybook.numb);
	//lineSort(mybook.p, j);

	creatLongString(fpFinal);
	//printLinesToFile(mybook.p, j,filenew);
	return 0;
}
