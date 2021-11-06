

#include "fonction.h"

int main(void)
{
	char text[T_MOT] = "";
	char text2[T_MOT] = "";

	ft_mots_hasard(text);
	//text = ft_mots_hasard(text2);
	printf("le mots est : %s\n", text);

	return(0);

}