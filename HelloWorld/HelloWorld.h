#pragma once

#ifndef BULLETOPENGL_HELLOWORLD_H
#define BULLETOPENGL_HELLOWORLD_H

#include "BulletOpenGLApplication.h"
#include <btBulletDynamicsCommon.h>

class HelloWorld : public BulletOpenGLApplication {
public:
	virtual void InitializePhysics() override;
	virtual void ShutdownPhysics() override;

	void CreateObjects();
};

#endif //BULLETOPENGL_HELLOWORLD_H