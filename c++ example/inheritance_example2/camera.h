#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
public:
    int m_pixel;
    Camera(int pixel);
    ~Camera();
    void takePic();
    void display();
};

#endif // CAMERA_H
