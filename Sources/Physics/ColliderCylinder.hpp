#pragma once

#include "Maths/Vector3.hpp"
#include "Collider.hpp"

class btCylinderShape;

namespace acid
{
	class ACID_EXPORT ColliderCylinder :
		public Collider
	{
	private:
		btCylinderShape *m_shape;
		float m_radius;
		float m_height;
	public:
		ColliderCylinder(const float &radius = 1.0f, const float &height = 1.0f);

		~ColliderCylinder();

		void Start() override;

		void Update() override;

		void Load(LoadedValue *value) override;

		void Write(LoadedValue *destination) override;

		std::string GetName() const override { return "ColliderCylinder"; };

		ACID_HIDDEN btCollisionShape *GetCollisionShape() const override;

		float GetRadius() const { return m_radius; }

		void SetRadius(const float &radius) { m_radius = radius; }

		float GetHeight() const { return m_height;}

		void SetHeight(const float &height) { m_height = height; }
	};
}