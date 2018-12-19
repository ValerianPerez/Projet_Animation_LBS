#version 140
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) in vec3 a_vertex;
layout (location = 1) in vec3 a_normal;
layout (location = 2) in float a_weight_bone_1;
layout (location = 3) in float a_weight_bone_2;


uniform mat4 transform;
uniform mat4  parent_bone;
uniform mat4  child_bone;

uniform bool isGPU;

out vec3 g_vertex;
out vec3 g_normal;
void main()
{
    vec4 v =  transform * vec4(a_vertex, 1.0);
    if(isGPU) {
      v = parent_bone * a_weight_bone_1 * v + child_bone * a_weight_bone_2 * v;
    }
    g_vertex = v.xyz/v.w;
    g_normal = a_normal;
    gl_Position =  v;
}
