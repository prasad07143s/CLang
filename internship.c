#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int choice;
struct Student
{
 char name[20];
 int age;
 float cgpa;
 int student_id;
 int tenure;
};
void add()
{
 struct Student *p;
 p = (struct Student *)malloc(sizeof(struct Student));
 system("cls");
 system("color E");
 printf("\n\n<=====================================> Register For Internship <=====================================>\n");
 printf("\n\nEnter Name Of The Student : ");
 scanf("%s", &p->name);
 printf("\n\nEnter The Age : ");
 scanf("%d", &p->age);
 printf("\n\nEnter The CGPA : ");
 scanf("%f", &p->cgpa);
 printf("\n\nEnter The Student ID (Ex: 1234) : ");
 scanf("%d", &p->student_id);
 printf("\n\nEnter The Tenure Of Internship (In Months) : ");
 scanf("%d", &p->tenure);
 if ((p->age < 18) || (p->cgpa > 10) || (p->cgpa < 8) || (p->age > 40))
 {
 printf("\n\nSorry You Are Not Eligible For Internship !\n\n");
 printf("\n\nPress Any Key To Continue....");
 getch();
 main();
 }
 FILE *ptr = fopen("sample.txt", "w");
 if (ptr == NULL)
 {
 printf("\n\nError Storing The Record !\n\n");
 }
 else
 {
 fprintf(ptr, "<=======================================--> RECORD <--=======================================>\n\nName : %s\nAge : %d\nCGPA : %.2f\nStudent Id : %d\nTenure Of Internship : %d Months", p->name, p->age, p->cgpa, p->student_id, p->tenure);
 printf("\n\nRegistration Successful !\n\n");
 printf("Record Successfully Saved In Your Local Computer !\n\n");
 printf("Press Any Key To Continue....");
 getch();
 }
 fclose(ptr);
}
void view()
{
 int ch;
 FILE *ptr = fopen("sample.txt", "r");
 system("cls");
 system("color 3");
 if (ptr == NULL)
 {
 printf("\n\nRecord Not Found !\n\n");
 }
 else
 {
 printf("\n\nRecord Opened Successfully !\n\n");
 while ((ch = fgetc(ptr)) != EOF)
 {
 printf("%c", ch);
 }
 printf("\n\nPress Any Key To Continue....");
 getch();
 }
 fclose(ptr);
}
void menu()
{
 system("cls");
 system("color A");
 
printf("\n\n<===========================>MENU<===========================>\n\n1.Register For Internship\n\n2.View Existing Details\n\n3.Check Eligibility Criteria\n\n4.Exit\n\nChoose An Option : ");
 scanf("%d", &choice);
}
void elig()
{
 system("cls");
 system("color B");
 printf("\n\n<===========================================> Eligibility Requirements <===========================================>\n\n\n* You Must Be Above 18 Years And Below 40 Years Of Age\n\n* Minimum CGPA Of 8.00 is Required\n\n* You Must Be An Indian Citizen\n\n");
 printf("\n\nPress Any Key To Continue....");
 getch();
}
int main()
{
 int password = 1729, pass, i = 0;
 static int count = 0;
 char x;
 if (count == 0)
 {
 printf("\n\nEnter The PIN : ");
 scanf("%d", &pass);
 while (pass != password)
 {
 printf("\n\nHint : It Is The Smallest Number That Can Be Expressed As Sum Of Cubes Of Two Different Numbers In Two Different Ways !\n\n");
 printf("\n\nIncorrect Password ! Press 't' to Try Again !\n\n");
 x = getch();
 if (x != 't')
 {
 exit(0);
 }
 else
 {
 system("cls");
 printf("\n\nEnter The PIN : ");
 scanf("%d", &pass);
 }
 }
 printf("\n\nPIN Matched !\n\n");
 printf("\n\nLoading \xB2\xB2");
 while (i < 5)
 {
 printf("\xB2");
 sleep(1);
 i++;
 }
 count++;
 }
 system("cls");
 system("color f");
 printf("\n\n<+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-> Welcome To The PSD Portal For Internship <+-+-+-+-+-+-+-+-+-+-+-+-+-+-+->\n\n\n");
 printf("\nPress Any Key To Continue....");
 getch();
 while (choice != 4)
 {
 menu();
 switch (choice)
 {
 case 1:
 add();
 break;
 case 2:
 view();
 break;
 case 3:
 elig();
 break;
 case 4:
 printf("\n\n<--------------------------> Thank You ! <-------------------------->\n\n");
 exit(0);
 break;
 default:
 printf("Invalid Input ! Press Any Key To Try Again !");
 getch();
 }
 }
 getch();
 return 0;
}
