#include "bnPaletteSwap.h"
#include "bnTextureResourceManager.h"
#include "bnShaderResourceManager.h"
#include "bnEntity.h"

PaletteSwap::PaletteSwap(Entity * owner, sf::Texture base_palette) : Component(owner), base(base_palette), enabled(true)
{
  paletteSwap = ShaderResourceManager::GetInstance().GetShader(ShaderType::PALETTE_SWAP);
  paletteSwap->setUniform("palette", base);
  paletteSwap->setUniform("texture", sf::Shader::CurrentTexture);
}

PaletteSwap::~PaletteSwap()
{
}

void PaletteSwap::OnUpdate(float _elapsed)
{
  if (!enabled) return;
  if (GetOwner()->GetShader().Get() == paletteSwap) return;
  GetOwner()->SetShader(paletteSwap);
}

void PaletteSwap::Inject(BattleScene &)
{
}

void PaletteSwap::LoadPaletteTexture(std::string path)
{
  auto texture = TextureResourceManager::GetInstance().LoadTextureFromFile(path);
  palette = *texture;
  delete texture;
  paletteSwap->setUniform("palette", palette);

}

void PaletteSwap::SetTexture(sf::Texture & texture)
{
  palette = texture;
  paletteSwap->setUniform("palette", palette);
}

void PaletteSwap::Revert()
{
  SetTexture(base);
}

void PaletteSwap::Enable(bool enabled)
{
  this->enabled = enabled;

  // Apply it on this call
  // Don't wait for the next frame (update())
  // Otherwise blocky effects occur
  if (enabled) {
    GetOwner()->SetShader(paletteSwap);
  }
}
