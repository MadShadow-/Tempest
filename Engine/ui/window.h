#pragma once

#include <Tempest/SystemApi>
#include <Tempest/Widget>

namespace Tempest {

class VectorImage;

class Window : public Widget {
  public:
    Window();
    virtual ~Window();

    int w() const;
    int h() const;

  protected:
    virtual void render();
    virtual void resizeEvent(uint32_t w,uint32_t h);
    void         dispatchPaintEvent(VectorImage &e);

    SystemApi::Window* hwnd() const { return id; }

  private:
    struct Impl:SystemApi::WindowCallback {
      Impl(Window* self):self(self){}
      void onRender(Tempest::SystemApi::Window*) {
        if(self->w()>0 && self->h()>0) {
          self->render();
          }
        }
      void onResize(Tempest::SystemApi::Window*,uint32_t w,uint32_t h){
        self->resizeEvent(w,h);
        }
      Window* self;
      };

    Impl               impl;
    SystemApi::Window* id=nullptr;
  };

}
