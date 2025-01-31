#include "camera.h"
#include<iostream>
Camera::Camera(int pixel)//:m_pixel(pixel)
{
    m_pixel = pixel;
    std::cout<<"camera cons called"<<std::endl;

}

Camera::~Camera()
{
    std::cout<<"camera dest called"<<std::endl;

}

void Camera::takePic()
{
    std::cout<<"pic function called"<<std::endl;

}

void Camera::display()
{
    std::cout<<"camera display function called"<<std::endl;
    std::cout<<"pixel: "<<m_pixel<<std::endl;
}
