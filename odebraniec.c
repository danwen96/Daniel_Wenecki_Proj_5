#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct {
long mtype;
char mtext[50];
} buf;


int main(int argc,char** argv)
{

if(argv[1][0] > '4') //program otworzy sie tylko w weekend
{
	int id;
	id = msgget(00001,IPC_CREAT|0600);	//otwieramy kolejke
	if(id == -1){printf("Blad przy otwieraiu kolejki\n");}

	int j;
	j = msgrcv(id,&buf,50,0,0);	//odbieramy komunikat
	if(j==-1){printf("Blad przy odbieraniu komunikatu\n");}

	if((buf.mtext[0] >= 'A' && buf.mtext[0] <= 'Z') || (buf.mtext[0] >= 'a' && buf.mtext[0] <= 'z')) //sprawdzamy czy pierwsza litera jest liczba
	{
		printf("%s",buf.mtext);
	}
	else
	{
		printf("Komunikat nie jest poprawny\n");
	}
}
else
{
	printf("Nie ma weekendu, nie mozesz odebrac komunikatu\n");


}

}
