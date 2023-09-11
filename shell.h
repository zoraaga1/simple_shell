#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include <ctype.h>
#include <errno.h>

#define STORAGE_SIZE 1024
extern char **environ;


char *copy_str1(char *dss, const char *sourssing);
char **split_str1(char *stringing, const char *sprt, int *wrdsN);
char *input_read1();
size_t lenstr_1(const char *strringX);
void free_word1(char **wrding, int numberW);

/* checks */
int file_exit1(const char *pathing);
char *_direct_pat(const char *pathing, const char *commanding);
char *copy_get1();

/* project fork */
int _execute_fork1(char **wordArray, char *uInput,char *shellN, int cntrr, int n);
char *my_path1(const char *commanding);
void exe_cmd_withexecve1(char *cmd, char **arr_of_words);
void wait_kid_proce1(pid_t pidding, int *stt);
void _execute_bn1(char **wordArray);

/* Str manipulations */
char *cat_string1(char *dess, const char *sourssing);
char *_dup_str1(const char *strr);
int cmp_str1(const char *sttOne, const char *sttTwo, size_t nbr);
int _atoy1(const char *strr);

/*strings*/
ssize_t the_get_line1(char **str, size_t *szzStr,FILE *reading);
int the_read_input1(char *reading);
void *the_re_allocation1(void *VoidPointer, size_t szz);
void the_buf_upto1(char **buffing, size_t *sezing, char *bff, size_t unicId);
void *the_memry_copy1(void *destX, const void *resur, size_t bytNumber);


/**get red of exit , env setting, unenv setting*/
int the_handle_cmd1(char **wordArr, char *uInput,char *sh_name, int cnt, int n);
void the_hand_env1(void);
int the_env_set1(const char *envN, const char *nvvl, int envOver);
int the_unsetenvs1(const char *envvN);

/*get red of routing*/
void the_cd_comend1(char **wordArra);

/* function of file H */
char *the_env_vars1(const char *envChar, char **envPtr);
void the_error1(const char *message);
char *the_getdir1(const char *pathing);
char *the_handle_cwd1();
void the_swit_currdir1(const char *drtrPointer);
void the_exe_commnde_withexecve(char *commnde, char **wordArray);

/*cmprair function*/
int the_cmp_str11(const char *one, const char *two);

/*multiplee comandes*/
int the_exe_cmd1(char *uInput, char *shell, int contre);

void the_print_errors(char *contry, char *sh, char *commanding, char *messaging);
int the_valid_word1(char *string);
char *the_int_to_string1(int numbrX);
void the_handle_signs1(int sigging);
void the_handle_exits1(char **wordArray, char *uInput,char *shellN, int contre, int nX);
void the_exer1(char **wordArray, int contr, char *shell);
int the_digits1(int y);
#endif

