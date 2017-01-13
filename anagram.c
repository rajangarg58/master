/*#include<stdio.h>
int main()
{
    int i,sum=0,len=0,len1=0,j=0;;
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    len=strlen(str1);
	len1=strlen(str2);
	if(len==len1){
    for(i=0;i<len;i++){
    for(j=0;j<len1;j++)
    {
        if(str1[i]==str2[j]){
		sum++;
		break;}
    }}
    if(sum==len)
        printf("YES%d",len);
    else
        printf("NO%d",len1);}
else
{
printf("NO%d",len1);
}
}*/
#include <stdio.h>
int main() {
    char S1[100], S2[100];
    int ch1[256]={0}, ch2[256]={0};
    int i, flag=0;
    
    gets(S1);
    gets(S2);
    
    for(i=0; S1[i]!='\0'; i++)
        ch1[S1[i]]++;

    for(i=0; S2[i]!='\0'; i++)
        ch2[S2[i]]++;
        
    for(i=0; i<256; i++)
        if(ch1[i]!=ch2[i])
            {
                flag=1;
                break; 
            }   
    if(flag==0)
        printf("YES%d", strlen(S2));
    else
        printf("NO%d", strlen(S2));
return 0;
}

