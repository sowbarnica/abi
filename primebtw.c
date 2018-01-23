 #include<stdio.h>
   int main(){
                 int d, n1, n2, k, r;
                 printf("\n Enter any two Numbers : ");
                 scanf("%d %d",&n1,&n2);
                 printf("\n\n The Prime Numbers between the given Two Intervals are . . . \n ");
                 for(d=n1; d<=n2; ++d)
                 {
                  r=0;
                  for(k=2;k<=n/2;k++){
                  if((d % k) == 0){
                  r++;
                  break;
                  }
                  }
                  if(r==0)
                  printf("\n %d ", d);
                  }
                  getch();
   return 0;
   }
