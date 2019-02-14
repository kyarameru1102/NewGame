#pragma once
class Player : public IGameObject
{
public:
	Player();
	~Player();
	bool Start() override;
	void Update() override;
private:
	prefab::CSkinModelRender* m_skinModelRender = nullptr;
	CVector3 m_potision = CVector3::Zero;
	CVector3 m_moveSpeed = CVector3::Zero;
	CQuaternion m_rotation = CQuaternion::Identity;
};

