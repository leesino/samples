//
// Created by lixianru on 2024/5/17.
//

#ifndef OPENGLTEXTURE_TEXTURESAMPLE_H
#define OPENGLTEXTURE_TEXTURESAMPLE_H
#include "Object.h"
#include "core/Texture.h"
#include "geometry.h"
#include <core/Shader.h>
#include <core/pch.h>
class TransformSample : public Object{
public:
    TransformSample();
    ~TransformSample();

    void init(int width, int height) override;
    void onDraw() override;

private:
    unsigned int VBO{0}, VAO{0}, EBO{0};
    std::vector<Transform> cubes;
    std::shared_ptr<Shader> mShader;

    int mWidth{0},mHeight{0};
    GLint m_modelViewProjectionUniformLocation;
};


#endif //OPENGLTEXTURE_TEXTURESAMPLE_H
