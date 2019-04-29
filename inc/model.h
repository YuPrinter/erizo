#include "base.h"

struct camera_;
struct theme_;

typedef struct model_ {
    uint32_t tri_count;

    GLuint vao;
    GLuint vbo;
    GLuint ibo;

    GLuint vol;
    GLuint vol_logsize;

    /*  Shader program */
    GLuint vs;
    GLuint gs;
    GLuint fs;
    GLuint prog;

    /*  Uniform locations for matrices */
    GLuint u_proj;
    GLuint u_view;
    GLuint u_model;

    /*  Uniform locations for lighting */
    GLuint u_key;
    GLuint u_fill;
    GLuint u_base;

    /*  Uniform locations for volumetric lighting */
    GLuint u_vol;
    GLuint u_vol_logsize;
} model_t;

model_t* model_new();
void model_delete(model_t* model);
void model_draw(model_t* model, struct camera_* camera, struct theme_* theme);
