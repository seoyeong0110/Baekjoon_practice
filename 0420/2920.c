#include <stdio.h>

int main(void){
	int sound[9];
	int count = 0, discount = 0;
	for(int i = 0; i < 8 ; i++){
		scanf("%d",&sound[i]);		//sound[i]�� ���� ���� �迭 ������� �Է¹���  
	}
	for(int j = 1; j < 8 ; j++){	//���� ũ�⸦ ���ϱ� ���� for�� 7�� �ݺ�  
									//printf("sound[%d]:%d\n",j,sound[j]);
		if(sound[j]>sound[j-1]){ 	//sound[0]���� sound[7]���� ������� ��	 
			count++;
									//printf("count:%d\n",count);
		}else if(sound[j]<sound[j-1]){ 
			discount++;
									//printf("discount:%d\n",discount);
		}
	}
									//printf("%d %d",count,discount);
	if(count==7){
		printf("ascending");
	}else if(discount==7){
		printf("descending");
	}else{
		printf("mixed");
	}
	return 0;
} 
