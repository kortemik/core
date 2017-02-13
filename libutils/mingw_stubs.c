#include <logging.h>
#include <dir.h>
#include <file_lib.h>

Dir *DirOpen(const char *dirname)
{
  //MAla
}

const struct dirent *DirRead(Dir *dir)
{
  //MAla
}

void DirClose(Dir *dir)
{
  //MAla
}

int rpl_rename(const char *oldpath, const char *newpath)
{
  //MAla
}

int rpl_stat(const char *path, struct stat *buf)
{
  //MAla
}

int lstat(const char *file_name, struct stat *buf)
{
  //MAla
}

int rpl_mkdir(const char *pathname, mode_t mode)
{
  //MAla
}

void LogToSystemLog(const char *msg, LogLevel level)
{
  //char logmsg[4096];
  //snprintf(logmsg, sizeof(logmsg), "CFEngine(%s) %s %s\n", AgentType, VPREFIX, msg);
  //syslog(LogLevelToSyslogPriority(level), "%s", logmsg);
}

NewLineMode FileNewLineMode(ARG_UNUSED const char *file)
{
  //MAla
}
