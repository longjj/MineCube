//
//  CraftManager.cpp
//  TestForOpenGL
//
//  Created by 吴博文 on 2018/4/19.
//  Copyright © 2018年 吴博文. All rights reserved.
//

#include "CraftManager.hpp"



const GLfloat CraftManager::cubeVertex[108] = {
    1.0f, -1.0f, -1.0f, 
    -1.0f, -1.0f, -1.0f,
    1.0f,  1.0f, -1.0f, 
    1.0f,  1.0f, -1.0f, 
    -1.0f,  1.0f, -1.0f,
    -1.0f, -1.0f, -1.0f,
    
    -1.0f, -1.0f,  1.0f,
    1.0f, -1.0f,  1.0f, 
    1.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  1.0f,
    -1.0f,  1.0f,  1.0f,
    -1.0f, -1.0f,  1.0f,
    
    -1.0f,  1.0f,  1.0f,
    -1.0f,  1.0f, -1.0f,
    -1.0f, -1.0f, -1.0f,
    -1.0f, -1.0f, -1.0f,
    -1.0f, -1.0f,  1.0f,
    -1.0f,  1.0f,  1.0f,
    
    1.0f,  1.0f,  1.0f,
    1.0f,  1.0f, -1.0f,
    1.0f, -1.0f, -1.0f,
    1.0f, -1.0f, -1.0f,
    1.0f, -1.0f,  1.0f,
    1.0f,  1.0f,  1.0f,
    
    -1.0f, -1.0f, -1.0f,
    1.0f, -1.0f, -1.0f, 
    1.0f, -1.0f,  1.0f, 
    1.0f, -1.0f,  1.0f, 
    -1.0f, -1.0f,  1.0f,
    -1.0f, -1.0f, -1.0f,
    
    -1.0f,  1.0f, -1.0f,
    1.0f,  1.0f, -1.0f,
    1.0f,  1.0f,  1.0f,
    1.0f,  1.0f,  1.0f,
    -1.0f,  1.0f,  1.0f,
    -1.0f,  1.0f, -1.0f
};