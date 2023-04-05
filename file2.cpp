#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
FILE *fp;    //输入文件
void get_count(int *count)
{
char input[81];
int i ;
while( fgets( input, 80, fp ) != NULL ){
i = 0;
while( input[i] != '\0' ){
count[3]++;       //求总字数
if( isalpha( input[i] ) )
count[0]++;   //求字母数
else if( isdigit( input[i] ) )
count[1]++;   //求数字个数
else if( input[i] == ' ' )
count[2]++;   //求空格数
i++;
}
}
}
void get_count_str( char *str_appear, int *count )
{
char input[81];
if( ( fp = fopen( "input_data.txt", "r" ) ) == NULL ){ //打开文件
printf( "Can not open file input_data.txt!\n" );
exit( 1 );
}
while( fgets( input, 80, fp ) != NULL ){
if( strstr( input, str_appear ) != NULL )       //如果str_appear是input的字串，则返回非零指针
count[4]++;
}
return;
}
void delete_str( char *str_delete, FILE *fp_out )
{
char input[81];
char *p;
int i, j, len_str_delete, len_p, len_input;
if( ( fp = fopen( "input_data.txt", "r" ) ) == NULL ){ //打开文件
printf( "Can not open file input_data.txt!\n" );
exit( 1 );
}
len_str_delete = strlen( str_delete );                //要删除子串的长度
while( fgets( input, 80, fp ) != NULL ){
while( ( p = strstr( input, str_delete ) ) != NULL ){  //在input中删除子串str_delete
len_input =  strlen( input );
len_p = strlen(p);
for( i = 0; i < len_str_delete; i++ )
for( j = len_input - len_p; j < len_input; j++ )
input[j] = input[j + 1];
}
fprintf( fp_out, "%s", input );          //将删除了子串后的input保存到新的文件中
}
    fclose( fp_out );
return;
}
int main( void )
{
char input[81];
int count[5]={0};        //用来存储全部字母数、数字个数、空格个数、总字数以及某字符串出现的次数
char str_appear[20];     //用来统计在文章中出现次数的字符串
char str_delete[20];     //要在文章中删除的字符串
FILE *fp_out;            //用来存储删除了字符串后的文章
if( ( fp = fopen( "input_data.txt", "r" ) ) == NULL ){      //打开初始文件
printf( "Can not open file input_data.txt!\n" );
exit( 1 );
}
if( ( fp_out = fopen( "output_data.txt", "w" ) ) == NULL ){ //创建删除字串后的文件
printf( "Can not create file output_data.txt!\n" );
exit( 1 );
}
get_count( count );     //用来计算全部字母数、数字个数、空格个数、总字数
printf( "请输入用来统计在文章中出现次数的字符串:\n" );
gets(str_appear);
    get_count_str( str_appear, count ); //用来统计子串str_appear在文章中出现的次数
printf( "请输入要删除的字符串:\n" );
gets( str_delete );
delete_str( str_delete, fp_out );  //在文章中删除字串str_delete
printf( "\n\n" );
printf( "文章中的字母个数为:%d\n", count[0] );
printf( "文章中的数字个数为:%d\n", count[1] );
printf( "文章中的空格个数为:%d\n", count[2] );
printf( "文章中的总个数为:%d\n"  , count[3] );
printf( "文章中的字串%s出现的次数为:%d\n", str_appear,count[4] );
printf( "\n\n\n原来的文章内容为:\n");
if( ( fp = fopen( "input_data.txt", "r" ) ) == NULL ){      //打开初始文件
printf( "Can not open file input_data.txt!\n" );
exit( 1 );
}
while( fgets( input, 80, fp ) != NULL )
printf("%s", input );
printf( "\n\n\n删除子串%s的文章内容为:\n", str_delete );
if( ( fp_out = fopen( "output_data.txt", "r" ) ) == NULL ){  //打开删除字串后的文件
printf( "Can not create file output_data.txt!\n" );
exit( 1 );
}
while( fgets( input, 80, fp_out ) != NULL )
printf("%s", input );
printf( "\n" );
return 0;
}
