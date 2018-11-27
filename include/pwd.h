struct passwd
{
  char *pw_name;    /* Username.  */
  char *pw_passwd;    /* Password.  */
  __uid_t pw_uid;   /* User ID.  */
  __gid_t pw_gid;   /* Group ID.  */
  char *pw_gecos;   /* Real name.  */
  char *pw_dir;     /* Home directory.  */
  char *pw_shell;   /* Shell program.  */
};

