
 #include<stdio.h>
  int main(){
   int age;
   printf("enter you age\n");
   scanf("%d",&age);
   if(age>=18){
    printf("you are eligible for vote");
   }else{
    printf("you are below 18 nibbe");
   }
  return 0 ;
}

 #include<stdio.h>
 #include<math.h>
  int main(){
 float num1,num2,result;
 printf("enter num1\n");
 scanf("%f",&num1);
 printf("enter num2\n");
 scanf("%f",&num2);
result=fmod(num1,num2);
printf("result is %f\n",result);
  return 0 ;
}

#include <stdio.h>

int main() {
 int a = 3.66;
 float b;
 b = (float) a;
 printf("The float value of a is:%f\n", b);
 return 0;
}
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    }
    else {
        printf("%c is not a letter.\n", ch);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int x1 = 0, y1 = 0, x2 = 5, y2 = 5;
    int x, y;
    printf("Enter the point coordinates (x y): ");
    scanf("%d %d", &x, &y);
    if (x > x1 && x < x2 && y > y1 && y < y2) {
        printf("The point (%d, %d) is inside the rectangle.\n", x, y);
    }
    else if ((x == x1 || x == x2) && (y >= y1 && y <= y2) || (y == y1 || y == y2) && (x >= x1 && x <= x2)) {
        printf("The point (%d, %d) is on the boundary of the rectangle.\n", x, y);
    }
    else {
        printf("The point (%d, %d) is outside the rectangle.\n", x, y);
    }
    return 0;
}
