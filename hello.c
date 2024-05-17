#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
static int init(void)
{
    printk(KERN_INFO, "%s: In init\n", __func__);
    return 0;
}

static void exit(void)
{
    printk(KERN_INFO, "%s: In exit\n", __func__);
}

module_init(init);
module_exit(exit);
