int main()
{
    int k,a,b,c,d,e,f; 
    char x=32;
    scanf("%d",&k);
    printf("%d %d %d %d",k/86400,k%86400/3600,k%86400%3600/60,k%86400%3600%60);
}