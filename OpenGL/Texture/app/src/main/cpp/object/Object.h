//
// Created by lixianru on 2024/5/17.
//

#ifndef OPENGLTEXTURE_OBJECT_H
#define OPENGLTEXTURE_OBJECT_H
#include <android/native_activity.h>
#include <string>
#include <GLES3/gl3.h>
#include <GLES3/gl3ext.h>

class Object{
public:
    Object(){}
    virtual ~Object(){}
    static Object *createObject(std::string name);
    static ANativeActivity *activity;
    virtual void init() = 0;
    virtual void onDraw() = 0;
};

#endif //OPENGLTEXTURE_OBJECT_H
