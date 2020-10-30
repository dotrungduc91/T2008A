#include<stdio.h>
#include<string.h>


int dem(char s1[], char s2[]){
	int i,j,count =0,check;
	
		for(i=0;i<strlen(s1);i++){
			
			if(s1[i]==s2[0]){
				check =1;
				
				for(j=0;j<strlen(s2);j++){
					
					if(s2[j]!=s1[i+j]){
						check = 0;
						
						break;
					}	
					
			
				}
				
					if(check==1){
					count++;			
				}		
				
			}	

			
		}
	return count;
}


void Hienthi(char s1[], char s2[]){
	int i,j,check,k;
	
	for(i=0;i<strlen(s1);i++){
			
			if(s1[i]==s2[0]){
				check =1;
				
				for(j=0;j<strlen(s2);j++){
					
					if(s2[j]!=s1[i+j]){
						check = 0;
						
						break;
					}	
				}
			if(check==1){
				printf("\n");
				printf("%s", s2);
				for(k=i+strlen(s2);k<strlen(s1);k++){
					printf("%c",s1[k]);
				}
				
			}				
			}
				
		}	
	
}


int main(){
	char s1[200], s2[200];
	printf("Nhap chuoi ban dau s1: ");
	gets(s1);
	printf("Nhap chuoi tim kiem trong s1 la s2: ");
	gets(s2);
	
	
	printf("Chuoi s2 xuat hien trong chuoi s1 %d lan", dem(s1,s2));
	
	Hienthi(s1,s2);
	
	
    return 0;
}
