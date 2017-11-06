#include<stdio.h>

main()
{

		FILE *sp, *tp;
		char ch,nextch;
		int index = 0;

		sp = fopen("d:\Hello.txt","r");
		tp = fopen("d:\remove.txt","w");

		if(sp == NULL)
		{
			perror("Cannot Open Source File");
			return 0;
		}

		while( (ch = fgetc(sp)) != EOF)
		{
				if(ch == 10)
				{
					index++;
					nextch = fgetc(sp);

					if(ch == 10 && nextch != 10)
					{
						fputc(ch, tp);
						fputc(nextch, tp);
					}

				}

				if(ch != 10)
				{
					fputc(ch,tp);
					index++;
				}

		}

}