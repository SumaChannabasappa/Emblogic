#include"headers.h"
#include"declarations.h"

//dev_t majorNo;

static void __exit cleanup(void)
{

	printk(KERN_INFO "%s: BEGIN\n",__func__);
	kfree(myDev);
	unregister_chrdev_region(devId,1);
	printk(KERN_INFO "%s: End\n",__func__);


}

module_exit(cleanup);
