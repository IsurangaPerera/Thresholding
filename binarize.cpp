#include <iostream>

#include "opencv2/imgproc.hpp"
#include <opencv2/highgui.hpp>

cv::Mat globalThreshold(cv::Mat img, double thresh, double maxValue)
{
        cv::Mat output;
        threshold(img, output, thresh, maxValue, cv::THRESH_BINARY);

        return output;
}
