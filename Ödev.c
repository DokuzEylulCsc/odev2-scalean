
# include <stdio.h> 
# include <string.h>
# include <conio.h>
# include <stdlib.h>

int main()

{
    char sayi;
    printf("Merhaba çevrilmesini istediğiniz sayı romen rakamı ise r onluk sistemde bir sayı ise o yazın:");
    scanf("%c",&sayi);
    if (sayi =='o' || sayi =='O')
    {
        int numara; 

    
        printf("Romen numarasına çevirmek istediğin sayıyı gir\n");

        scanf("%d", &numara);

    

        while(numara > 0)
    
        {

              if(numara >= 1000)

              {

                     printf("M");

                     numara-=1000;

              }

              else if(numara >= 900)

              {

                   printf("CM");

                   numara-=900;

              }

              else if(numara >= 500)

              {

                   printf("D");

                   numara-=500;

              }

              else if(numara >= 400)

              {

                   printf("CD");

                   numara-=400;

              }

              else if(numara >= 100)

              {

                   printf("C");

                   numara-=100;

              }

              else if(numara >= 90){

              	   printf("XC");

              	   numara -= 90;

			  }

              else if(numara >= 50)

              {

                   printf("L");

                   numara-=50;

              }

              else if(numara >= 40)

              {

                   printf("XL");

                   numara-=40;

              }

              else if(numara >= 10)

              {

                   printf("X");

                   numara-=10;

              }

              else if(numara >= 9)

              {

                   printf("IX");

                   numara-=9;

              }

              else if(numara >= 5)

              {

                   printf("V");

                   numara-=5;

              }

              else if(numara >= 4)

              {

                   printf("IV");

                   numara-=4;

              }

              else

              {

                  printf("I");

                  numara-=1;

              }

        }
    
    }
    else if (sayi == 'r'|| sayi=='R');
    {
        int a[100],len,i,j,k; 
char romen[100];
printf("Romen rakamı girin:\n"); 
scanf("%s",romen); 
len=strlen(romen); 
for(i=0; i<len; i++) 
    {
     if(romen[i]=='I') 
     a[i]=1; 
     else if(romen[i]=='V') 
     a[i]=5; 
     else if(romen[i]=='X') 
     a[i]=10; 
     else if(romen[i]=='L') 
     a[i]=50; 
     else if(romen[i]=='C') 
     a[i]=100; 
     else if(romen[i]=='D') 
     a[i]=500; 
     else if(romen[i]=='M') 
     a[i]=1000; 
     else 
     { 
     printf("\nGeçersiz Değer"); 
     exit(0); 
     } 
 } 
     k=a[len-1]; 
     for(i=len-1; i>0; i--) 
    { 
     if(a[i]>a[i-1]) 
     k=k-a[i-1]; 
     else if(a[i]==a[i-1] || a[i]<a[i-1]) 
     k=k+a[i-1]; 
     } 
     printf("Ondalık karşılığı:"); 
     printf("%d\n",k); 
     return 0;

    }

        printf("\n");

        system("pause");

}