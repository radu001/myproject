void sortarea()
{int n=-1,mod;
filemenu();
SetColor(15);
gotoxy(24,2);printf("Le trie du fichier selecte");
//numararea inregistrarilor
  while (!feof(fac))
{
  fread(&etud,sizeof(etud),1,fac);
  n++;
}
gotoxy(20,5);printf("Comment vous voulez trie fe fichier?");
gotoxy(25,7);printf("1.Croisant     2.Decroisant");
mod=getch();


char m[13]; int pm;

for(int i=0;i<n-1;i++)
{
fseek(fac,i*sizeof(etud),SEEK_SET);
fread(&etud,sizeof(etud),1,fac);
strcpy(m,etud.nom);
pm=i;

for(int j=i+1;j<n;j++)
        {
        fseek(fac,j*sizeof(etud),SEEK_SET);
        fread(&etud,sizeof(etud),1,fac);

        if(mod=='1') {if(stricmp(m,etud.nom)>0) {strcpy(m,etud.nom);pm=j;}} else
        if(stricmp(m,etud.nom)<0) {strcpy(m,etud.nom);pm=j;}
        }
        fseek(fac,i*sizeof(etud),SEEK_SET);
        fread(&etud,sizeof(etud),1,fac);
        fseek(fac,pm*sizeof(etud),SEEK_SET);
        fread(&etud2,sizeof(etud),1,fac);
        //inscrierea inregistrarilor
        fseek(fac,i*sizeof(etud),SEEK_SET);
        fwrite(&etud2,sizeof(etud),1,fac);
        fseek(fac,pm*sizeof(etud),SEEK_SET);
        fwrite(&etud,sizeof(etud),1,fac);
        }
fclose(fac);
gotoxy(20,5);printf("Le fichier a ete trie avec succes    ");
gotoxy(25,7);printf("                           ");
getch();
}

