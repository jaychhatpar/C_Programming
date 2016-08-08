//hello.c by Jayesh Chhatpar
	/*
	 * This is a way to add comments for multiple lines.
	 */
#include <stdio.h> // this is the standard library

enum{max_length=127};
static char response[max_length];

extern int var;
extern void func();

void funct(); //function declaration
int l = 47;

int main( int argc, char ** argv )
{ //Here the execution begins.
	func();
	funct();
	printf("External varialble is %d\n", var);
	int x = printf("Hello, World!\n"); //this is another way comment in a line
	printf("My name is Jayesh Chhatpar!\n");
	printf("Embedded Systems!\n");
	printf ("printf returned %d\n",x);
	int y = printf("Hello, World!\n") * 5;
	printf ("printf returned %d\n",y);

	int i=0;
	for(i=1; i<=10; i++)
	{
		static int number = 1; //with static the storage is auto and the number will always print 1. With static the number is incremented everytime
		int number1 = 1;
		int number2 = 1;
		printf("Auto = %d 	Static = %d 	Register = %d\n",number2++,number++,number1++);
	}

	int j=0;
	char * s = "Hello, Jayesh!\n";
	printf (s);
	printf("The number is %d.\n",j);

	fprintf(stdout,"Testing fprintf with stdio\n");
	fprintf(stderr,"Testing fprintf with stderr\n");

	printf("Type a string: ");
	fflush(stdout);
	fgets(response, max_length, stdin);
	printf("The string is %s\n", response);
	char str1[]="String";

	char str[]={'J','a','y', 'e','s','h',0};
	printf("Strings are : %s 	%s\n",str, str1);


	/**************Arrays and Pointers**************/

	for (i=0;str1[i]!=0;++i)
	{
		printf("Character is %c\n", str1[i]);
	}

	char *cp;

	for (cp =str;*cp;++cp)
	{
		printf("Character is %c\n",*cp);
	}


	int aa = 1;
	int bb =0;
	int cc=0;
	if(aa)
		{
			puts ("this is true");
		}
	else if (bb)
		{
			puts("this is not true");
		}

	else
	{
		puts("Nothing is true!");
	}


		cc = (aa==5) ? (7) : (9);//ternary operator, if aa is True then c=7 if a is false c =9
		printf("C is %d\n",cc);

		/******Swtich Statament******/
		int foo = 1;
		printf("Please enter a number from 1 to 4: ");
		//scanf("%d",&foo);

		switch(foo)
		{
		case 1:
			puts("one");
			break;

		case 2:
			puts ("two");
			break;

		case 3:
			puts ("three");
			break;
		case 4:
			puts("four");
			break;
		default:
			puts("Wrong input!!! Enter a number from 1 to 4.");
			break;
		}

		//Creating list of constants
#define ONE (1)
#define TWO (2)
#define THREE (3)
#define FOUR (4)

		int foos = 2;
		printf("Please enter a number from 1 to 4: ");
		//scanf("%d",&foo);

		switch(foos)
		{
		case ONE:
			puts("one");
			break;

		case TWO:
			puts ("two");
			break;

		case THREE:
			puts ("three");
			break;
		case FOUR:
			puts("four");
			break;
		default:
			puts("Wrong input!!! Enter a number from 1 to 4.");
			break;
		}


		return 0;
}

void funct()
{
	printf("This is a function after main. It's function declaration is before main.");
}










