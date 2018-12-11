#ifndef TOOLS_H
#define TOOLS_H

#include "cudaMain.h"

unsigned char* readBMPFile(
    char const*  filename,
    int& width,
    int& height);

unsigned char *meanFilter(
    unsigned char* dev_src, 
    int height, 
    int width);

unsigned char *laplacianFilter(
    unsigned char* data, 
    int height, 
    int width);

unsigned char * FilterOp(
    unsigned char* data,
    int height,
    int width,
    float* kernel);

float*          getSumRGB(unsigned char* src, int width, int height);
unsigned char*  toGray(unsigned char* src, int with, int height);
unsigned char*  toChromatic(unsigned char* src, int width, int height);

double          getResizeFactor(int width, int height);
void            Mat2Mat(cv::Mat& src, cv::Mat& dst, int x0, int y0);
void            copy(unsigned char* src, unsigned char* dst, int size);
cv::Mat         fftSwap(cv::Mat src, int cols, int rows);

unsigned char* FFT(unsigned char* src, int width, int height);
void getComp(float* data, float* res1, float* res2, int width, int height);
unsigned char* BC(unsigned char* src, float B, float C, int size);
cv::Mat TemplateMatching();
#endif