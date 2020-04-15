#include "shell.h"

/**
  * _cd - change directory
  * @argv: argument vector
  * @env: environment linked list
  */
void _cd(char **argv, env_list_t **env)
{
	char buf[BUFSIZ]; /* BUFSIZ is predefined~8k */
	char *home = _getenv_list_value("HOME", env);
	char **OLDPWD = malloc(sizeof(char *) * 4);
	char **PWD = malloc(sizeof(char *) * 4);

	OLDPWD[0] = "";
	OLDPWD[1] = "OLDPWD";
	OLDPWD[2] = buf;
	OLDPWD[3] = NULL;
	PWD[0] = "";
	PWD[1] = "PWD";
	PWD[2] = buf;
	PWD[3] = NULL;
	getcwd(buf, sizeof(buf));
	if (argv[1])
	{
		DIR* dir = opendir(argv[1]);
		if (dir) {
			closedir(dir);
			if (_strcmp(argv[1], "~"))
				chdir(argv[1]);
			else
				chdir(home);
		} 
		else
		{
			printf("-bash: cd: ");
			printf("%s: No such directory found\n", argv[1]);
		}
	}
	else
		chdir(home);
	_setenv_list(OLDPWD, env);
	getcwd(buf, sizeof(buf));
	_setenv_list(PWD, env);
	free(OLDPWD);
	free(PWD);
}
