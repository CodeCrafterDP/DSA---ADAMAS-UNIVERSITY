# include <stdio.h>
 int main(){
     int marks[10],i,j,temp;

     printf("Enter marks of 10 students:\n");
      for (i=0;i<10; i++){
        scanf("%d",&marks[i]);
      }


      for(i=0; i<9;i++){
        for(j=0; j<9-i; j++){
          if(marks[j]>marks[j+1]){
            temp=marks[j];
            marks[j]=marks[j+1];
            marks[j+1]=temp;
          }
        }
      }

      printf("Marks in ascending order:\n");
      for(i=0; i<10; i++){
        printf("%d ", marks[i]);
      }

      return 0;
 }