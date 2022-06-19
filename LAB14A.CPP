 #include<stdio.h>
 #include<conio.h>
 void main()
 {

    struct student
    {
      char n[20];
      int id;
    }s1;
    clrscr();
    printf("enter name of student");
    scanf("%s",&s1.n);
    printf("enter id of student");
    scanf("%d",&s1.id);
    printf("\n The name of student is %s",s1.n);
    printf("\tStudent's ID number is %d",s1.id);
    getch();
 }