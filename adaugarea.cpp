void add()
{int ad=0,n,i,j,k;
filemenu();
SetColor(14);
 fread(&etud,sizeof(etud),1,fac);
       while (!feof(fac))
{
 fread(&etud,sizeof(etud),1,fac);
 ad++;
}
//setup git
system("cls");
hidecursor(0);
gotoxy(22,5);
printf("Donnez le nombre des etudiants:   ");
scanf("%d",&n);
    SetColor(15);

for(i=ad;i<n+ad;i++)

  {   l:
          SetColor(15);
      system("cls");
      printf("                         Introduire l'etudiant nr. %d",i+1);
      SetColor(11);
gotoxy(9,3);printf("%c",201);for(j=0;j<60;j++)printf("%c",205);printf("%c\n",187);
for(j=4;j<22;j++)
  {
    gotoxy(9,j);printf("%c",186);
    gotoxy(70,j);printf("%c",186);
  }
  gotoxy(9,22);printf("%c",200);for(j=0;j<60;j++)printf("%c",205);printf("%c",188);
SetColor(14);
    gotoxy(15,6);
    printf("Donnez la faculte de l'etudiant(ex. FCIM):      ");
    scanf("%s",etud.fac);
    k=0;
    for(j=0;j<20;j++)
    if(strcmp(faculte[j],etud.fac)==0)
    {fflush(stdin); k=1;break;}
    if(k==0) {gotoxy(25,8);SetColor(12); printf("Cette faculte n'existe pas");
              Sleep(1500); goto l;  }
    SetColor(14);

    gotoxy(15,8);
    printf("Donnez le nom de l'etudiant:      ");
    scanf("%s",etud.nom);
    fflush(stdin);
    gotoxy(15,10);
    printf("Donnez le prenom d'etudiant:      ");
    scanf("%s",etud.prenom);
    fflush(stdin);
    gotoxy(15,12);
    printf("Donnez l'age de l'etudiant:       ");
    scanf("%d",&etud.age);
    fflush(stdin);
    gotoxy(15,14);
    printf("Donnez le gen de l'etudiant(m/f): ");
    scanf("%s",etud.gen);
    fflush(stdin);
    gotoxy(15,16);
    printf("Donnez la groupe de l'etudiant:   ");
    scanf("%s",etud.groupe);
    fflush(stdin);
    gotoxy(15,18);
    printf("Donnez l'annee d'etude de l'etudiant(du 1 a 4):   ");
    scanf("%d",&etud.anne_etude);
    fflush(stdin);
    gotoxy(15,20);
    printf("Donnez la bourse de l'etudiant:   ");
    scanf("%f",&etud.bourse);
    fflush(stdin);

    fwrite(&etud,sizeof(etud),1,fac);
  }
  fclose(fac);
  system("cls");
  gotoxy(15,5);
  SetColor(15);
printf("Vous avez introduit avec succes les etudiants");

getch();
}
