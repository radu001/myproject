void modificare()
{int j,k,i=0;
system("cls");
hidecursor(1);
gotoxy(24,2);printf("La modification du fichier selecte");
filemenu();
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
SetColor(14);
  fread(&etud,sizeof(etud),1,fac);
printf("                             La liste des etudiants");
gotoxy(3,4);printf("Nr. Nom         Prenom      Faculte   Age   Gen   Groupe   Anne    Bourse");SetColor(15);
SetColor(11);
gotoxy(1,3);printf("%c",201);for(j=0;j<76;j++)printf("%c",205);printf("%c\n",187);
SetColor(15);

  while (!feof(fac))
{i++;
gotoxy(3,5+i);printf("%d",i);
gotoxy(7,5+i);printf("%s",etud.nom);
gotoxy(19,5+i);printf("%s",etud.prenom);
gotoxy(31,5+i);printf("%s",etud.fac);
gotoxy(41,5+i);printf("%d",etud.age);
gotoxy(48,5+i);printf("%s",etud.gen);
gotoxy(53,5+i);printf("%s",etud.groupe);
gotoxy(63,5+i);printf("%d",etud.anne_etude);
gotoxy(70,5+i);printf("%.2f",etud.bourse);

  fread(&etud,sizeof(etud),1,fac);
}
SetColor(11);
for(j=4;j<i+7;j++)
  {
    gotoxy(1,j);printf("%c",186);
    gotoxy(78,j);printf("%c",186);

  }
  gotoxy(1,7+i);printf("%c",200);for(j=0;j<76;j++)printf("%c",205);printf("%c",188);

  gotoxy(1,5);printf("%c",199);for(j=0;j<76;j++)printf("%c",196);printf("%c",182);
//////////////////////////////////////////////
//////////////////////////////////////////////
 fseek(fac,0*sizeof(etud),SEEK_SET);
 fread(&etud,sizeof(etud),1,fac);
 SetColor(11);
 gotoxy(3,6);printf("1");
gotoxy(7,6);printf("%s",etud.nom);
gotoxy(19,6);printf("%s",etud.prenom);
gotoxy(31,6);printf("%s",etud.fac);
gotoxy(41,6);printf("%d",etud.age);
gotoxy(48,6);printf("%s",etud.gen);
gotoxy(53,6);printf("%s",etud.groupe);
gotoxy(63,6);printf("%d",etud.anne_etude);
gotoxy(70,6);printf("%.2f",etud.bourse);
//getch();
////////////////////////////////////////////
int key=1;
int m_pos=1;
while(key!=13)
{
key=getch();
        if(key==224||key==0)
            key=getch();
switch(key){
        case 72://up
            if(m_pos>1) {--m_pos;

SetColor(15);
gotoxy(3,6+m_pos);printf("%d",m_pos+1);
gotoxy(7,6+m_pos);printf("%s",etud.nom);
gotoxy(19,6+m_pos);printf("%s",etud.prenom);
gotoxy(31,6+m_pos);printf("%s",etud.fac);
gotoxy(41,6+m_pos);printf("%d",etud.age);
gotoxy(48,6+m_pos);printf("%s",etud.gen);
gotoxy(53,6+m_pos);printf("%s",etud.groupe);
gotoxy(63,6+m_pos);printf("%d",etud.anne_etude);
gotoxy(70,6+m_pos);printf("%.2f",etud.bourse);
fseek(fac,(m_pos-1)*sizeof(etud),SEEK_SET);
fread(&etud,sizeof(etud),1,fac);
SetColor(11);
gotoxy(3,5+m_pos);printf("%d",m_pos);
gotoxy(7,5+m_pos);printf("%s",etud.nom);
gotoxy(19,5+m_pos);printf("%s",etud.prenom);
gotoxy(31,5+m_pos);printf("%s",etud.fac);
gotoxy(41,5+m_pos);printf("%d",etud.age);
gotoxy(48,5+m_pos);printf("%s",etud.gen);
gotoxy(53,5+m_pos);printf("%s",etud.groupe);
gotoxy(63,5+m_pos);printf("%d",etud.anne_etude);
gotoxy(70,5+m_pos);printf("%.2f",etud.bourse);
}break;
        case 80:
            if(m_pos<i) {m_pos++;
SetColor(15);
gotoxy(3,4+m_pos);printf("%d",m_pos-1);
gotoxy(7,4+m_pos);printf("%s",etud.nom);
gotoxy(19,4+m_pos);printf("%s",etud.prenom);
gotoxy(31,4+m_pos);printf("%s",etud.fac);
gotoxy(41,4+m_pos);printf("%d",etud.age);
gotoxy(48,4+m_pos);printf("%s",etud.gen);
gotoxy(53,4+m_pos);printf("%s",etud.groupe);
gotoxy(63,4+m_pos);printf("%d",etud.anne_etude);
gotoxy(70,4+m_pos);printf("%.2f",etud.bourse);
  fseek(fac,(m_pos-1)*sizeof(etud),SEEK_SET);
  fread(&etud,sizeof(etud),1,fac);
  SetColor(11);
gotoxy(3,5+m_pos);printf("%d",m_pos);
gotoxy(7,5+m_pos);printf("%s",etud.nom);
gotoxy(19,5+m_pos);printf("%s",etud.prenom);
gotoxy(31,5+m_pos);printf("%s",etud.fac);
gotoxy(41,5+m_pos);printf("%d",etud.age);
gotoxy(48,5+m_pos);printf("%s",etud.gen);
gotoxy(53,5+m_pos);printf("%s",etud.groupe);
gotoxy(63,5+m_pos);printf("%d",etud.anne_etude);
gotoxy(70,5+m_pos);printf("%.2f",etud.bourse);}
  break;

}}
system("cls");
/////////////////////////////////////////////
//afisarea studentului nr n
  fseek(fac,(m_pos-1)*sizeof(etud),SEEK_SET);
  fread(&etud,sizeof(etud),1,fac);
SetColor(14);
    gotoxy(15,6);
    printf("Donnez la faculte de l'etudiant(ex. FCIM):   ");SetColor(12);printf("%s",etud.fac);
    gotoxy(15,8);SetColor(14);
    printf("Donnez le nom de l'etudiant:      ");SetColor(11);printf("%s",etud.nom);SetColor(14);
    gotoxy(15,10);
    printf("Donnez le prenom d'etudiant:      ");SetColor(11);printf("%s",etud.prenom);SetColor(14);
    gotoxy(15,12);
    printf("Donnez l'age de l'etudiant:       ");SetColor(11);printf("%d",etud.age);SetColor(14);
    gotoxy(15,14);
    printf("Donnez le gen de l'etudiant(m/f): ");SetColor(11);printf("%s",etud.gen);SetColor(14);
    gotoxy(15,16);
    printf("Donnez la groupe de l'etudiant:   ");SetColor(11);printf("%s",etud.groupe);SetColor(14);
    gotoxy(15,18);
    printf("Donnez l'annee d'etude de l'etudiant(du 1 a 4):   ");SetColor(11);printf("%d",etud.anne_etude);SetColor(14);
    gotoxy(15,20);
    printf("Donnez la bourse de l'etudiant:   ");SetColor(11);printf("%.2f",etud.bourse);SetColor(14);
    gotoxy(30,24);SetColor(11);printf("Sauve");SetColor(14);
    gotoxy(40,24);SetColor(11);printf("Sortir");SetColor(14);

//sfirsitul afisarii studentului

//desenarea tabelului

gotoxy(1,1);
      SetColor(15);
      printf("                         Modifier l'etudiant nr. %d",m_pos);
      SetColor(11);
gotoxy(9,3);printf("%c",201);for(j=0;j<60;j++)printf("%c",205);printf("%c\n",187);
for(j=4;j<22;j++)
  {
    gotoxy(9,j);printf("%c",186);
    gotoxy(70,j);printf("%c",186);
  }
  gotoxy(9,22);printf("%c",200);for(j=0;j<60;j++)printf("%c",205);printf("%c",188);
//sfirsitul desenarii





int pos=1, maxp=10, c=1;
while(c==1)
{key=getch();

        if(key==224||key==0)
            key=getch();
switch(key){
        case 72:
            if(pos>1) --pos;
             else pos=10;
        switch(pos)
{
case 1:gotoxy(60,6);SetColor(12);printf("%s",etud.fac);
       gotoxy(49,8);SetColor(11);printf("%s",etud.nom);break;
case 2:gotoxy(49,8);SetColor(12);printf("%s",etud.nom);
       gotoxy(49,10);SetColor(11);printf("%s",etud.prenom);break;
case 3:gotoxy(49,10);SetColor(12);printf("%s",etud.prenom);
       gotoxy(49,12);SetColor(11);printf("%d",etud.age);break;
case 4:gotoxy(49,12);SetColor(12);printf("%d",etud.age);
       gotoxy(49,14);SetColor(11);printf("%s",etud.gen);break;
case 5:gotoxy(49,14);SetColor(12);printf("%s",etud.gen);
       gotoxy(49,16);SetColor(11);printf("%s",etud.groupe);break;
case 6:gotoxy(49,16);SetColor(12);printf("%s",etud.groupe);
       gotoxy(65,18);SetColor(11);printf("%d",etud.anne_etude);break;
case 7:gotoxy(65,18);SetColor(12);printf("%d",etud.anne_etude);
       gotoxy(49,20);SetColor(11);printf("%.2f",etud.bourse);break;
case 8:gotoxy(49,20);SetColor(12);printf("%.2f",etud.bourse);
       gotoxy(30,24);SetColor(11);printf("Sauve");break;
case 9:gotoxy(30,24);SetColor(12);printf("Sauve");
       gotoxy(40,24);SetColor(11);printf("Sortir");break;
case 10:gotoxy(40,24);SetColor(12);printf("Sortir");
        gotoxy(60,6);SetColor(11);printf("%s",etud.fac);break;


}break;

        case 80:
            if(pos<maxp) ++pos;
            else pos=1;
        switch(pos)
{
case 1:gotoxy(60,6);SetColor(12);printf("%s",etud.fac);
       gotoxy(40,24);SetColor(11);printf("Sortir");break;
case 2:gotoxy(49,8);SetColor(12);printf("%s",etud.nom);
       gotoxy(60,6);SetColor(11);printf("%s",etud.fac);break;
case 3:gotoxy(49,10);SetColor(12);printf("%s",etud.prenom);
       gotoxy(49,8);SetColor(11);printf("%s",etud.nom);break;
case 4:gotoxy(49,12);SetColor(12);printf("%d",etud.age);
       gotoxy(49,10);SetColor(11);printf("%s",etud.prenom);break;
case 5:gotoxy(49,14);SetColor(12);printf("%s",etud.gen);
       gotoxy(49,12);SetColor(11);printf("%d",etud.age);break;
case 6:gotoxy(49,16);SetColor(12);printf("%s",etud.groupe);
       gotoxy(49,14);SetColor(11);printf("%s",etud.gen);break;
case 7:gotoxy(65,18);SetColor(12);printf("%d",etud.anne_etude);
       gotoxy(49,16);SetColor(11);printf("%s",etud.groupe);break;
case 8:gotoxy(49,20);SetColor(12);printf("%.2f",etud.bourse);
       gotoxy(65,18);SetColor(11);printf("%d",etud.anne_etude);break;
case 9:gotoxy(30,24);SetColor(12);printf("Sauve");
       gotoxy(49,20);SetColor(11);printf("%.2f",etud.bourse);break;
case 10:gotoxy(40,24);SetColor(12);printf("Sortir");
        gotoxy(30,24);SetColor(11);printf("Sauve");break;
}break;

        case 13:

switch(pos)
{   case 1:{l:
    SetColor(11);
    gotoxy(60,6);printf("         ");gotoxy(60,6);hidecursor(0);scanf("%s",etud.fac);
    //verificarea existentei facultatii
    k=0;
    for(j=0;j<20;j++)
    if(strcmp(faculte[j],etud.fac)==0)
    {fflush(stdin); k=1;hidecursor(1);break;}
    if(k==0) {gotoxy(60,6);printf("         ");SetColor(12);gotoxy(60,6);printf("%s",etud.fac);Sleep(1500); goto l;  }}break;
    case 2:SetColor(11);gotoxy(49,8);printf("                 ");gotoxy(49,8);hidecursor(0);scanf("%s",etud.nom);fflush(stdin);hidecursor(1);break;
    case 3:SetColor(11);gotoxy(49,10);printf("                ");gotoxy(49,10);hidecursor(0);scanf("%s",etud.prenom);hidecursor(1);fflush(stdin);break;
    case 4:SetColor(11);gotoxy(49,12);printf("                ");gotoxy(49,12);hidecursor(0);scanf("%d",&etud.age);hidecursor(1);fflush(stdin);break;
    case 5:SetColor(11);gotoxy(49,14);printf("                ");gotoxy(49,14);hidecursor(0);scanf("%s",etud.gen);fflush(stdin);hidecursor(1);break;
    case 6:SetColor(11);gotoxy(49,16);printf("                ");gotoxy(49,16);hidecursor(0);scanf("%s",etud.groupe);hidecursor(1);fflush(stdin);break;
    case 7:SetColor(11);gotoxy(65,18);printf("     ");gotoxy(65,18);hidecursor(0);scanf("%d",&etud.anne_etude);hidecursor(1);fflush(stdin);break;
    case 8:SetColor(11);gotoxy(49,20);printf("                ");gotoxy(49,20);hidecursor(0);scanf("%f",&etud.bourse);hidecursor(1);fflush(stdin);break;
    case 9:SetColor(10);
        fseek(fac,(m_pos-1)*sizeof(etud),SEEK_SET);
        fwrite(&etud,sizeof(etud),1,fac);fclose(fac);system("cls");
        gotoxy(15,5);SetColor(15);printf("Vous avez sauve les modification");
    getch();system("cls");m_pos=1;main();break;

    case 10:fclose(fac);system("cls");m_pos=1;main();break;
            }
            break;
          }
    }
    getch();
}
