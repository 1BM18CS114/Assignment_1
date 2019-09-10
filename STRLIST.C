#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	int i, j;
	char list1[8][10] = {"A", "app","a", "d", "ke", "th", "doc", "awa"};
	char list2[8][10] = { "y","tor","e","eps","ay","","le","n"};
	clrscr();
	for(i=0, j=7;i<8;i++, j--){
		strcat(list1 + i, list2 + j);
		puts(list1 + i);
	}
	getch();
}
