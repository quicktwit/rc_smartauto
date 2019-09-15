#include "base.h"

int main(int argc, char** argv )
{
    ros::init(argc, argv, "base_node");
    LinoBase lino;
    ros::spin();
    return 0;
}