#pragma once
#include "Component.h"

/// <summary>
/// Behaviours are Components that can be enabled or disabled
/// </summary>
class Behaviour : public Component
{
public:
	virtual void Init() {}
	virtual void Update(float dt) {}
	virtual void Cleanup() {}

	void Enable() { m_enabled = true; }
	void Disable() { m_enabled = false; }
	bool Enabled() { return m_enabled; }

protected:
	bool m_enabled = true;
};