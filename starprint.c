// #include<stdio.h>
// int main(){

//   printf("    *\n");
//   printf("   **\n");
//   printf("  ***\n");
//   printf(" ****\n");
//   printf("*****\n");
//   return 0;
// }

//  #include<stdio.h>
//   int main(){
//   char name[5];
//   printf("enter your name:");
//   scanf("%4s",name);
//   printf("welcome %s  to our website",name);
//   return 0 ;
// }
//  #include<stdio.h>
//   int main(){
//   char firstName[10];
//   char lastName[10];
//   int age;
//   printf("enter your first name:");
//   scanf("%s",firstName);
//   printf("enter your last name:");
//   scanf("%s",lastName);
//   printf("enter your age:");
//   scanf("%d",age);
//   printf("first name:%s\n",firstName);
//   printf("last name:%s\n",lastName);
//   printf("age:%s\n",age);

//   return 0 ;
// }


//  #include<stdio.h>
//  #define pi 3.14
//  int main(){
//     float r ;
//     float circumference;
//     printf("enter radius of circle:");
//     scanf("%f",&r);
//     circumference=2*pi*r;
//     printf("circumference of circle is:%f\n",circumference);
//   return 0 ;
// }

//  #include<stdio.h>
//   int main(){
//  int a=7;
//  printf("%zu",sizeof a);
//   return 0 ;
// }

 #include<stdio.h>
  int main(){
 int a,b,temp;
 printf("enter a:\n");
 scanf("%d",&a);
 printf("enter b:\n");
 scanf("%d",&b);
 temp=a;
 a=b;
 b=temp;
 printf("so swap number a is:%d",a);
  return 0 ;
}