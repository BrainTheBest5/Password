#include <stdio.h>
#include <string.h>

int main(){
	char pwd[] = "Lorem ipsum";
	printf("Per favore inserire la password per continuare: ");
	scanf("%s", pwd);
	while(strcmp(pwd, "Keller")!=0){
		printf("La password inserita non è corretta, per favore riprovare.\n");
		printf("Inserire la password: ");
		scanf("%s", pwd);
	}
	printf("Password corretta, login effettuato con successo.");
	return 0;
}
