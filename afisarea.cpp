void open()
{int j,i=0;
filemenu();

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
gotoxy(7,5+i);printf("%.*s",10,etud.nom);
gotoxy(19,5+i);printf("%.*s",10,etud.prenom);
gotoxy(31,5+i);printf("%.*s",5,etud.fac);
gotoxy(41,5+i);printf("%d",etud.age);
gotoxy(48,5+i);printf("%.*s",1,etud.gen);
gotoxy(53,5+i);printf("%.*s",8,etud.groupe);
gotoxy(63,5+i);printf("%d",etud.anne_etude);
gotoxy(70,5+i);printf("%3.2f",etud.bourse);

fread(&etud,sizeof(etud),1,fac);
}
SetColor(11);
for(j=4;j<i+7;j++)
  {
    gotoxy(1,j);printf("%c",186);
    gotoxy(78,j);printf("%c",186);
 /*   gotoxy(17,j+1);printf("%c",179);
    gotoxy(29,j+1);printf("%c",179);
    gotoxy(39,j+1);printf("%c",179);
    gotoxy(45,j+1);printf("%c",179);
    gotoxy(51,j+1);printf("%c",179);
    gotoxy(60,j+1);printf("%c",179);
    gotoxy(67,j+1);printf("%c",179);
    gotoxy(5,j+1);printf("%c",179); */
  }
  gotoxy(1,7+i);printf("%c",200);for(j=0;j<76;j++)printf("%c",205);printf("%c",188);

  gotoxy(1,5);printf("%c",199);for(j=0;j<76;j++)printf("%c",196);printf("%c",182);
SetColor(15);
  fclose(fac);
  getch();
}

