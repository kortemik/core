/*                                                                                                                                              
 *  Pipes stubs for minggw porting - 8.2.2017 MAla                                                                                              
 *                                                                                                                                              
 *                                                                                                                                              
 */

#include <pipes.h>


int cf_pclose(FILE *pp)
{
  //
}

FILE *cf_popen(const char *command, const char *type, bool capture_stderr)
{
  //
}

FILE *cf_popen_sh(const char *command, const char *type)
{
  //
}

int cf_pclose_full_duplex(IOData *data)
{
  //
}

IOData cf_popen_full_duplex(const char *command, bool capture_stderr, bool require_full_path)
{
  //
}

FILE *cf_popen_powershell(const char *command, const char *type)
{
  //
}

FILE *cf_popen_powershell_setuid(const char *command, const char *type, uid_t uid, gid_t gid, char *chdirv, char *chrootv, int background)
{
  //
}

int cf_pclose_full_duplex_side(int fd)
{
  //
}

FILE *cf_popen_shsetuid(const char *command, const char *type, uid_t uid, gid_t gid, char *chdirv, char *chrootv, int background)
{
  //
}

FILE *cf_popensetuid(const char *command, const char *type, uid_t uid, gid_t gid, char *chdirv, char *chrootv, int background)
{
  //
}
