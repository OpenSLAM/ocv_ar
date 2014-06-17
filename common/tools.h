#ifndef OCV_AR_TOOLS_H
#define OCV_AR_TOOLS_H

#include <opencv2/opencv.hpp>

namespace ocv_ar {

class Tools {
public:
    static float distSquared(cv::Point2f p1, cv::Point2f p2);
    static void matRot90CW(cv::Mat &m); // fast clock-wise rotation of <m> by 90°
};
    
}

#endif