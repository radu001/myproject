void creare()
{int n,i,j,k;
 char ch;
gotoxy(12,5);SetColor(12);
printf("Le fichier sera erase si vous voulez creer un nouveau\n\n\n");SetColor(15);
printf("                           Vous voulez continuer?\n\n                               1.Oui   2.Non");
ch=getch();
if(ch!='1') {system("cls");main();}
else{
system("cls");
hidecursor(0);
gotoxy(22,5);
printf("Donnez le nombre des etudiants:   ");
scanf("%d",&n);
   fac=fopen("initial.dat","w");


    SetColor(15);

for(i=0;i<n;i++)

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
    printf("Donnez la faculte de l'etudiant(ex. FCIM):      ");SetColor(11);
    scanf("%s",etud.fac);SetColor(14);
    k=0;
    for(j=0;j<20;j++)
    if(strcmp(faculte[j],etud.fac)==0)
    {fflush(stdin); k=1;break;}
    if(k==0) {gotoxy(25,8);SetColor(12); printf("Cette faculte n'existe pas");
              Sleep(1500); goto l;  }
    SetColor(14);

    gotoxy(15,8);SetColor(14);
    printf("Donnez le nom de l'etudiant:      ");SetColor(11);
    scanf("%s",etud.nom);
    fflush(stdin);
    gotoxy(15,10);SetColor(14);
    printf("Donnez le prenom d'etudiant:      ");SetColor(11);
    scanf("%s",etud.prenom);
    fflush(stdin);
    gotoxy(15,12);SetColor(14);
    printf("Donnez l'age de l'etudiant:       ");SetColor(11);
    scanf("%d",&etud.age);
    fflush(stdin);
    gotoxy(15,14);SetColor(14);
    printf("Donnez le gen de l'etudiant(m/f): ");SetColor(11);
    scanf("%s",etud.gen);
    fflush(stdin);
    gotoxy(15,16);SetColor(14);
    printf("Donnez la groupe de l'etudiant:   ");SetColor(11);
    scanf("%s",etud.groupe);
    fflush(stdin);
    gotoxy(15,18);SetColor(14);
    printf("Donnez l'annee d'etude de l'etudiant(du 1 a 4):   ");SetColor(11);
    scanf("%d",&etud.anne_etude);
    fflush(stdin);
    gotoxy(15,20);SetColor(14);
    printf("Donnez la bourse de l'etudiant:   ");SetColor(11);
    scanf("%f",&etud.bourse);
    fflush(stdin);

    fwrite(&etud,sizeof(etud),1,fac);
  }
  fclose(fac);
  system("cls");
  gotoxy(15,5);
  SetColor(15);
printf("Vous avez introduit avec succes les etudiants");
}
getch();
}

