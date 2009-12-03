#ifndef REMAP_HPP
#define REMAP_HPP

#include "base.hpp"
#include "bridge.hpp"
#include "keycode.hpp"
#include "CallBackWrapper.hpp"

namespace org_pqrs_KeyRemap4MacBook {
  struct RemapParams {
    Params_KeyboardEventCallBack& params;
    bool& isremapped;
    KeyRemap4MacBook_bridge::GetWorkspaceData::Reply workspacedata;
  };
  void remap_core(const RemapParams& remapParams);

  // --------------------
  struct RemapConsumerParams {
    Params_KeyboardSpecialEventCallback& params;
    KeyRemap4MacBook_bridge::GetWorkspaceData::Reply workspacedata;
    KeyCode::KeyCode& ex_remapKeyCode;
  };
  void remap_consumer(const RemapConsumerParams& remapParams);

  // --------------------
  struct RemapPointingParams_relative {
    Params_RelativePointerEventCallback& params;
    bool& ex_dropEvent;
  };
  void remap_pointing_relative_core(const RemapPointingParams_relative& remapParams);
}

#endif
