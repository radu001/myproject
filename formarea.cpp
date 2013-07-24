void formarea()
{
   data1 =fopen("data1.dat","w");
   data2 =fopen("data2.dat","w");
   data3 =fopen("data3.dat","w");
   data4 =fopen("data4.dat","w");
if( (_access( "initial.dat", 0 )) != -1 ) {
fac=fopen("initial.dat","r");
fread(&etud,sizeof(etud),1,fac);
while (!feof(fac))
{
if(etud.anne_etude==1)fwrite(&etud,sizeof(etud),1,data1);
if(etud.anne_etude==2)fwrite(&etud,sizeof(etud),1,data2);
if(etud.anne_etude==3)fwrite(&etud,sizeof(etud),1,data3);
if(etud.anne_etude==4)fwrite(&etud,sizeof(etud),1,data4);
fread(&etud,sizeof(etud),1,fac);
}

fclose(fac);
fclose(data1);
fclose(data2);
fclose(data3);
fclose(data4);
gotoxy(21,5);SetColor(34);printf("Le fichiers ont ete forme avec succes");
}else{gotoxy(25,5);SetColor(12);printf("Le fichier n'existe pas");}
  getch();
}

