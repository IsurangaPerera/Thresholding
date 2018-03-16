#include <iostream>

#include "opencv2/imgproc.hpp"
#include <opencv2/highgui.hpp>

cv::Mat globalThreshold(cv::Mat img, double thresh, double maxValue)
{
        cv::Mat output;
        threshold(img, output, thresh, maxValue, cv::THRESH_BINARY);

        return output;
}

cv::Mat adaptiveMeanThreshold(cv::Mat img, double maxValue)
{

        cv::Mat output;
        adaptiveThreshold(img, output, maxValue, cv::ADAPTIVE_THRESH_MEAN_C, cv::THRESH_BINARY,11,2);

        return output;
}

cv::Mat adaptiveGaussianThreshold(cv::Mat img, double maxValue)
{

        cv::Mat output;
        adaptiveThreshold(img, output, maxValue, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY,11,2);

        return output;
}

cv::Mat otsuThreshold(cv::Mat img, double thresh, double maxValue)
{

        cv::Mat output;
        threshold(img, output, thresh, maxValue, cv::THRESH_BINARY + cv::THRESH_OTSU);

        return output;
}
