#include<stdio.h>
#include<windows.h>

struct menuItem
{
	int (*code)(); //ptr to a int function. 
	char * item;
};

struct menu
{
	struct menuItem * items[10];
};

struct dataStruct
{
	struct menu * cur_menu;
	struct menu * menuList;
	int numMenus;
};

struct dataStruct data;

int init();
int logic();
int render();
int input();

int main()
{
	init();
	while(true)
	{
		render();
		input();
		logic();
	}
	return 0;
}