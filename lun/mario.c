#include <stdio.h>

int main()
{
	int h=0;int hi=0;
		
	do{
		printf("Height:");
		scanf("%d",&h);
		hi=h;
		
	}while(!(h>0&&h<=8));
	
	while(h>0)
	{
		int x=0;
		for(int i=1;i<h;i++)
		{
			printf("x");
			x++;			
		};
		
		for(int i=x;i<hi;i++)
		{
			printf("#");			
		};
					
			printf("x");
			
				for(int i=x;i<hi;i++)
				{
					printf("#");			
				};

		printf("\n");
		h--;		
	};
	
}
