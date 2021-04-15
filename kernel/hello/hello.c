#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("Linda Nguyen"); 
MODULE_DESCRIPTION("Simple Hello World LKM!"); 
MODULE_VERSION("0.1"); 

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading hello module..."); 
	printk(KERN_INFO "Hello world!!"); 
	return 0; 
}

static void __exit hello_end(void)
{
	printk(KERN_INFO "Goodbye Mr! \n"); 
}

module_init(hello_start); 
module_exit(hello_end); 
