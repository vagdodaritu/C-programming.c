#include<stdio.h>
int main()
{

    printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
    int choice;
    float total=0;
    printf("Welcome to Foodies restaurant");
    printf("Menu");
    printf("1.Burger=150 rs.\n");
    printf("2.Pizza=200 rs.\n");
    printf("3.Pasta=120 rs.\n");
    printf("4.Sandwich=100 rs.\n");
    printf("5.French Fries=80 rs.\n");
    printf("Enter o to finish ordering\n");
    while(1){
      printf("Enter the number of the item you want to order: ");
      scanf("%d",&choice);
      if(choice==0)
      {
          break;
      }
      switch(choice)
      {
          case 1:
           total+=150;
           printf("Burger add\n");
          break;
          case 2:
            total+=200;
            printf("Pizza add\n");
            break;
          case 3:
            total+=120;
            printf("Pasta add\n");
            break;
          case 4:
            total+=100;
            printf("Sandwich add\n");
            break;
          case 5:
            total+=80;
            printf("French Fries add\n");
            break;
          default:
            printf("Invalid choice. Try again");
      }

    }
    printf("Total amount to pay:rs.%2f\n",total);
    printf("Thank You");

    return 0;
}


