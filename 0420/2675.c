#include <stdio.h>
#include <string.h>	//strlen ��� ������� 

int main(void){
	int T, R, len;
	char S[21]={0};
	scanf("%d",&T); 	//��ü �ݺ� Ƚ�� T�� �Է�	 
	for(int i = 0; i < T; i++){		//��ü �ݺ� Ƚ�� ��ŭ for�� �ݺ�	 
		scanf("%d",&R);
		scanf("%s",S);
		len=strlen(S);
		for(int j = 0; j < len; j++){		//�Է¹��� S ���ڿ��� ���� ��ŭ for�� �ݺ� 
			for(int k = 0; k < R; k++){		//�Է¹��� R �ݺ��� ��ŭ for�� �ݺ�	 
				printf("%c",S[j]);			//�Է¹��� S���ڿ��� j��° �� ���  
			}
		}
		printf("\n");
	}
	return 0;
	
}
