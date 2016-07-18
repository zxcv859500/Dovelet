int main()    
{    
    int a,b;    
    scanf("%d %d",&a,&b);    
          
    if(a%2==0&&b%2==1){    
        printf("odd+even=odd\n");    
        printf("odd*even=even\n");    
    }else if(b%2==0&&a%2==1){    
        printf("even+odd=odd\n");    
        printf("even*odd=even\n");    
    }else if(b%2==1&&b%2==1){    
        printf("odd+odd=even\n");     
        printf("odd*odd=odd\n");     
    }else if(a%2==0&&a%2==0){   
        printf("even+even=even\n");   
        printf("even*even=even\n");   
}   
    
}   