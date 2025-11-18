#include<stdio.h>
int main()
{
 printf("Name:Ritu Vagdoda\nID Number:25CE128\n");
 char note1[1000];
 char note2[1000];
 char temp_note[1000];
 char choice_buffer[10];
 int choice;
 int i,j;
 int length,len1,len2;
 int flag;
 char temp_char;
 do{
 printf("\n--Alex's simple note taker--\n");
 printf("1.calculate length of a note\n");
 printf("2.Reverse Note\n");
 printf("3.Compare Two Notes\n");
 printf("4.Copy a Notes\n");
 printf("5.Concatenate Two Notes\n");
 printf("6.Convert Note to upper case\n");
 printf("7.Convert Each Word in a Note\n");
 printf("8.Caitalized Each word in a Note\n");
 printf("0.EXIT\n");
 printf("Enter your choice:");
 fgets(choice_buffer,10,stdin);
 choice=0;
 i=0;
 while(choice_buffer[i]>='0' && choice_buffer[i]<='9'){
 choice=(choice*10)+(choice_buffer[i]-'0');
 i++;
 }
 switch(choice){
 case 1:
 printf("Enter the note:");
 fgets(note1,1000,stdin);
 length=0;
 while(note1[length]!='\0')
 {
 length++;
 }
 if(length>0 && note1[length-1]=='\n')
 {
 note1[length-1]='\0';
 length--;
 }
 printf("Length of the note:%d\n",length);
 break;
 case 2:
 printf("Enter the note to reverse:");
 fgets(note1,1000,stdin);
 length=0;
 while(note1[length-1]!='\0')
 {
 length++;
 }
 if(length>0 && note1[length-1]=='\n')
 {
 note1[length-1]='\0';
 length--;
 }
 i=0;
 j=length-1;
 while(i<j)
 {
 temp_char=note1[i];
 note1[i]=note1[j];
 note1[j]=temp_char;
 i++;
 j--;
 }
 printf("Reversed note:%s\n",note1);
 break;
 case 3:
 printf("Enter the first note:");
 fgets(note1,1000,stdin);
 printf("Enter the second note:");
 fgets(note2,1000,stdin);
 len1=0;
 while(note1[len1]!='\0')len1++;
 if(len1>0 && note1[len1-1]=='\n') note1[len1-1]='\0';
 len2=0;
 while(note2[len2]!='\0')len2++;
 if(len2>0 && note2[len2-1]=='\n') note2[len2-1]='\0';
 i=0;
 flag=0;
 while(note1[i]!='\0' || note2[i]!='\0'){
 if(note1[i]!=note2[i] ){
 flag=1;
 break;
 }
 i++;
 }
 if(flag==0)
 {
 printf("THe notes are identical.\n");


 }
 else{
 printf("The notes are different \n");
 }
 break;
 case 4:
 printf("Enter the note to copy:");
 fgets(note1,1000,stdin);
 i=0;
 while(note1[i]!='\0'){
 temp_note[i]=note1[i];
 i++;
 }
 temp_note[i]='\0';
 printf("Copied note: %s",temp_note);
 break;
 case 5:
 printf("Enter the first note(will be modified):");
 fgets(note1,1000,stdin);
 printf("Enter the second note(will be added):");
 fgets(note2,1000,stdin);
 i=0;
 while(note1[i]!='\0')
 {
 i++;
 }
 j=0;
 while(note2[j]!='\0')
 {
 note1[i]=note2[j];
 i++;
 j++;
 }
 note1[i]='\0';
 printf("Concatenated note:%s\n",note1);
 break;
 case 6:
 printf("Enter note to convert to uppercase:");fgets(note1,1000,stdin);
 i=0;
 while(note1[i]!='\0')
 {

 if(note1[i]>='a' && note1[i]<='z'){
 note1[i]=note1[i]-32;
 }
 i++;
 }
 printf("Uooer casee note:%s",note1);
 break;
 case 7:
 printf("Enter note to convert to lower case:");
 fgets(note1,1000,stdin);
 i=0;
 while(note1[i]!='\0')
 {
 if(note1[i]>='A' && note1[i]<='Z');
 {
 note1[i]=note1[i]+32;
 }
 i++;
 }
 printf("Lower case note:%s",note1);
 break;
 case 8:
 printf("Enter note to capitalize:");
 fgets(note1,1000,stdin);
 flag=1;
 i=0;
 while(note1[i]!='\0')
 {
 if(note1[i]==' ' || note1[i]=='\t' || note1[i]=='\n')
 {
 flag=1;
 }
 else if(flag==1)
 {
 if(note1[i]>='a' && note1[i]<='z')
 {
 note1[i]=note1[i]-32;
 }
 flag=0;
 }
 i++;
 }
 printf("Capitalized mote:%s",note1);
 break;
 case 0:
 printf("Happy writng,Alex!\n");
 break;

 default:
 if(choice_buffer[0]=='0' && (choice_buffer[1]=='\n' ||
choice_buffer[1]=='\0'))
 {
 choice=0;
 printf("Happy writing,Alex\n");
 }
 else{
 printf("Invalid choice.Please enter a number from(0-8)\n");
 choice=-1;
 }
 break;
 }}
 while(choice!=0);
 return 0;
}

