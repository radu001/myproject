 struct student
       {char fac[10];
        char nom[20];
        char prenom[20];
        int age;
        char gen[2];
        char groupe[10];
        float bourse;
        int anne_etude;
        student *next;
       };
       typedef student *STUDENT;
       STUDENT p,q,u;
       //hh
int nr;
void stergerea_listei();
void crearea_listei();
void afisarea_listei();
void introducerea();
void inserctia();
void ins_stinga();
void ins_dreapta();
void ins_mijloc();
void sterge_element();
void dinamic()
{int i,j,key,m_pos=1;
SetColor(15);
printf("\n\n\n                               Choisisez l'option");
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
gotoxy(27,6);printf("   1.Creation d'une liste   ");SetColor(34);
gotoxy(24,8);printf("   2.L'inserction d'un element   ");
gotoxy(24,10);printf("   3.Affichage de la liste   ");
gotoxy(24,12);printf("   4.Suppression d'un element   ");
gotoxy(24,14);printf("   5.Effacer la liste   ");
gotoxy(24,16);printf("   6.Sortie dans le menu   ");
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
        case 1:gotoxy(27,6);SetColor(15);printf("   1.Creation d'une liste   ");
               gotoxy(24,8);SetColor(34);printf("   2.L'inserction d'un element   ");
               break;
        case 2:gotoxy(27,8);SetColor(15);printf("   2.L'inserction d'un element   ");
               gotoxy(24,10);SetColor(34);printf("   3.Affichage de la liste   ");
               break;
        case 3:gotoxy(27,10);SetColor(15);printf("   3.Affichage de la liste   ");
               gotoxy(24,12);SetColor(34);printf("   4.Suppression d'un element   ");
               break;
        case 4:gotoxy(27,12);SetColor(15);printf("   4.Suppression d'un element   ");
               gotoxy(24,14);SetColor(34);printf("   5.Effacer la liste   ");
               break;
        case 5:gotoxy(27,14);SetColor(15);printf("   5.Effacer la liste   ");
               gotoxy(24,16);SetColor(34);printf("   6.Sortie dans le menu   ");
               break;
        case 6:gotoxy(27,16);SetColor(15);printf("   6.Sortie dans le menu   ");
               gotoxy(24,6);SetColor(34);printf("   1.Creation d'une liste   ");
               break;
            }break;
    case 80: //down
            if(m_pos<6) m_pos++;
            else m_pos=1;
            switch(m_pos)
            {
        case 1:gotoxy(27,6);SetColor(15);printf("   1.Creation d'une liste   ");
               gotoxy(24,16);SetColor(34);printf("   6.Sortie dans le menu   ");
               break;
        case 2:gotoxy(24,6);SetColor(34);printf("   1.Creation d'une liste   ");
               gotoxy(27,8);SetColor(15);printf("   2.L'inserction d'un element   ");
               break;
        case 3:gotoxy(24,8);SetColor(34);printf("   2.L'inserction d'un element   ");
               gotoxy(27,10);SetColor(15);printf("   3.Affichage de la liste   ");
               break;
        case 4:gotoxy(24,10);SetColor(34);printf("   3.Affichage de la liste   ");
               gotoxy(27,12);SetColor(15);printf("   4.Suppression d'un element   ");
               break;
        case 5:gotoxy(24,12);SetColor(34);printf("   4.Suppression d'un element   ");
               gotoxy(27,14);SetColor(15);printf("   5.Effacer la liste   ");
               break;
        case 6:gotoxy(24,14);SetColor(34);printf("   5.Effacer la liste   ");
               gotoxy(27,16);SetColor(15);printf("   6.Sortie dans le menu   ");
               break;
            }break;
    case 13:
        switch(m_pos)
        {
        case 1:system("cls");crearea_listei();system("cls");dinamic();break;
        case 2:system("cls");inserctia();system("cls");dinamic();break;
        case 3:system("cls");afisarea_listei();getch();system("cls");dinamic();break;
        case 4:system("cls");sterge_element();system("cls");dinamic();break;
        case 5:system("cls");stergerea_listei();system("cls");dinamic();break;
        case 6:system("cls");main();break;
}break;
   case 27:system("cls");main();break;

}
}
system("cls");
}



