#pragma once

#ifndef __SC_TEXTURE_HPP__
#define __SC_TEXTURE_HPP__

#include <glad/glad.h>
#include <stb_image.h>

#include <iostream>

namespace sc
{
    class Texture
    {
    public:
        explicit Texture(const std::string& filename);

        void Bind(unsigned int offset) const;

    private:
        int width, height, nrChannels;
        unsigned int texture;
    };
}

#endif // __SC_TEXTURE_HPP__
