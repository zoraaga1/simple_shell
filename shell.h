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


char *copy_str1(char *str_dest, const char *str_source);
char **split_str1(char *inputed_string, const char *_delim, int *word_counter);
char *input_read1();
size_t lenstr_1(const char *inpt_string);
void free_word1(char **arr_ofwords, int n_ofwords);

int file_exit1(const char *path_of_file);
char *_direct_pat(const char *path_of_direc, const char *name_of_cmd);
char *copy_get1();

int _execute_fork1(char **array_cmd_args,
char *input_ofusr,
char *name_ofshell, int counter_ofcmd, int n);
char *my_path1(const char *cmd_name);
void exe_cmd_withexecve1(char *cmod, char **arrayy_ofword);
void wait_kid_proce1(pid_t child_p_id, int *Exit_status);
void _execute_bn1(char **array_cmd_args);

char *cat_string1(char *dest_string,
const char *source_string);
char *_dup_str1(const char *Strings);
int cmp_str1(const char *first_String,
const char *second_String, size_t n_of_max_length);
int _atoy1(const char *string_convert);

ssize_t the_get_line1(char **str,
size_t *output_SZ, FILE *reading_file);
int the_read_input1(char *input_ch);
void *the_re_allocation1(void *old_memo_ptr,
size_t new_memo_size);
void the_buf_upto1(char **buf_, size_t *ptr_of_buff,
char *new_bufdata, size_t curr_pos);
void *the_memry_copy1(void *dest_ptr, const void *res_ptr, size_t n_bytes);


int the_handle_cmd1(char **array_ofwrd, char *User_inp,
char *my_shell_name, int counting_Cmd, int n);
void the_hand_env1(void);
int the_env_set1(const char *name_ofenv, const char *new_val, int env_flag);
int the_unsetenvs1(const char *name_ofenvire);

void the_cd_comend1(char **array_of_words);

char *the_env_vars1(const char *env_ofchars, char **ptr_toenvire);
void the_error1(const char *msg_toprinterr);
char *the_getdir1(const char *path_ofdirec);
char *the_handle_cwd1();
void the_swit_currdir1(const char *ptr_todirec);
void the_exe_commnde_withexecve(char *cmd, char **wordArray);

int the_cmp_str11(const char *compared_ch, const char *chartocompare);


int the_exe_cmd1(char *input_strcmd, char *name_ofprogram, int _counter);

void the_print_errors(char *err_counter, char *name_ofprogram,
char *cmd_named, char *err_msgouput);
int the_valid_word1(char *str_tobechecked);
char *the_int_to_string1(int n_ofInt);
void the_handle_signs1(int n_signal);
void the_handle_exits1(char **wordArray,
char *uInput, char *shellN, int contre, int nX);
void the_exer1(char **array_ofstr, int contr, char *shell);
int the_digits1(int k);
#endif

