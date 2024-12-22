#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Students{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[12];
};
void sortByName(struct Students sv[]){
	for(int i = 0; i < 5; i++){
		int index = i;
		for(int j = i; j < 5; j++){
			if(sv[index].fullName[0] < sv[j].fullName[0]){
				index = j;
			}
		}
		struct Students temp = sv[i];
		sv[i] = sv[index];
		sv[index] = temp;
	}
	printf("Thong tin sinh vien truoc sau sap xep\n\n");
	for(int i = 0; i < 5; i++){
		printf("%d, %s, %d, %s\n\n", sv[i].id, sv[i].fullName, sv[i].age, sv[i].phoneNumber);
	}
}
int main(){
	struct Students sv[5] = {
		{1, "HS A", 18, "111"},
		{2, "HS B", 19, "222"},
		{3, "HS C", 20, "333"},
		{4, "HS D", 21, "444"},
		{5, "HS E", 22, "555"}
	};
	printf("Thong tin sinh vien truoc khi sap xep\n\n");
	for(int i = 0; i < 5; i++){
		printf("%d, %s, %d, %s\n\n", sv[i].id, sv[i].fullName, sv[i].age, sv[i].phoneNumber);
	}
	sortByName(sv);
	return 0;
}
