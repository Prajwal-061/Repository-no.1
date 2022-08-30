#include<stdio.h>
struct employee
{
	char emp_name[100];
	int emp_id;
	char emp_adress[100];
	int salary;	
};
int main()
{
	struct employee a[100];
	int i;
	for(i=1;i<=5;i++)
	{
		printf("enter employee name:\n");
		scanf("%s",&a[i].emp_name);
		printf("enter employee id:\n");
		scanf("%d",&a[i].emp_id);
		printf("enter employee adress:\n");
		scanf("%s",&a[i].emp_adress);
		printf("enter employee salary:\n");
		scanf("%d",&a[i].salary);	
	}
	for(i=1;i<=5;i++)
	{
		printf("Name of the employee is %s whose id is %d living in the adress %s and having salary %d\n",a[i].emp_name,a[i].emp_id,a[i].emp_adress,a[i].salary);
			}
			return 0;
	
}
