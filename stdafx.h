// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "targetver.h"


#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <map>
#include <Windows.h>
#include <wchar.h>
#include <cassert>
#include <iomanip>
#include <set>
#include <iterator>
#include <algorithm>
#include <list>
#include <strstream>
#include <functional>
#include <memory>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;
#pragma warning(disable: 4244) 
// OpenGL Include
// GLEW
#define GLEW_STATIC
#include <gl\glew.h>

// GLFW
#include <GLFW\glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW\glfw3native.h>
// TinyXML 2
#include <tinyxml2.h>
// ImGui
#include <imgui\imgui.h>
// Direct Input
#include <dinput.h>
// libary
#pragma comment(lib, "glew32s.lib")
#pragma comment(lib, "lib/glfw3.lib")
#pragma comment(lib, "lib/Devil.lib")
#pragma comment(lib, "lib/tinyxml2.lib")
#pragma comment(lib, "lib/dinput8.lib")
#pragma comment(lib, "lib/dxguid.lib")
#pragma comment(lib, "opengl32.lib")

// Math
#include <glm\mat4x4.hpp>
#include "glm\vec3.hpp"
#include "glm\vec4.hpp"
#include "glm\vec2.hpp"

#include "glm\gtc\quaternion.hpp"
#include "glm\gtc\matrix_transform.hpp"
#include "glm\gtc\type_ptr.hpp"
#include "glm\gtc\constants.hpp"

#include "glm\gtx\quaternion.hpp"
#include "glm\gtx\compatibility.hpp"
#include <glm\gtx\euler_angles.hpp>
#include "glm\geometric.hpp"
#include "glm\detail\func_matrix.hpp"

using glm::vec2;
using glm::vec3;
using glm::vec4;
using glm::mat4;
using glm::quat;


#include "World\lt.h"
#include "World\DE_World.h"
#include "World\ltlink.h"
#include "World\de_sprite.h"
#include "World\SpriteControl.h"
#include "World\Vertex.h"
#include "World\CLightTable.h"
#include "World\LTPlane.h"
#include "World\Surface.h"
#include "World\WorldBSP.h"
#include "World\SPolyVertex.h"
#include "World\WorldData.h"
#include "World\WorldPoly.h"
#include "World\Node.h"
#include "World\CRBSection.h"
#include "World\RenderBlock.h"
#include "World\RenderWorld.h"
#include "World\WorldTreeNode.h"
#include "World\WorldTree.h"
#include "World\CPreMainWorld.h"

#include "App\interface.h"
#include "App\Application.h"
#include "App\Context.h"
#include "App\DirectInput.h"
#include "App\Frustum.h"
#include "App\Camera.h"
#include "App\Mesh.h"
#include "App\OpenGLRenderer.h"
#include "App\ModelCache.h"
#include "App\ResourceLoader.h"
#include "App\Shader.h"
#include "App\DebugShader.h"
#include "App\SystemUI.h"
#include "App\Texture.h" 
#include "App\Timer.h"
#include "App\Windows.h"
#include "App\Log.h"
#include "App\ImGuiShader.h"
#include "App\MapMesh.h"
#include "App\MapShader.h"
// TODO: reference additional headers your program requires here
