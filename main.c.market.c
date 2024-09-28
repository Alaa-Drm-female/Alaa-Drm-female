#include<stdio.h>
int main(){
    int sections;
    int types_of_items_foods;
    float cost1,ccost2,cost3;
    int number_of_items;
    int types_of_home_items;
    float cost4,cost5,cost6;
   float cost7,cost8,cost9;
   int types_of_children_section;
   char currency='$';
    printf("Select the section you'd buy from it \n ");
    printf("1)foods sections \n2)home section\n3)children section \n");
    scanf("%d",&sections); 

    if (sections ==1)
    {
      printf("welcome to the  foods section \n");
      printf("The items here:\n");
      printf("\n1_flour\n2_chickpeas\n3_red lentils\n");
        printf("Enter you choose PLEASE:\n");
      scanf("%d",&types_of_items_foods);
    

      switch (types_of_items_foods)
      {
      case 1:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost1 = number_of_items*70 ;
                printf("the cost of the flour you buoght it is = %f %c\n",cost1,currency);
                break;


    case 2:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                ccost2 = number_of_items*12.5 ;
                printf("the cost of the chickpeas you buoght it is = %f %c\n",ccost2,currency);
                break;     
        case 3:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost3 = number_of_items*10.6 ;
                printf("the cost of the red lentils you buoght it is = %f %c\n",cost3,currency);
                break;
      
      }


        


    }
    else if (sections==2)
    {
        

   printf("welcome to the  home  section \n");
      printf("The itemes here now :\n");
      printf("\n1_pans\n2_teamegs\n3_mixture\n");
        printf("Enter you choose PLEASE:\n");
      scanf("%d",& types_of_home_items);


    

      switch (types_of_home_items)
      {
      case 1:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost4= number_of_items*100 ;
                printf("the cost of the pans you buoght it is = %f%c\n",cost4,currency);
                break;


    case 2:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost5 = number_of_items*20.5 ;
                printf("the cost of the teamegs  you buoght it is = %f %c\n",cost5,currency);
                break;     
        case 3:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost6= number_of_items*250.7 ;
                printf("the cost of the mixture you buoght it is = %f%c\n",cost6,currency);
                break;
      
      }

    }

    else if (sections==3)
    {
     



   printf("welcome to the  children  section \n");
      printf("The itemes here now :\n");
      printf("\n1_brain toyes\n2_buzzles\n3_stores\n");
        printf("Enter you choose PLEASE:\n");
      scanf("%d",& types_of_children_section);

    

      switch (types_of_children_section)
      {
      case 1:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost7= number_of_items*50.9 ;
                printf("the cost of the brain toyes you buoght it is = %f%c\n",cost7,currency);
                break;


    case 2:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost8 = number_of_items*25;
                printf("the cost of the buzzles you buoght it is = %f%c\n",cost8,currency);
                break;     
        case 3:
                printf("Enter the number the itemes you bought it :\n");
                scanf("%d",&number_of_items);
                cost9= number_of_items*10.5 ;
                printf("the cost of the mixture you buoght it is = %f%c\n",cost9,currency);
                break;
      
      }



    }
}
