//STRUCTURE - USER DEFINED DATA TYPE

#include <stdio.h>
struct student{
  int id_num ;
  char name[30],rollnum[10];
  
};
int main(){
  int n ,i;
  printf("Enter the number of data to store in the structure array : ");
  scanf("%d",&n);
  struct stu[n];
  for(i=0 ; i<n ; i++){
    printf("Enter id number : "); scanf("%d",stu[i].id_num); fflush(stdin);
    printf("Enter name : "); gets(&stu[i].name);
    printf("Enter roll number : "); gets(&stu[i].rollnum);
  }
  return 0;
}
