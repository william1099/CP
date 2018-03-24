#include <bits/stdc++.h>

using namespace std;

int main() {
	int i;
	char *postchar,ch,str2[101];
	char str[101]="qwertyuiopasdfghjkl;zxcvbnm,./";
	ch=getchar();
	cin>>str2;
	for (i=0; i<=strlen(str2)-1; i++) {
		postchar=strchr(str,str2[i]);
		if (ch=='L') {
			cout<<str[postchar-str+1];
		}
		else {
			cout<<str[postchar-str-1];
		}
	}
	printf("\n");
}


/*      REFERENCE  
// MOLE is typing to the right or to the left of  3 rows of keys
//   qwertyuiop
//   asdfghjkl;
//   zxcvbnm,./
// encoded as:   !qwertyuiop!asdfghjkl;!zxcvbnm,./!
// where '!' detects input errors

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main( void )
{
  int i;
  char ch;
  char str2[101];
  char kstr1[50];
  char *poschar;        // pointer to char
  int int_poschar = 0;
  int translated_position = 0;
  int right = 0;
  int left = 0;

  strcpy( kstr1, "!qwertyuiop!asdfghjkl;!zxcvbnm,./!" );

  printf( "\n Please enter R or L and press enter\n" );

  scanf( " %c ", &ch );
  ch = toupper( ch );

  if ( ch == 'R' || ch == 'L' ) ; // good input say nothing
  else
  {
    printf( "\nPlease try again with L or R  ( or l or r ) " );
    exit( 0 );
  }

  printf( "\n Please enter a word and press enter\n" );

  scanf( " %100s", str2 );
  strcpy( str2, strlwr( str2 ) );

  if ( ch == 'R' )
  {
    printf( "\nRIGHT translate:\n%s\n", str2 );
    right = 1;
  }
  else if ( ch == 'L' )
  {
    printf( "\nLEFT translate:\n%s\n", str2 );
    left = 1;
  }

  getchar(  );

  for ( i = 0; str2[i]; i++ )
  {
    poschar = strchr( kstr1, str2[i] );
    if ( poschar != NULL )
    {
      int_poschar = poschar - kstr1;    // find prev pos in array

      if ( right )
    translated_position = int_poschar - 1;
      else if ( left )
    translated_position = int_poschar + 1;
      else
      {
    printf( "\n you've got a bug !" );
    exit( 0 );
      }

      if ( kstr1[translated_position] == '!' )
      {
    if ( right )
      printf( "\n not possible, MOLE wrote 1 key to the right" );
    else
      printf( "\n not possible, MOLE wrote 1 key to the left" );

    getchar(  );
    exit( 0 );
      }
      printf( "%c", kstr1[int_poschar - 1] );
    }               // endif ( poschar != NULL )

  }
  exit( 0 );
}

int main() {
	char str[101]="qwertyuiopasdfghjkl;zxcvbnm,./",str2[101],ch;
	ch=getchar();
	cin>>str2;
	for (i=0; i<=strlen(str2)-1; i++) {
		for (j=0; j<=strlen(str)-1; j++) {
			if (str2[i]==str[j]) {
				if (ch=='L') {
					printf("%c",str[j+1]);
				}
				else {
					printf("%c",str[j-1]);
				}
			}
		}
	}
	pritnf("\n");
}
*/
