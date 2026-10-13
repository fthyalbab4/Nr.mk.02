## 2026-10-11 - Cloud Game Action Button Focus Ring & Hover States
**Learning:** In dynamically generated card lists within modal overlays, action buttons generated via JavaScript string templates often lack hover feedback handlers (`onmouseenter`/`onmouseleave`) and keyboard focus outlines (`onfocus`/`onblur`), leaving keyboard/screen-reader users without clear visual indication of active focus.
**Action:** Always attach dynamic hover (`#1d4ed8`) and focus outline (`2px solid #60a5fa`) handlers to dynamically created action buttons in grid/list templates.

## 2026-10-12 - Native CSS Pseudo-classes for Modal Control Focus Rings
**Learning:** Overriding element styles imperatively with JavaScript `onfocus`/`onblur` or `onmouseenter`/`onmouseleave` inline styles risks overriding element theme variables and design tokens, and creates unmaintainable style collisions.
**Action:** Use declarative CSS pseudo-classes (`:focus-visible`, `:hover`) in `<style>` blocks for static modal inputs and buttons to ensure clean keyboard accessibility and hover feedback without style leakage.
