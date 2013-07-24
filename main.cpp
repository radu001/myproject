#include "lib.h"
void menu(int i);
int main();
void navigare();
void filemenu();
int j;
// navigarea prin meniul principal
void navigare()
{
int key;
int m_pos=1;
while(1)
{
key=getch();
        if(key==224||key==0)
            key=getch();
switch(key){
        case 72:
            if(m_pos>1) --m_pos;
             else m_pos=8;
            switch(m_pos)
            {
            case 1:gotoxy(20,5);SetColor(15);printf("   1.Creation du fichier initial   ");
                   gotoxy(17,7);SetColor(34);printf("   2.Formation des fichiers   ");
                   break;
            case 2:gotoxy(20,7);  SetColor(15);printf("   2.Formation des fichiers   ");
                   gotoxy(17,9);  SetColor(34);printf("   3.Affichage des fichiers   ");
                   break;
            case 3:gotoxy(20,9);  SetColor(15);printf("   3.Affichage des fichiers   ");
                   gotoxy(17,11);  SetColor(34);printf("   4.Ajout dans les fichiers   ");
                   break;
            case 4:gotoxy(20,11);  SetColor(15);printf("   4.Ajout dans les fichiers   ");
                   gotoxy(17,13);  SetColor(34);printf("   5.Modification des fichiers   ");
                   break;
            case 5:gotoxy(20,13);  SetColor(15);printf("   5.Modification des fichiers   ");
                   gotoxy(17,15);  SetColor(34);printf("   6.Tri des donnees dans les fichiers   ");
                   break;
            case 6:gotoxy(20,15);  SetColor(15);printf("   6.Tri des donnees dans les fichiers   ");
                   gotoxy(17,17);  SetColor(34);printf("   7.Structures dinamiques   ");
                   break;
            case 7:gotoxy(20,17);  SetColor(15);printf("   7.Structures dinamiques   ");
                   gotoxy(17,19);  SetColor(34);printf("   8.Sortie du programme   ");
                   break;
            case 8:gotoxy(20,19); SetColor(15);printf("   8.Sortie du programme   ");
                   gotoxy(17,5);  SetColor(34);printf("   1.Creation du fichier initial   ");
                   break;
            }
            break;

        case 80://down
            if(m_pos<8) ++m_pos;
            else m_pos=1;
            switch(m_pos)
            {
            case 1:gotoxy(17,19); SetColor(34);printf("   8.Sortie du programme   ");
                   gotoxy(20,5);SetColor(15);printf("   1.Creation du fichier initial   ");
                   break;
            case 2:gotoxy(17,5);SetColor(34);printf("   1.Creation du fichier initial   ");
                   gotoxy(20,7);  SetColor(15);printf("   2.Formation des fichiers   ");
                   break;
            case 3:gotoxy(17,7);  SetColor(34);printf("   2.Formation des fichiers   ");
                   gotoxy(20,9);  SetColor(15);printf("   3.Affichage des fichiers   ");
                   break;
            case 4:gotoxy(17,9);  SetColor(34);printf("   3.Affichage des fichiers   ");
                   gotoxy(20,11);  SetColor(15);printf("   4.Ajout dans les fichiers   ");
                   break;
            case 5:gotoxy(17,11);  SetColor(34);printf("   4.Ajout dans les fichiers   ");
                   gotoxy(20,13);  SetColor(15);printf("   5.Modification des fichiers   ");
                   break;
            case 6:gotoxy(17,13);  SetColor(34);printf("   5.Modification des fichiers   ");
                   gotoxy(20,15);  SetColor(15);printf("   6.Tri des donnees dans les fichiers   ");
                   break;
            case 7:gotoxy(17,15);  SetColor(34);printf("   6.Tri des donnees dans les fichiers   ");
                   gotoxy(20,17);  SetColor(15);printf("   7.Structures dinamiques   ");
                   break;
            case 8:gotoxy(17,17);  SetColor(34);printf("   7.Structures dinamiques   ");
                   gotoxy(20,19); SetColor(15);printf("   8.Sortie du programme   ");
                   break;
            }
            break;
        case 13:
            system("cls");
            menu(m_pos);
            break;
        default:navigare();
            break;
        }
}
    }





//functiile meniului
void menu(int i)
{SetColor(15);
    switch (i){

case 1:
creare();
system("cls");
break;

case 2:
formarea();
system("cls");
break;

case 3:
open();
system("cls");
break;

case 4:
add();
system("cls");
break;

case 5:
modificare();
system("cls");
break;

case 6:
sortarea();
system("cls");
break;

case 7:
dinamic();
system("cls");
break;

case 8:
exit(1);
break;
}
main();

}


