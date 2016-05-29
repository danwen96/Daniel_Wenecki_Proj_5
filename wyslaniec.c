#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct{
long mtype;
char* mtext[50];
}buf;


int main()
{

int id;

id = msgget(00001,IPC_CREAT|0600); //otwieramy kolejke

if(id == -1){printf("Blad przy tworzeniu kolejki\n");}

buf.mtype = 1;

printf("Podaj wyraz do przeslania\n");
scanf("%s",buf.mtext);


int j;
j = msgsnd(id,&buf,50,0); //wysylamy komunikat

if(j==-1){printf("Blad przy wyslaniu komunikatu\n");}

}

