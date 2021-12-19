#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <escher.h>
#include "list/figures_controller.h"
#include "../shared/text_field_delegate_app.h"

namespace Geometry 
{

class App : public Shared::TextFieldDelegateApp
{
public:
  class Descriptor : public ::App::Descriptor 
  {
  public:
    I18n::Message name() override;
    I18n::Message upperName() override;
    const Image * icon() override;
  };
  class Snapshot : public ::App::Snapshot 
  {
  public:
    App * unpack(Container * container) override;
    Descriptor * descriptor() override;
  };
private:
  App(Snapshot * snapshot);

  FiguresController m_figuresController;
  StackViewController m_stackViewController;
};

}

#endif