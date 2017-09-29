1:This is a function module for printing a progress bar.

2:you can use it like this:

......		
for(i = 0;i < 101;i++)
{
	usleep((i%4 + 1) * 100000);
        probar(i);
}
printf("\n");
......

enjoy it!		
