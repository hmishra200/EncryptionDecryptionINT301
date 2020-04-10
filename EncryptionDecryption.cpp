#include<stdio.h>
void encrypt();
void decrypt();
int main()
{
printf("press 1 to encrypt message\n");
printf("pres 2 to decrypt message");
int n;
scanf("%d",&n);

if(n==1)
{
	encrypt();
}
else if(n==2)
{
	decrypt();
}
else 
printf("wrong input");
}
void encrypt()
{
 char str_message[500], word;

  int j, key;

  printf("Enter a message to encrypt: ");

  scanf("%s",str_message);

  printf("Enter the key: ");

  scanf("%d", &key);

  for(j = 0; str_message[j] != '\0'; ++j){

    word = str_message[j];

    if(word >= 'a' && word <= 'z'){

      word = word + key;

      if(word > 'z'){

        word = word - 'z' + 'a' - 1;

      }

      str_message[j] = word;

    }

    else if(word >= 'A' && word <= 'Z'){

      word = word + key;

      if(word > 'Z'){

        word = word - 'Z' + 'A' - 1;

      }

      str_message[j] = word;

    }

  }

  printf("Encrypted message: %s", str_message);

}

void decrypt()
{

 char str_message[500], word;

  int j, key;

  printf("Enter a message to decrypt: ");

  scanf("%s",str_message);

  printf("Enter key: ");

  scanf("%d", &key);

  for(j = 0; str_message[j] != '\0'; ++j){

    word = str_message[j];

    if(word >= 'a' && word <= 'z'){

      word = word - key;

      if(word < 'a'){

        word = word + 'z' - 'a' + 1;

      }

      str_message[j] = word;

    }

    else if(word >= 'A' && word <= 'Z'){

      word = word - key;

      if(word < 'A'){

        word = word + 'Z' - 'A' + 1;

      }

      str_message[j] = word;

    }

  }

  printf("Decrypted message: %s", str_message);
}


