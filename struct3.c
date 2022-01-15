#include <stdio.h>
struct Emp
{
int empid;
  float salary,hra,da;
  char name[20];
  char designation[40];
} per;
float Salary(struct Emp x);
main()
{
	
printf("enter the employee name\n");
gets(per.name);
printf("enter the employee designation name\n");
   scanf("%s",&per.designation);
   printf("\nenter the employee ID\n");
  scanf("%d",&per.empid);
  scanf("%f\n",&per.hra);
  scanf("%f",&per.da);
  scanf("%f",&per.salary);
  printf("The Total salary:%.3f",Salary(per));
return 0;
}
float Salary(struct Emp x)
{
float Sal=x.salary+(x.salary*(x.hra/100))+(x.salary*(x.da/100));
return Sal; 
}
