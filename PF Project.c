#include <stdio.h>
#include <math.h>
void addition(){
    float a,b;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    printf("Result is %.2f\n",a+b);
} 
void subtract(){
     float a,b;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    printf("Result is %.2f\n",a-b);
}
void multiply(){
     float a,b;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    printf("Result is %.2f\n",a*b);
}
void division(){
     float a,b;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    if (b!=0){
    printf("Result is %.2f\n",a/b);
}
}
void sine(){
    double angle; 
    printf("Enter angle:");
    scanf("%lf",&angle);
    printf("Result is %.2f\n",sin(angle));
}
void cosine(){
    double angle;
    printf("Enter angle:");
    scanf("%lf",&angle);
    printf("Result is %.2f\n",cos(angle));
}
void tangent(){
    double angle;
    printf("Enter angle:");
    scanf("%lf",&angle);
    printf("Result is %.2f\n",tan(angle));
}
void squareroot(){
    double value;
    printf("Enter two numbers:");
    scanf("%lf",&value);
    if(value<0){
        printf("Error\n");
        return;
    }
        printf("result is %.2f",sqrt(value));
    
}
void power(){
	double base,exponent;
	printf("Enter number: ");
	scanf("%lf %lf",&base,&exponent);
	printf("Result is %.2f\n",pow(base,exponent));
}
int main() {
int choice;
for(;;){
    printf("Welcome to calculator\n");
     printf("1:Addition\n");
       printf("2:Subtract\n");
     printf("3:Multiply\n");
      printf("4:Divide\n");
      printf("5:Sine\n");
      printf("6:Cosine\n");
      printf("7:Tangent\n");
      printf("8:Squareroot\n");
      printf("9:power\n");
      printf("10:Exit\n");
	printf("Enter your choice:\n");
      scanf("%d",&choice);
      
      switch(choice){
      case 1: addition();
      break;
      
      case 2: subtract();
      break;
      
      case 3: multiply();
      break;
      
      case 4: division();
      break;
      
      case 5: sine();
      break;
      
      case 6: cosine();
      break;
      
      case 7: tangent();
      break;
      
      case 8: squareroot();
      break;
      
      case 9: power();
      break;
      
      case 10:
      printf("Goodbye");
      return 0;
      
      default:
      printf("Wrong variable");
}
}
return 0;
}
