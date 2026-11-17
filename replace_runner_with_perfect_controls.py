import re

with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Hide #nor-gamepad-overlay in createEngineHTML styles completely
old_ov = "#nor-gamepad-overlay {"
pos_ov = text.find(old_ov)
if pos_ov != -1:
    pos_ov_end = text.find('}', pos_ov) + 1
    new_ov = "#nor-gamepad-overlay { display: none !important; position: fixed; top: 0; left: 0; width: 0; height: 0; opacity: 0; pointer-events: none !important; z-index: -999; }"
    text = text[:pos_ov] + new_ov + text[pos_ov_end:]
    print("1. Hidden internal nor-gamepad-overlay in CSS!")

# 2. Also ensure overlay display none in applyConfig
text = text.replace("overlay.style.display = 'block';", "overlay.style.display = 'none';")

# 3. Now let us locate the Game Preview Component in React
pos_sendKey = text.find("const sendKey = (key, type) => {")
pos_newId = text.find("const newId$1 = (p2) =>", pos_sendKey)

if pos_sendKey != -1 and pos_newId != -1:
    new_preview_code = """const sendKey = (key, type) => {
    if (!iframeRef.current || !iframeRef.current.contentWindow) return;
    const iwin = iframeRef.current.contentWindow;
    if (!iwin) return;
    const isDown = type === "keydown";
    let keyCode = 0;
    let code = "Space";
    if (key === "ArrowUp" || key === 38 || key === "up" || key === "Up") {
      keyCode = 38; code = "ArrowUp";
    } else if (key === "ArrowDown" || key === 40 || key === "down" || key === "Down") {
      keyCode = 40; code = "ArrowDown";
    } else if (key === "ArrowLeft" || key === 37 || key === "left" || key === "Left") {
      keyCode = 37; code = "ArrowLeft";
    } else if (key === "ArrowRight" || key === 39 || key === "right" || key === "Right") {
      keyCode = 39; code = "ArrowRight";
    } else if (key === "Space" || key === 32 || key === " " || key === "space") {
      keyCode = 32; code = "Space";
    } else if (key === "KeyZ" || key === 90 || key === "z" || key === "Z") {
      keyCode = 90; code = "KeyZ";
    } else if (key === "KeyX" || key === 88 || key === "x" || key === "X") {
      keyCode = 88; code = "KeyX";
    } else if (key === "KeyC" || key === 67 || key === "c" || key === "C") {
      keyCode = 67; code = "KeyC";
    } else if (key === "Shift" || key === "ShiftLeft" || key === 16) {
      keyCode = 16; code = "ShiftLeft";
    } else if (key === "Enter" || key === 13) {
      keyCode = 13; code = "Enter";
    } else if (key === "Escape" || key === 27) {
      keyCode = 27; code = "Escape";
    } else if (typeof key === "number") {
      keyCode = key; code = "Key" + key;
    } else {
      code = String(key);
    }
    if (typeof iwin.syncKeyboardToPlayers === "function") {
      try { iwin.syncKeyboardToPlayers(keyCode || code, isDown); } catch (err) {}
    }
    if (iwin.Input && typeof iwin.Input.syncKey === "function") {
      try { iwin.Input.syncKey(keyCode || code, isDown); } catch (e) {}
    }
    try {
      const event = new KeyboardEvent(type, {
        key: code === "ArrowUp" ? "ArrowUp" : code === "ArrowDown" ? "ArrowDown" : code === "ArrowLeft" ? "ArrowLeft" : code === "ArrowRight" ? "ArrowRight" : code === "Space" ? " " : code === "Enter" ? "Enter" : code === "Escape" ? "Escape" : code,
        code: code,
        keyCode: keyCode,
        which: keyCode,
        bubbles: true,
        cancelable: true,
        view: iwin
      });
      Object.defineProperty(event, "keyCode", { get: () => keyCode });
      Object.defineProperty(event, "which", { get: () => keyCode });
      iwin.dispatchEvent(event);
      const canvas = iwin.document?.querySelector("canvas");
      if (canvas) canvas.dispatchEvent(event);
      if (iwin.document?.body) iwin.document.body.dispatchEvent(event);
    } catch (e) {}
  };

  const handleDpadPress = (e, dirKey, isDown) => {
    if (e.cancelable) e.preventDefault();
    e.stopPropagation();
    setActiveKeys(prev => ({ ...prev, [dirKey]: isDown }));
    sendKey(dirKey, isDown ? "keydown" : "keyup");
  };

  const handleActionPress = (e, role, isDown) => {
    if (e.cancelable) e.preventDefault();
    e.stopPropagation();
    if (role === "jump") {
      setActiveKeys(prev => ({ ...prev, "btn_jump": isDown, "ArrowUp": isDown, "Space": isDown }));
      sendKey("ArrowUp", isDown ? "keydown" : "keyup");
      sendKey("Space", isDown ? "keydown" : "keyup");
      sendKey("KeyZ", isDown ? "keydown" : "keyup");
    } else if (role === "dash" || role === "attack") {
      setActiveKeys(prev => ({ ...prev, "btn_action_b": isDown, "Shift": isDown, "KeyX": isDown }));
      sendKey("ShiftLeft", isDown ? "keydown" : "keyup");
      sendKey("KeyX", isDown ? "keydown" : "keyup");
    } else {
      setActiveKeys(prev => ({ ...prev, [role]: isDown }));
      sendKey("Space", isDown ? "keydown" : "keyup");
    }
  };

  const handleDpadContainerTouch = (e) => {
    if (e.cancelable) e.preventDefault();
    const rect = e.currentTarget.getBoundingClientRect();
    const touch = e.touches && e.touches[0] ? e.touches[0] : e;
    const cx = rect.left + rect.width / 2;
    const cy = rect.top + rect.height / 2;
    const dx = touch.clientX - cx;
    const dy = touch.clientY - cy;
    const dist = Math.hypot(dx, dy);
    if (dist < 12) {
      ["ArrowUp", "ArrowDown", "ArrowLeft", "ArrowRight"].forEach(k => {
        if (activeKeys[k]) { setActiveKeys(prev => ({ ...prev, [k]: false })); sendKey(k, "keyup"); }
      });
      return;
    }
    const angle = Math.atan2(dy, dx) * 180 / Math.PI;
    const isUp = angle >= -150 && angle <= -30;
    const isDown = angle >= 30 && angle <= 150;
    const isRight = angle >= -60 && angle <= 60;
    const isLeft = angle >= 120 || angle <= -120;

    if (isUp !== !!activeKeys["ArrowUp"]) { setActiveKeys(prev => ({ ...prev, ArrowUp: isUp })); sendKey("ArrowUp", isUp ? "keydown" : "keyup"); }
    if (isDown !== !!activeKeys["ArrowDown"]) { setActiveKeys(prev => ({ ...prev, ArrowDown: isDown })); sendKey("ArrowDown", isDown ? "keydown" : "keyup"); }
    if (isLeft !== !!activeKeys["ArrowLeft"]) { setActiveKeys(prev => ({ ...prev, ArrowLeft: isLeft })); sendKey("ArrowLeft", isLeft ? "keydown" : "keyup"); }
    if (isRight !== !!activeKeys["ArrowRight"]) { setActiveKeys(prev => ({ ...prev, ArrowRight: isRight })); sendKey("ArrowRight", isRight ? "keydown" : "keyup"); }
  };

  const handleDpadContainerEnd = (e) => {
    if (e.cancelable) e.preventDefault();
    ["ArrowUp", "ArrowDown", "ArrowLeft", "ArrowRight"].forEach(k => {
      if (activeKeys[k]) {
        setActiveKeys(prev => ({ ...prev, [k]: false }));
        sendKey(k, "keyup");
      }
    });
  };

  const isUpActive = !!activeKeys["ArrowUp"];
  const isDownActive = !!activeKeys["ArrowDown"];
  const isLeftActive = !!activeKeys["ArrowLeft"];
  const isRightActive = !!activeKeys["ArrowRight"];
  const isJumpActive = !!activeKeys["btn_jump"] || !!activeKeys["Space"] || (isUpActive && false);
  const isBActive = !!activeKeys["btn_action_b"] || !!activeKeys["Shift"] || !!activeKeys["KeyX"];

  return /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
    ref: containerRef,
    style: {
      display: "flex",
      flexDirection: "column",
      height: "100%",
      background: "#0f172a",
      color: "#ffffff",
      userSelect: "none",
      padding: isFullscreen ? "8px" : "12px",
      boxSizing: "border-box",
      fontFamily: "system-ui, -apple-system, sans-serif"
    },
    children: [
      /* Header & Status Bar */
      /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
        style: {
          display: "flex",
          alignItems: "center",
          justifyContent: "space-between",
          paddingBottom: "8px",
          borderBottom: "1px solid #334155",
          marginBottom: "8px",
          flexShrink: 0
        },
        children: [
          /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
            style: { display: "flex", alignItems: "center", gap: "8px" },
            children: [
              /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
                style: { width: "10px", height: "10px", borderRadius: "50%", background: "#10b981", boxShadow: "0 0 8px #10b981" }
              }),
              /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                style: { fontFamily: "'Press Start 2P', monospace", fontSize: "11px", color: "#34d399", textTransform: "uppercase" },
                children: (detectedControls && detectedControls.gameName) || title || "GAME RUNNING"
              }),
              /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                style: { fontSize: "10px", background: "rgba(14,165,233,0.15)", color: "#38bdf8", border: "1px solid rgba(56,189,248,0.4)", padding: "2px 8px", borderRadius: "12px", fontWeight: "bold" },
                children: "🎮 تحكم مخصص ذكي"
              })
            ]
          }),
          /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
            style: { display: "flex", alignItems: "center", gap: "6px" },
            children: [
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                onClick: () => setShowDevTools(!showDevTools),
                style: { padding: "6px", borderRadius: "8px", background: showDevTools ? "rgba(245,158,11,0.2)" : "#1e293b", border: "1px solid " + (showDevTools ? "#f59e0b" : "#475569"), color: showDevTools ? "#fbbf24" : "#94a3b8", cursor: "pointer" },
                title: "Debug & Diagnostics",
                children: /* @__PURE__ */ jsxRuntimeExports.jsx(Terminal, { className: "w-4 h-4" })
              }),
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                onClick: () => setIsFullscreen(!isFullscreen),
                style: { padding: "6px", borderRadius: "8px", background: "#1e293b", border: "1px solid #475569", color: "#94a3b8", cursor: "pointer" },
                title: "Toggle Fullscreen",
                children: isFullscreen
                  ? /* @__PURE__ */ jsxRuntimeExports.jsx(Minimize2, { className: "w-4 h-4" })
                  : /* @__PURE__ */ jsxRuntimeExports.jsx(Maximize2, { className: "w-4 h-4" })
              })
            ]
          })
        ]
      }),
      /* Game Canvas Iframe Container */
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        style: {
          flex: "1 1 auto",
          width: "100%",
          minHeight: "220px",
          background: "#000000",
          borderRadius: "14px",
          overflow: "hidden",
          border: "2px solid #334155",
          boxShadow: "0 8px 24px rgba(0,0,0,0.6)",
          display: "flex",
          alignItems: "center",
          justifyContent: "center",
          position: "relative"
        },
        children: /* @__PURE__ */ jsxRuntimeExports.jsx("iframe", {
          ref: iframeRef,
          srcDoc: content,
          style: { width: "100%", height: "100%", border: "none", userSelect: "none" },
          title: "Game Engine Preview",
          sandbox: "allow-scripts allow-same-origin allow-modals allow-pointer-lock",
          tabIndex: 0
        })
      }),
      /* Dynamic Game-Specific Touch Controls */
      mode === "game" && /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
        style: {
          display: "flex",
          flexDirection: "row",
          width: "100%",
          gap: "10px",
          justifyContent: "space-between",
          alignItems: "center",
          marginTop: "10px",
          padding: "10px 12px",
          background: "linear-gradient(180deg, #1e293b 0%, #0f172a 100%)",
          borderRadius: "18px",
          border: "2px solid #334155",
          boxShadow: "0 10px 25px rgba(0,0,0,0.5)",
          boxSizing: "border-box",
          userSelect: "none",
          touchAction: "none",
          flexShrink: 0
        },
        dir: "ltr",
        children: [
          /* Left Side: Authentic Retro Cross D-Pad */
          /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
            style: {
              position: "relative",
              width: "140px",
              height: "140px",
              minWidth: "140px",
              minHeight: "140px",
              background: "radial-gradient(circle, #1e293b 30%, #090d16 100%)",
              borderRadius: "50%",
              border: "3px solid #475569",
              boxShadow: "inset 0 4px 8px rgba(0,0,0,0.8), 0 6px 16px rgba(0,0,0,0.6)",
              display: "flex",
              alignItems: "center",
              justifyContent: "center",
              flexShrink: 0,
              boxSizing: "border-box",
              touchAction: "none"
            },
            onTouchStart: handleDpadContainerTouch,
            onTouchMove: handleDpadContainerTouch,
            onTouchEnd: handleDpadContainerEnd,
            onTouchCancel: handleDpadContainerEnd,
            children: [
              /* Up Button */
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                style: {
                  position: "absolute",
                  top: "6px",
                  left: "46px",
                  width: "48px",
                  height: "46px",
                  borderRadius: "10px 10px 3px 3px",
                  background: isUpActive ? "#0284c7" : "linear-gradient(180deg, #334155, #1e293b)",
                  border: "2px solid " + (isUpActive ? "#38bdf8" : "#475569"),
                  display: "flex",
                  alignItems: "center",
                  justifyContent: "center",
                  color: "#ffffff",
                  cursor: "pointer",
                  boxShadow: isUpActive ? "0 0 15px #38bdf8" : "0 3px 0 #0f172a",
                  transform: isUpActive ? "translateY(2px)" : "none",
                  touchAction: "none",
                  userSelect: "none",
                  boxSizing: "border-box",
                  padding: 0
                },
                onPointerDown: (e) => handleDpadPress(e, "ArrowUp", true),
                onPointerUp: (e) => handleDpadPress(e, "ArrowUp", false),
                onPointerCancel: (e) => handleDpadPress(e, "ArrowUp", false),
                children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronUp, { className: "w-7 h-7" })
              }),
              /* Down Button */
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                style: {
                  position: "absolute",
                  bottom: "6px",
                  left: "46px",
                  width: "48px",
                  height: "46px",
                  borderRadius: "3px 3px 10px 10px",
                  background: isDownActive ? "#0284c7" : "linear-gradient(180deg, #334155, #1e293b)",
                  border: "2px solid " + (isDownActive ? "#38bdf8" : "#475569"),
                  display: "flex",
                  alignItems: "center",
                  justifyContent: "center",
                  color: "#ffffff",
                  cursor: "pointer",
                  boxShadow: isDownActive ? "0 0 15px #38bdf8" : "0 3px 0 #0f172a",
                  transform: isDownActive ? "translateY(2px)" : "none",
                  touchAction: "none",
                  userSelect: "none",
                  boxSizing: "border-box",
                  padding: 0
                },
                onPointerDown: (e) => handleDpadPress(e, "ArrowDown", true),
                onPointerUp: (e) => handleDpadPress(e, "ArrowDown", false),
                onPointerCancel: (e) => handleDpadPress(e, "ArrowDown", false),
                children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronDown, { className: "w-7 h-7" })
              }),
              /* Left Button */
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                style: {
                  position: "absolute",
                  left: "6px",
                  top: "46px",
                  width: "46px",
                  height: "48px",
                  borderRadius: "10px 3px 3px 10px",
                  background: isLeftActive ? "#0284c7" : "linear-gradient(180deg, #334155, #1e293b)",
                  border: "2px solid " + (isLeftActive ? "#38bdf8" : "#475569"),
                  display: "flex",
                  alignItems: "center",
                  justifyContent: "center",
                  color: "#ffffff",
                  cursor: "pointer",
                  boxShadow: isLeftActive ? "0 0 15px #38bdf8" : "0 3px 0 #0f172a",
                  transform: isLeftActive ? "translateY(2px)" : "none",
                  touchAction: "none",
                  userSelect: "none",
                  boxSizing: "border-box",
                  padding: 0
                },
                onPointerDown: (e) => handleDpadPress(e, "ArrowLeft", true),
                onPointerUp: (e) => handleDpadPress(e, "ArrowLeft", false),
                onPointerCancel: (e) => handleDpadPress(e, "ArrowLeft", false),
                children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronLeft, { className: "w-7 h-7" })
              }),
              /* Right Button */
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                style: {
                  position: "absolute",
                  right: "6px",
                  top: "46px",
                  width: "46px",
                  height: "48px",
                  borderRadius: "3px 10px 10px 3px",
                  background: isRightActive ? "#0284c7" : "linear-gradient(180deg, #334155, #1e293b)",
                  border: "2px solid " + (isRightActive ? "#38bdf8" : "#475569"),
                  display: "flex",
                  alignItems: "center",
                  justifyContent: "center",
                  color: "#ffffff",
                  cursor: "pointer",
                  boxShadow: isRightActive ? "0 0 15px #38bdf8" : "0 3px 0 #0f172a",
                  transform: isRightActive ? "translateY(2px)" : "none",
                  touchAction: "none",
                  userSelect: "none",
                  boxSizing: "border-box",
                  padding: 0
                },
                onPointerDown: (e) => handleDpadPress(e, "ArrowRight", true),
                onPointerUp: (e) => handleDpadPress(e, "ArrowRight", false),
                onPointerCancel: (e) => handleDpadPress(e, "ArrowRight", false),
                children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronRight, { className: "w-7 h-7" })
              }),
              /* Center Hub Cap */
              /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
                style: {
                  position: "absolute",
                  width: "44px",
                  height: "44px",
                  background: "#0f172a",
                  border: "1px solid #334155",
                  borderRadius: "50%",
                  pointerEvents: "none"
                }
              })
            ]
          }),

          /* Right Side: Arcade Action Buttons & Menu */
          /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
            style: {
              display: "flex",
              flexDirection: "column",
              flex: "1 1 auto",
              minHeight: "140px",
              justifyContent: "space-between",
              alignItems: "center",
              background: "#090d16",
              border: "2px solid #334155",
              borderRadius: "16px",
              padding: "8px 12px",
              boxSizing: "border-box"
            },
            children: [
              /* Action buttons row */
              /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                style: {
                  display: "flex",
                  gap: "24px",
                  justifyContent: "center",
                  alignItems: "center",
                  marginTop: "auto",
                  marginBottom: "auto"
                },
                children: [
                  /* Button B (Run / Dash / Attack) */
                  /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                    style: { display: "flex", flexDirection: "column", alignItems: "center", gap: "3px" },
                    children: [
                      /* @__PURE__ */ jsxRuntimeExports.jsxs("button", {
                        style: {
                          width: "56px",
                          height: "56px",
                          borderRadius: "50%",
                          background: isBActive ? "#6d28d9" : "linear-gradient(135deg, #8b5cf6, #5b21b6)",
                          border: "3px solid " + (isBActive ? "#ddd6fe" : "#a78bfa"),
                          boxShadow: isBActive ? "0 0 16px #8b5cf6" : "0 5px 0 #4c1d95, 0 8px 15px rgba(0,0,0,0.5)",
                          transform: isBActive ? "translateY(3px)" : "none",
                          display: "flex",
                          flexDirection: "column",
                          alignItems: "center",
                          justifyContent: "center",
                          cursor: "pointer",
                          color: "#ffffff",
                          touchAction: "none",
                          userSelect: "none",
                          boxSizing: "border-box",
                          padding: 0
                        },
                        onPointerDown: (e) => handleActionPress(e, "dash", true),
                        onPointerUp: (e) => handleActionPress(e, "dash", false),
                        onPointerCancel: (e) => handleActionPress(e, "dash", false),
                        children: [
                          /* @__PURE__ */ jsxRuntimeExports.jsx("span", { style: { fontFamily: "'Press Start 2P', monospace", fontSize: "16px", fontWeight: "bold", lineHeight: 1 }, children: "B" }),
                          /* @__PURE__ */ jsxRuntimeExports.jsx("span", { style: { fontSize: "12px", marginTop: "2px" }, children: "⚡" })
                        ]
                      }),
                      /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                        style: { fontFamily: "'Press Start 2P', monospace", fontSize: "9px", color: "#c4b5fd", fontWeight: "bold" },
                        children: "جري"
                      })
                    ]
                  }),

                  /* Button A (JUMP / Main Action) */
                  /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                    style: { display: "flex", flexDirection: "column", alignItems: "center", gap: "3px" },
                    children: [
                      /* @__PURE__ */ jsxRuntimeExports.jsxs("button", {
                        style: {
                          width: "58px",
                          height: "58px",
                          borderRadius: "50%",
                          background: isJumpActive ? "#047857" : "linear-gradient(135deg, #10b981, #059669)",
                          border: "3px solid " + (isJumpActive ? "#a7f3d0" : "#34d399"),
                          boxShadow: isJumpActive ? "0 0 18px #10b981" : "0 5px 0 #064e3b, 0 8px 15px rgba(0,0,0,0.5)",
                          transform: isJumpActive ? "translateY(3px)" : "none",
                          display: "flex",
                          flexDirection: "column",
                          alignItems: "center",
                          justifyContent: "center",
                          cursor: "pointer",
                          color: "#ffffff",
                          touchAction: "none",
                          userSelect: "none",
                          boxSizing: "border-box",
                          padding: 0
                        },
                        onPointerDown: (e) => handleActionPress(e, "jump", true),
                        onPointerUp: (e) => handleActionPress(e, "jump", false),
                        onPointerCancel: (e) => handleActionPress(e, "jump", false),
                        children: [
                          /* @__PURE__ */ jsxRuntimeExports.jsx("span", { style: { fontFamily: "'Press Start 2P', monospace", fontSize: "17px", fontWeight: "bold", lineHeight: 1 }, children: "A" }),
                          /* @__PURE__ */ jsxRuntimeExports.jsx("span", { style: { fontSize: "12px", marginTop: "2px" }, children: "⬆️" })
                        ]
                      }),
                      /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                        style: { fontFamily: "'Press Start 2P', monospace", fontSize: "9px", color: "#6ee7b7", fontWeight: "bold" },
                        children: "قفز"
                      })
                    ]
                  })
                ]
              }),

              /* Bottom menu buttons row (SELECT, START, RESET) */
              /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                style: {
                  display: "flex",
                  gap: "14px",
                  justifyContent: "center",
                  alignItems: "center",
                  width: "100%",
                  paddingTop: "6px",
                  borderTop: "1px solid rgba(255,255,255,0.12)"
                },
                children: [
                  /* Select */
                  /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                    style: { display: "flex", flexDirection: "column", alignItems: "center" },
                    children: [
                      /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                        style: {
                          width: "42px",
                          height: "16px",
                          borderRadius: "8px",
                          background: activeKeys["Shift"] ? "#94a3b8" : "#334155",
                          border: "1px solid #64748b",
                          cursor: "pointer",
                          touchAction: "none"
                        },
                        onPointerDown: (e) => { if (e.cancelable) e.preventDefault(); setActiveKeys(p => ({ ...p, Shift: true })); sendKey("ShiftLeft", "keydown"); sendKey("Escape", "keydown"); },
                        onPointerUp: (e) => { if (e.cancelable) e.preventDefault(); setActiveKeys(p => ({ ...p, Shift: false })); sendKey("ShiftLeft", "keyup"); sendKey("Escape", "keyup"); },
                        onPointerCancel: (e) => { if (e.cancelable) e.preventDefault(); setActiveKeys(p => ({ ...p, Shift: false })); sendKey("ShiftLeft", "keyup"); sendKey("Escape", "keyup"); }
                      }),
                      /* @__PURE__ */ jsxRuntimeExports.jsx("span", { style: { fontFamily: "'Press Start 2P', monospace", fontSize: "7px", color: "#94a3b8", marginTop: "2px" }, children: "SELECT" })
                    ]
                  }),

                  /* Start */
                  /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                    style: { display: "flex", flexDirection: "column", alignItems: "center" },
                    children: [
                      /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                        style: {
                          width: "42px",
                          height: "16px",
                          borderRadius: "8px",
                          background: activeKeys["Enter"] ? "#94a3b8" : "#334155",
                          border: "1px solid #64748b",
                          cursor: "pointer",
                          touchAction: "none"
                        },
                        onPointerDown: (e) => { if (e.cancelable) e.preventDefault(); setActiveKeys(p => ({ ...p, Enter: true })); sendKey("Enter", "keydown"); sendKey("Space", "keydown"); },
                        onPointerUp: (e) => { if (e.cancelable) e.preventDefault(); setActiveKeys(p => ({ ...p, Enter: false })); sendKey("Enter", "keyup"); sendKey("Space", "keyup"); },
                        onPointerCancel: (e) => { if (e.cancelable) e.preventDefault(); setActiveKeys(p => ({ ...p, Enter: false })); sendKey("Enter", "keyup"); sendKey("Space", "keyup"); }
                      }),
                      /* @__PURE__ */ jsxRuntimeExports.jsx("span", { style: { fontFamily: "'Press Start 2P', monospace", fontSize: "7px", color: "#94a3b8", marginTop: "2px" }, children: "START" })
                    ]
                  }),

                  /* Reset */
                  /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                    style: { display: "flex", flexDirection: "column", alignItems: "center", marginLeft: "auto" },
                    children: [
                      /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                        onClick: () => {
                          if (iframeRef.current) {
                            const cur = iframeRef.current.srcdoc;
                            iframeRef.current.srcdoc = "";
                            setTimeout(() => { if (iframeRef.current) iframeRef.current.srcdoc = cur; }, 30);
                          }
                        },
                        style: {
                          width: "22px",
                          height: "22px",
                          borderRadius: "50%",
                          background: "#1e293b",
                          border: "1px solid #ef4444",
                          display: "flex",
                          alignItems: "center",
                          justifyContent: "center",
                          cursor: "pointer",
                          padding: 0
                        },
                        title: "Reset Game",
                        children: /* @__PURE__ */ jsxRuntimeExports.jsx(RotateCcw, { className: "w-3 h-3 text-red-400" })
                      }),
                      /* @__PURE__ */ jsxRuntimeExports.jsx("span", { style: { fontFamily: "'Press Start 2P', monospace", fontSize: "6px", color: "#ef4444", marginTop: "2px" }, children: "RESET" })
                    ]
                  })
                ]
              })
            ]
          })
        ]
      })
    ]
  });
};
"""
    text = text[:pos_sendKey] + new_preview_code + text[pos_newId:]
    print("3. Successfully replaced React Game Preview component with perfect controller!")
else:
    print("Error: pos_sendKey or pos_newId not found!")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

print("\nAll controller UI and event dispatch fixes applied successfully!")
