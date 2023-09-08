/* file - a data stored permanently on the disk
is of normal and binary form
fopen() - used to open an exsisting or new file
fprintf() - writting data into the available file
fscan() - reading any data from the file
fputc() - writing any character in the data of the file
fgetc() - reading any character in the data of the file
fcolse() - close the file program
fseek() - file pointer
fputw() - writing any integer in the file
fgetw() - reading any data in the file
ftell() - total size of the file from top to bottom
rewind( ) - sets file pointer at the begining of the file
modes of file handling 
r - read mode : reads content of file, returns null to non exsisting file
w - write mode : overwrite the contents of the file
a - append mode : write at the end of the file
r+ - read plus : edit the data in the file
w+ - write plus : wite and read data pervious data will be earsed
a+ - append plus : append and read file no changes in pervious data*/

#include<stdio.h>
int main(){
    FILE*ptr=fopen("a.c","w");
    if(ptr==0){
        printf("file not opened \n");
    }
    else{
        printf("file opened \n");
    }
    fprintf(ptr,"\n%d",050);
    fclose(ptr);
    fseek(ptr,0,SEEK_SET);
    return 0;
}