#ifndef CAMERA_HPP
#define CAMERA_HPP

#include "Global.hpp"

enum MoveDirection {
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT
};

class Camera {
public:
    // constructors
    Camera();
    Camera(const glm::vec3& position, const glm::vec3& target, const glm::vec3& worldUp);
    
    // return view matrix
    glm::mat4 getViewMatrix();
    // get position of camera
    glm::vec3 getCameraPosition();

    // move position with keyboard input
    void moveCamera(const MoveDirection &direction, float deltaTime);
    // look around when mouse move
    void lookAround(const float x_offset, const float y_offset);
    // zoom in and zoom out
    void zoomInOrOut(float yoffset);
    // pause camera
    void pause();
private:
    // positions
    glm::vec3 cameraPosition;
    glm::vec3 targetPosition;
    // direction vectors
    glm::vec3 worldUp;
    glm::vec3 cameraFront;
    glm::vec3 cameraRight;
    glm::vec3 cameraUp;
    // Euler Angles
    float yaw;
    float pitch;
    // camera options
    float moveSpeed;
    float mouseSensitivity;
    float zoomFactor;
    // contoller
    bool isFirstMove;
    float lastX;
    float lastY;
    // process input and update vectors
    void updateCamera();
};

#endif  // CAMERA_HPP
