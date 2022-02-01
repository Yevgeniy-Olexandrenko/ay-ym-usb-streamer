#include "Register.h"

Register::Register()
	: Register(0x00)
{
}

Register::Register(uint8_t data)
	: m_data(data)
	, m_changed(false)
{
}

bool Register::IsChanged() const
{
	return m_changed;
}

uint8_t Register::GetData() const
{
	return m_data;
}

void Register::OverrideData(uint8_t data)
{
	m_changed = true;
	m_data = data;
}

void Register::UpdateData(uint8_t data)
{
	if (data != m_data) OverrideData(data);
}