void crearea_listei()
{int i=0;
char ch;
gotoxy(12,5);SetColor(12);
printf("Le liste sera erase si vous voulez creer une nouvelle\n\n\n");SetColor(15);
printf("                           Vous voulez continuer?\n\n                               1.Oui   2.Non");
ch=getch();
if(ch!='1') {system("cls");dinamic();}
else{
system("cls");

SetColor(15);
hidecursor(0);
gotoxy(22,5);
printf("Donnez le nombre des etudiants:   ");
scanf("%d",&nr);

if(nr>0)
{
SetColor(15);
system("cls");
printf("                         Introduire l'etudiant nr. %d",i+1);
introducerea();
p=new student;
p=q;
p->next=NULL;
u=p;
///

for(i=1;i<nr;i++)
{
       ///adaugarea unui element la dreapta
SetColor(15);
system("cls");
printf("                         Introduire l'etudiant nr. %d",i+1);
introducerea();
q->next=NULL;
u->next=q;
u=q;
}
}

  system("cls");
  gotoxy(15,5);
  SetColor(15);
printf("Vous avez introduit avec succes les etudiants");
getch();

}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void afisarea_listei()
{int i,j;
SetColor(14);
printf("                             La liste des etudiants");
gotoxy(3,4);printf("Nr. Nom         Prenom      Faculte   Age   Gen   Groupe   Anne    Bourse");SetColor(15);
SetColor(11);
gotoxy(1,3);printf("%c",201);for(j=0;j<76;j++)printf("%c",205);printf("%c\n",187);

SetColor(15);
i=0;
q=p;
  while (q!=NULL)
{i++;
gotoxy(3,5+i);printf("%d",i);
gotoxy(7,5+i);printf("%s",q->nom);
gotoxy(19,5+i);printf("%s",q->prenom);
gotoxy(31,5+i);printf("%s",q->fac);
gotoxy(41,5+i);printf("%d",q->age);
gotoxy(48,5+i);printf("%s",q->gen);
gotoxy(53,5+i);printf("%s",q->groupe);
gotoxy(63,5+i);printf("%d",q->anne_etude);
gotoxy(70,5+i);printf("%.2f",q->bourse);
q=q->next;
}

SetColor(11);
for(j=4;j<i+7;j++)
  {
    gotoxy(1,j);printf("%c",186);
    gotoxy(78,j);printf("%c",186);

  }
  gotoxy(1,7+i);printf("%c",200);for(j=0;j<76;j++)printf("%c",205);printf("%c",188);

  gotoxy(1,5);printf("%c",199);for(j=0;j<76;j++)printf("%c",196);printf("%c",182);
SetColor(15);
 // getch();
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
void stergerea_listei()
{
char ch;
gotoxy(12,5);SetColor(12);
printf("              Vous vouler efacer le fichier?\n\n\n");SetColor(15);
printf("                                  1.Oui   2.Non");
ch=getch();
if(ch!='1') {system("cls");main();}
else{
system("cls");
while(p!=NULL)
{q=p;
p=q->next;
delete q;
  gotoxy(15,5);
  SetColor(15);
printf("            La liste a ete efface");
//getch();
}
}
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
void inserctia()
{char key;
 int i,j;


     if(p==NULL)
    {gotoxy(15,5);SetColor(15);printf("Il n y a pas de liste");getch();system("cls");dinamic();}
printf("\n\n\n                               Choisisez l'option");
        SetColor(11);

gotoxy(20,5);printf("%c",201); for(i=0;i<40;i++)printf("%c",205);printf("%c",187);
for(i=6;i<13;i++)
{
    gotoxy(20,i);printf("%c",186);
    gotoxy(61,i); printf("%c",186);
}
        for(j=21;j<61;j++)
           for(i=7;i<13;i+=2)
     {gotoxy(j,i);printf("%c",196);}

gotoxy(20,13);printf("%c",200);for(i=0;i<40;i++)printf("%c",205);printf("%c",188);
SetColor(15);
gotoxy(27,6);printf("   1.Inserction a gauche   ");SetColor(34);
gotoxy(24,8);printf("   2.Inserction a droite   ");
gotoxy(24,10);printf("   3.Inserction apres un element   ");
gotoxy(24,12);printf("   4.Sortie dans le menu    ");
m_pos=1;
while(key!=13)
{
key=getch();
        if(key==224||key==0)
            key=getch();
switch(key){
    case 72:  //up
            if(m_pos>1) --m_pos;
             else m_pos=4;
            switch(m_pos)
            {
        case 1:gotoxy(27,6);SetColor(15);printf("   1.Inserction a gauche   ");
               gotoxy(24,8);SetColor(34);printf("   2.Inserction a droite   ");
               break;
        case 2:gotoxy(27,8);SetColor(15);printf("   2.Inserction a droite   ");
               gotoxy(24,10);SetColor(34);printf("   3.Inserction apres un element   ");
               break;
        case 3:gotoxy(27,10);SetColor(15);printf("   3.Inserction apres un element  ");
               gotoxy(24,12);SetColor(34);printf("   4.Sortie dans le menu   ");
               break;
        case 4:gotoxy(27,12);SetColor(15);printf("   4.Sortie dans le menu   ");
               gotoxy(24,6);SetColor(34);printf("   1.Inserction a gauche   ");
               break;
            }break;
     case 80: //down
            if(m_pos<4) m_pos++;
            else m_pos=1;
            switch(m_pos)
            {
        case 1:gotoxy(27,6);SetColor(15);printf("   1.Inserction a gauche   ");
               gotoxy(24,12);SetColor(34);printf("   4.Sortie dans le menu   ");
               break;
        case 2:gotoxy(24,6);SetColor(34);printf("   1.Inserction a gauche   ");
               gotoxy(27,8);SetColor(15);printf("   2.Inserction a droite   ");
               break;
        case 3:gotoxy(24,8);SetColor(34);printf("   2.Inserction a droite   ");
               gotoxy(27,10);SetColor(15);printf("   3.Inserction apres un element");
               break;
        case 4:gotoxy(24,10);SetColor(34);printf("   3.Inserction apres un element   ");
               gotoxy(27,12);SetColor(15);printf("   4.Sortie dans le menu   ");
               break;
            }break;
        case 13:
           switch(m_pos)
           {
        case 1:system("cls");ins_stinga();system("cls");dinamic();break;
        case 2:system("cls");ins_dreapta();system("cls");dinamic();break;
        case 3:system("cls");ins_mijloc();system("cls");dinamic();break;
        case 4:system("cls");main();break;
           }break;
}
}
}







void introducerea()
{int j;
      SetColor(11);
gotoxy(9,3);printf("%c",201);for(j=0;j<60;j++)printf("%c",205);printf("%c\n",187);
for(j=4;j<22;j++)
  {
    gotoxy(9,j);printf("%c",186);
    gotoxy(70,j);printf("%c",186);
  }
  gotoxy(9,22);printf("%c",200);for(j=0;j<60;j++)printf("%c",205);printf("%c",188);
SetColor(14);
///sfirsitul desenarii
hidecursor(0);
q=new student;
    gotoxy(15,6);
    printf("Donnez la faculte de l'etudiant(ex. FCIM):      ");SetColor(11);
    scanf("%s",q->fac);SetColor(14);fflush(stdin);

    gotoxy(15,8);SetColor(14);
    printf("Donnez le nom de l'etudiant:      ");SetColor(11);
    scanf("%s",q->nom);fflush(stdin);

    gotoxy(15,10);SetColor(14);
    printf("Donnez le prenom d'etudiant:      ");SetColor(11);
    scanf("%s",q->prenom);fflush(stdin);

    gotoxy(15,12);SetColor(14);
    printf("Donnez l'age de l'etudiant:       ");SetColor(11);
    scanf("%d",&q->age);fflush(stdin);

    gotoxy(15,14);SetColor(14);
    printf("Donnez le gen de l'etudiant(m/f): ");SetColor(11);
    scanf("%s",q->gen);fflush(stdin);

    gotoxy(15,16);SetColor(14);
    printf("Donnez la groupe de l'etudiant:   ");SetColor(11);
    scanf("%s",q->groupe);fflush(stdin);

    gotoxy(15,18);SetColor(14);
    printf("Donnez l'annee d'etude de l'etudiant(du 1 a 4):   ");SetColor(11);
    scanf("%d",&q->anne_etude);fflush(stdin);

    gotoxy(15,20);SetColor(14);
    printf("Donnez la bourse de l'etudiant:   ");SetColor(11);
    scanf("%f",&q->bourse);fflush(stdin);
    hidecursor(1);
}

///
void ins_stinga()
{
SetColor(15);
system("cls");
printf("                         Introduire l'etudiant nr. 1");
introducerea();
q->next=p;
p=q;
}

///
void ins_dreapta()
{int i=2;
SetColor(15);
system("cls");
STUDENT aux;
aux=p;
while(aux->next!=NULL)
{i++;
 aux=aux->next;
}
printf("                         Introduire l'etudiant nr. %d",i);
introducerea();
aux->next=q;
q->next=NULL;
}



///
void ins_mijloc()
{int n_pos,i=1;
  STUDENT aux;
printf("Donnez la position de l'etudiants:   ");
scanf("%d",&n_pos);
aux=p;
while(aux->next!=NULL)
{i++;
 aux=aux->next;
}printf("avem %d elemente",i);
if(n_pos>i || n_pos<2)
    printf("Gresit");
else
{i=1;
aux=p;
while(i+1!=n_pos)
{i++;
 aux=aux->next;
}
SetColor(15);
system("cls");
printf("                         Introduire l'etudiant nr. %d",i+1);
introducerea();
q->next=aux->next;
aux->next=q;
}
}



void sterge_element()
{
    if(p==NULL)
    {gotoxy(15,5);SetColor(15);printf("Il n y a pas quoi effacer");getch();system("cls");dinamic();}
int nr=1;
char key;
STUDENT aux;
///////////////////////////         numaram studentii
aux=p;
while(aux->next!=NULL)
{nr++;
 aux=aux->next;
}
///////////////////////////         sfirsitul numararii
afisarea_listei();
SetColor(15);gotoxy(15,nr+9);printf("   Appuyez sur Esc pour sortir dans le menu   ");

q=p;
SetColor(11);
gotoxy(3,6);printf("1");
gotoxy(7,6);printf("%s",q->nom);
gotoxy(19,6);printf("%s",q->prenom);
gotoxy(31,6);printf("%s",q->fac);
gotoxy(41,6);printf("%d",q->age);
gotoxy(48,6);printf("%s",q->gen);
gotoxy(53,6);printf("%s",q->groupe);
gotoxy(63,6);printf("%d",q->anne_etude);
gotoxy(70,6);printf("%.2f",q->bourse);
m_pos=1;
while(1)
{
key=getch();
        if(key==224||key==0)
            key=getch();
switch(key){
    case 72:  //up
            if(m_pos>1){ --m_pos;
aux=p;
int pos=1;
while(pos!=m_pos)
{pos++;
 aux=aux->next;
}
SetColor(11);
gotoxy(3,5+m_pos);printf("%d",m_pos);
gotoxy(7,5+m_pos);printf("%s",aux->nom);
gotoxy(19,5+m_pos);printf("%s",aux->prenom);
gotoxy(31,5+m_pos);printf("%s",aux->fac);
gotoxy(41,5+m_pos);printf("%d",aux->age);
gotoxy(48,5+m_pos);printf("%s",aux->gen);
gotoxy(53,5+m_pos);printf("%s",aux->groupe);
gotoxy(63,5+m_pos);printf("%d",aux->anne_etude);
gotoxy(70,5+m_pos);printf("%.2f",aux->bourse);


aux=aux->next;
SetColor(15);
gotoxy(3,6+m_pos);printf("%d",m_pos+1);
gotoxy(7,6+m_pos);printf("%s",aux->nom);
gotoxy(19,6+m_pos);printf("%s",aux->prenom);
gotoxy(31,6+m_pos);printf("%s",aux->fac);
gotoxy(41,6+m_pos);printf("%d",aux->age);
gotoxy(48,6+m_pos);printf("%s",aux->gen);
gotoxy(53,6+m_pos);printf("%s",aux->groupe);
gotoxy(63,6+m_pos);printf("%d",aux->anne_etude);
gotoxy(70,6+m_pos);printf("%.2f",aux->bourse);
}break;




     case 80: //down
            if(m_pos<nr) {m_pos++;

q=p;
int pos=1;
while(pos!=m_pos-1)
{pos++;
 q=q->next;
}



SetColor(15);
gotoxy(3,4+m_pos);printf("%d",m_pos-1);
gotoxy(7,4+m_pos);printf("%s",q->nom);
gotoxy(19,4+m_pos);printf("%s",q->prenom);
gotoxy(31,4+m_pos);printf("%s",q->fac);
gotoxy(41,4+m_pos);printf("%d",q->age);
gotoxy(48,4+m_pos);printf("%s",q->gen);
gotoxy(53,4+m_pos);printf("%s",q->groupe);
gotoxy(63,4+m_pos);printf("%d",q->anne_etude);
gotoxy(70,4+m_pos);printf("%.2f",q->bourse);

q=q->next;
SetColor(11);
gotoxy(3,5+m_pos);printf("%d",m_pos);
gotoxy(7,5+m_pos);printf("%s",q->nom);
gotoxy(19,5+m_pos);printf("%s",q->prenom);
gotoxy(31,5+m_pos);printf("%s",q->fac);
gotoxy(41,5+m_pos);printf("%d",q->age);
gotoxy(48,5+m_pos);printf("%s",q->gen);
gotoxy(53,5+m_pos);printf("%s",q->groupe);
gotoxy(63,5+m_pos);printf("%d",q->anne_etude);
gotoxy(70,5+m_pos);printf("%.2f",q->bourse);
}break;




        case 13:

            if(m_pos==1) {q=p; p=p->next; delete q; system("cls");
            gotoxy(15,5);SetColor(15);printf("            L'element a ete efface"); getch();system("cls");} else
if(p->next==NULL)
{system("cls");stergerea_listei();} else
    {system("cls");
q=p;
int pos=2;
while(pos!=m_pos)
{
    pos++;
    q=q->next;
}
aux=q->next;
q->next=q->next->next;
delete aux;
gotoxy(15,5);
SetColor(15);
printf("L'etudiant a ete efface");
getch();
}


system("cls");sterge_element();
break;
        case 27:system("cls");dinamic();break;
}
}
getch();
}









