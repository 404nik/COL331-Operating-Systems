# include "types.h"
# include "user.h"
# include "fcntl.h"

void foo(){
	printf(1, "SECRET_STRING");
}

void vulnerable_function( char* input){
	char buffer[4];
	strcpy(buffer , input) ;
}

int main (int argc , char **argv)
{
	int fd = open ("payload", O_RDONLY) ;
	char payload [100];
	read (fd, payload, 100) ;
	vulnerable_function(payload) ;
	exit() ;
}
