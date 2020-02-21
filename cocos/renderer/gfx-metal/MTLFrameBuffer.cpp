#include "MTLStd.h"
#include "MTLFrameBuffer.h"

NS_CC_BEGIN

CCMTLFrameBuffer::CCMTLFrameBuffer(GFXDevice* device) : GFXFramebuffer(device) {}
CCMTLFrameBuffer::~CCMTLFrameBuffer() { destroy(); }

bool CCMTLFrameBuffer::initialize(const GFXFramebufferInfo& info)
{
    _renderPass = info.renderPass;
    _colorViews = info.colorViews;
    _depthStencilView = info.depthStencilView;
    _isOffscreen = info.isOffscreen;
    
    return true;
}

void CCMTLFrameBuffer::destroy()
{
    
}

NS_CC_END