# include <stdio.h>
# include <string.h>

int main( )
{
	FILE *filePointer ;
	char data[50] = "Hello welcome to jiit.";
	filePointer = fopen("file.txt", "w") ;

	if ( filePointer == NULL ) {
		printf( "File failed to open" ) ;
	}

	else {
        printf("File gets opened.\n") ;

		if(strlen(data)>0 ) {
			fputs(data, filePointer) ;
			fputs("\n", filePointer) ;
		}

		fclose(filePointer) ;

		printf("Data gets written in the file \n");
		printf("File gets closed \n") ;
	}

	return 0;
}
