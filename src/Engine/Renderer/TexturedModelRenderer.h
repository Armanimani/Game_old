#pragma once
#include <vector>
#include "src\Engine\Model\Model.h"
#include "src\Engine\Entities\ColoredModelEntity.h"
#include "src\Engine\Entities\TexturedModelEntity.h"
#include "src\Engine\Shader\ColoredModelShader.h"
#include "src\Engine\Shader\TexturedModelShader.h"
#include "src\Engine\Scene\Scene.h"

class TexturedModelRenderer{

public:

	void installShaders();
	void assignScene(Scene &scene);
	void cleanUp();
	void prepare();
	void render();
	inline void processEntities(TexturedModelEntity entity){ entities.push_back(entity); }

private:

	std::vector<TexturedModelEntity> entities;

	TexturedModelShader shader;
	
	Scene scene;


};