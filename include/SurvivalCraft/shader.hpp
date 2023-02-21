#ifndef __SC_SHADER_HPP__
#define __SC_SHADER_HPP__

#include <glad/glad.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

namespace sc {
    class Shader {
    public:
        Shader(const char *vertexPath, const char *fragmentPath);

        void Use() const;

        void Destroy();

        void SetBool(const std::string &name, bool value) const;
        void SetFloat(const std::string &name, float value) const;
        void SetInt(const std::string &name, int value) const;

    private:
        unsigned int id;
    }; // class Shader
} // namespace sc
#endif /* __SC_SHADER_HPP__ */