#include <linux/init.h>
#include <linux/module.h>


static int hello_init(void)
{
	printk(KERNEL_ALERT "HELLO WORLD\n");
	return 0;
}

static int hello_exit(void)
{
	printk(KERNEL_ALERT "goodbye cruel world\n");
	return 0;
}

module_init(hello_init);
module_exit(hello_exit);
