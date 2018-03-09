#ifndef CAMERA_H
#define CAMERA_H

#pragma once
#include<glm/glm/glm.hpp>
#include <glm/glm/gtc/matrix_transform.hpp>
using namespace glm;
class camera
{
public:
	camera();
	~camera();
	void camera::moveCameraPositionForward();
	void camera::moveCameraPositionBackwards();
	void camera::moveCameraPositionLeft();
	void camera::moveCameraPositionRight();
	void camera::updateCameraTarget(vec3 target);
	void camera::updateCameraView();
	mat4 getCameraView();
private:
	vec3 cameraPosition, cameraTarget, cameraUp;
	mat4 view;
	float cameraSpeed;
};

#endif