//navigarea pentru alegerea fisierului
void filemenu()
{int i,j,key,m_pos=1;
SetColor(15);
printf("\n\n\n                               Choisisez le fichier");
        SetColor(11);

gotoxy(20,5);printf("%c",201); for(i=0;i<40;i++)printf("%c",205);printf("%c",187);
for(i=6;i<17;i++)
{
    gotoxy(20,i);printf("%c",186);
    gotoxy(61,i); printf("%c",186);

}
        for(j=21;j<61;j++)
           for(i=7;i<17;i+=2)
     {gotoxy(j,i);printf("%c",196);}

gotoxy(20,17);printf("%c",200);for(i=0;i<40;i++)printf("%c",205);printf("%c",188);
SetColor(15);
gotoxy(29,6);printf("   1.Tous les etudints   ");SetColor(34);
gotoxy(26,8);printf("   2.Les premiers anne   ");
gotoxy(26,10);printf("   3.Les deuxiemes anne   ");
gotoxy(26,12);printf("   4.Les treuxiemes anne   ");
gotoxy(26,14);printf("   5.Les quatriemes anne   ");
gotoxy(26,16);printf("   6.Sortie dans le menu   ");
while(key!=13)
{
key=getch();
        if(key==224||key==0)
            key=getch();
switch(key){
    case 72:  //up
            if(m_pos>1) --m_pos;
             else m_pos=6;
            switch(m_pos)
            {
        case 1:gotoxy(29,6);SetColor(15);printf("   1.Tous les etudints   ");
               gotoxy(26,8);SetColor(34);printf("   2.Les premiers anne   ");
               break;
        case 2:gotoxy(29,8);SetColor(15);printf("   2.Les premiers anne   ");
               gotoxy(26,10);SetColor(34);printf("   3.Les deuxiemes anne   ");
               break;
        case 3:gotoxy(29,10);SetColor(15);printf("   3.Les deuxiemes anne   ");
               gotoxy(26,12);SetColor(34);printf("   4.Les treuxiemes anne   ");
               break;
        case 4:gotoxy(29,12);SetColor(15);printf("   4.Les treuxiemes anne   ");
               gotoxy(26,14);SetColor(34);printf("   5.Les quatriemes anne   ");
               break;
        case 5:gotoxy(29,14);SetColor(15);printf("   5.Les quatriemes anne   ");
               gotoxy(26,16);SetColor(34);printf("   6.Sortie dans le menu   ");
               break;
        case 6:gotoxy(29,16);SetColor(15);printf("   6.Sortie dans le menu   ");
               gotoxy(26,6);SetColor(34);printf("   1.Tous les etudints   ");
               break;
            }break;
    case 80: //down
            if(m_pos<6) m_pos++;
            else m_pos=1;
            switch(m_pos)
            {
        case 1:gotoxy(29,6);SetColor(15);printf("   1.Tous les etudints   ");
               gotoxy(26,16);SetColor(34);printf("   6.Sortie dans le menu   ");
               break;
        case 2:gotoxy(26,6);SetColor(34);printf("   1.Tous les etudints   ");
               gotoxy(29,8);SetColor(15);printf("   2.Les premiers anne   ");
               break;
        case 3:gotoxy(26,8);SetColor(34);printf("   2.Les premiers anne   ");
               gotoxy(29,10);SetColor(15);printf("   3.Les deuxiemes anne   ");
               break;
        case 4:gotoxy(26,10);SetColor(34);printf("   3.Les deuxiemes anne   ");
               gotoxy(29,12);SetColor(15);printf("   4.Les treuxiemes anne   ");
               break;
        case 5:gotoxy(26,12);SetColor(34);printf("   4.Les treuxiemes anne   ");
               gotoxy(29,14);SetColor(15);printf("   5.Les quatriemes anne   ");
               break;
        case 6:gotoxy(26,14);SetColor(34);printf("   5.Les quatriemes anne   ");
               gotoxy(29,16);SetColor(15);printf("   6.Sortie dans le menu   ");
               break;
            }break;
    case 13:
        switch(m_pos)
        {
        case 1:if( (_access( "initial.dat", 0 )) != -1 ) {
                fac=fopen("initial.dat","r+");}else{system("cls");gotoxy(25,5);SetColor(12);printf("Le fichier n'existe pas");getch();system("cls");main();}break;
        case 2:if( (_access( "data1.dat", 0 )) != -1 ) {
                fac=fopen("data1.dat","r+");}else{gotoxy(25,5);SetColor(12);printf("Le fichier n'existe pas");}break;
        case 3:if( (_access( "data2.dat", 0 )) != -1 ) {
                fac=fopen("data2.dat","r+");}else{gotoxy(25,5);SetColor(12);printf("Le fichier n'existe pas");}break;
        case 4:if( (_access( "data3.dat", 0 )) != -1 ) {
                fac=fopen("data3.dat","r+");}else{gotoxy(25,5);SetColor(12);printf("Le fichier n'existe pas");}break;
        case 5:if( (_access( "data4.dat", 0 )) != -1 ) {
                fac=fopen("data4.dat","r+");}else{gotoxy(25,5);SetColor(12);printf("Le fichier n'existe pas");}break;
        case 6:system("cls");main();break;

}break;
}
}
system("cls");
}

//functia principala main
int main()
{int i;

//Construirea tabelului
SetColor(15);
printf("\n                                 MENU PRINCIPALE\n\n");
        SetColor(11);

printf("             %c",201); for(i=0;i<53;i++)printf("%c",205);printf("%c",187);
for(i=4;i<21;i++)
{
    gotoxy(13,i);printf("%c",186);
    gotoxy(67,i); printf("%c",186);
}
        for(j=14;j<67;j++)
           for(i=6;i<20;i+=2)
     {gotoxy(j,i);printf("%c",196);}

gotoxy(13,21);printf("%c",200);for(i=0;i<53;i++)printf("%c",205);printf("%c",188);

//Afisarea meniului
    hidecursor(1);
gotoxy(20,5); SetColor(15);printf("   1.Creation du fichier initial   ");SetColor(34);
gotoxy(17,7);printf("   2.Formation des fichiers   ");
gotoxy(17,9);printf("   3.Affichage des fichiers   ");
gotoxy(17,11);printf("   4.Ajout dans le fichier   ");
gotoxy(17,13);printf("   5.Modification des fichiers   ");
gotoxy(17,15);printf("   6.Tri des donnees dans les fichiers   ");
gotoxy(17,17);printf("   7.Structures dinamiques   ");
gotoxy(17,19);printf("   8.Sortie du programme   ");
//inceperea
navigare();
}
