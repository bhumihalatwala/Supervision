#include <stdio.h>

struct structure
{
	int rollno;
	char name[100];
	int chem_marks;
	int math_marks;
	int phy_marks;
}stu[5];

int main()
{

	
	int i;
	
	for(i= 0; i < 5; i++)
	{
		printf("Enter details of student %d : \n",i + 1);
		printf("Roll no => ");
		scanf("%d",&stu[i].rollno);
		printf("Name => ");
		fflush(stdin);
		scanf("%s",&stu[i].name);
		printf("Chemistry => ");
		scanf("%d",&stu[i].chem_marks);
		printf("Maths => ");
		scanf("%d",&stu[i].math_marks);
		printf("Physics => ");
		scanf("%d",&stu[i].phy_marks);
		printf("\n");
	}
	
	int total;
	float percent;
	
	for(i= 0, total = 0, percent = 0; i < 5 ; i++)
	{
		printf("%s (%d)\n",stu[i].name,stu[i].rollno);
		printf("Chemistry => %d\n",stu[i].chem_marks);
		printf("Maths => %d\n",stu[i].math_marks);
		printf("Physics => %d\n",stu[i].phy_marks);
		
		total = stu[i].chem_marks + stu[i].math_marks + stu[i].phy_marks;
		
		printf("Total => %d / 300\n",total);
		
		percent = (total * 100) / 300;
		
		printf("Percent => %f%%\n",percent);
		printf("\n");
	}
	
	return 0;
}
