#include<stdio.h>
struct student{
   int sno;
   char sname [30];
   float marks;
   char temp;
};
int main ( ){
   struct student s[60];
   int i;
   int n;
   FILE *fp;
   fp = fopen ("ques21.txt", "w");
   printf("Enter the number of student details you want to enter :");
   scanf("%d",&n);
   for (i=0; i<n; i++){
      printf ("enter details of student %d\n", i+1);
      printf("student number:");
      scanf("%d",&s[i].sno);
      scanf("%c",&s[i].temp);
      printf("student name:");
      gets(s[i].sname);
      printf("student marks:");
      scanf("%f",&s[i].marks);
      fwrite(&s[i], sizeof(s[i]),1,fp);
   }
   fclose (fp);
   fp = fopen ("ques21.txt", "r");
   for (i=0; i<2; i++){
      printf ("details of student %d are\n", i+1);
      fread (&s[i], sizeof (s[i]) ,1,fp);
      printf("student number = %d\n", s[i]. sno);
      printf("student name = %s\n", s[i]. sname);
      printf("marks = %f\n", s[i]. marks);
   }
   fclose(fp);
   return 0;
}