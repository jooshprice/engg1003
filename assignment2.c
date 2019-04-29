#include <stdio.h>
#include <ctype.h>
#include <string.h>
char substitutionencode() { //Encode a given phrase
    char phrase[1000], character;
	int i, offset;
	printf("Enter message to encode: ");
	scanf("%s", &phrase);
	printf("Enter offset: ");
	scanf("%d", &offset);

	for(i = 0; phrase[i] != '\0'; ++i){ //For each character in the phrase
		character = phrase[i];
        if(character >= 'A' && character <= 'Z'){
			character = character + offset;
			if(character > 'Z'){character = character - 'Z' + 'A' - 1;}
            phrase[i] = character; //Change the character according to the given offset
		}
	}
	printf("Encoded message: %s", phrase);
    return phrase;
}

char substitutiondecode() { //Decode a given phrase
    char phrase[1000], character;
	int i, offset;
	printf("Enter a message to decode: ");
	scanf("%s", &phrase);
	printf("Enter offset: ");
	scanf("%d", &offset);

	for(i = 0; phrase[i] != '\0'; ++i){
		ch = phrase[i];
		if(character >= 'A' && ch <= 'Z'){ //For each character in the phrase
			character = character - offset;
			if(character < 'A'){ character = character + 'Z' - 'A' + 1;}
            phrase[i] = character; //Change the character according to the given offset
		}
	}
	printf("Decoded message: %s", phrase);
	return phrase;
}

int main() {
    int choice = 0;
    printf("Choose between: | subtitution encode: 1 | substitution decode: 2 |");
    scanf("%d",&choice);
    if (choice == 1) {
        char encode;
        encode = substitutionencode();
        printf("%s",encode);
    }
    else if (choice == 2) {
        char decode;
        decode = substitutiondecode();
        printf("%s",decode);
    }

    return 0;
}



