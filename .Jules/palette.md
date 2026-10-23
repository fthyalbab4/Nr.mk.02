## 2026-10-11 - Cloud Game Action Button Focus Ring & Hover States
**Learning:** In dynamically generated card lists within modal overlays, action buttons generated via JavaScript string templates often lack hover feedback handlers (`onmouseenter`/`onmouseleave`) and keyboard focus outlines (`onfocus`/`onblur`), leaving keyboard/screen-reader users without clear visual indication of active focus.
**Action:** Always attach dynamic hover (`#1d4ed8`) and focus outline (`2px solid #60a5fa`) handlers to dynamically created action buttons in grid/list templates.

## 2026-10-12 - Native CSS Pseudo-classes for Modal Control Focus Rings
**Learning:** Overriding element styles imperatively with JavaScript `onfocus`/`onblur` or `onmouseenter`/`onmouseleave` inline styles risks overriding element theme variables and design tokens, and creates unmaintainable style collisions.
**Action:** Use declarative CSS pseudo-classes (`:focus-visible`, `:hover`) in `<style>` blocks for static modal inputs and buttons to ensure clean keyboard accessibility and hover feedback without style leakage.

## 2026-10-13 - Accessible Interactive Cards & Async Loading Feedback
**Learning:** Container cards acting as clickable triggers in dynamically generated grids often omit `tabindex="0"`, `role="article"`, and `Enter`/`Space` keydown listeners, rendering them inaccessible to screen readers and keyboard users. Furthermore, async fetch triggers need an explicit `isCloudLoading` lock and button disabled state (`disabled = true`, `⏳ جاري التحميل...`) to prevent race conditions from repeated user clicks.
**Action:** Always set `tabindex="0"`, `role="article"`, `aria-label`, and `onkeydown` listeners on interactive grid cards, and lock async button actions with visual loading indicators.

## 2026-10-14 - Empty State Actionable CTA & Keyboard Search Recovery
**Learning:** Empty search/filter states in modal card grids that only display static fallback text leave keyboard and screen-reader users isolated without an immediate mechanism to reset filters or restore the catalog without re-navigating through upper controls.
**Action:** Always provide an actionable reset CTA button (`aria-label="إعادة ضبط البحث والتصفية"`) inside empty state blocks that clears query/category filters, re-renders the list, and restores keyboard focus to the search input.

## 2026-10-15 - Accessible Live Status & ARIA Progress Reporting in Async Modals
**Learning:** Async status messages and progress bars inside overlay modals are silent to screen reader users unless the status container uses `role="status"` and `aria-live="polite"`, and the progress bar element defines `role="progressbar"` with dynamic `aria-valuenow` updates.
**Action:** Always wrap async loading feedback in a `role="status"` `aria-live="polite"` container and bind percentage updates to `aria-valuenow` on `role="progressbar"` wrappers.

## 2026-10-16 - Dynamic Card Grid Focus Elevation Parity
**Learning:** In interactive card grids with `tabindex="0"`, relying solely on mouse hover listeners (`onmouseenter`/`onmouseleave`) for card elevation (`transform`, `boxShadow`, `borderColor`) leaves keyboard users with flat cards during Tab navigation, creating a visual disconnect between pointer and keyboard interactions.
**Action:** Bind card elevation logic to both mouse (`onmouseenter`/`onmouseleave`) and focus (`onfocus`/`onblur`) events to ensure identical tactile feedback regardless of input method.

## 2026-10-17 - Modal Dialog Focus Restoration & Focus Trap Boundary
**Learning:** When opening modal dialogs, omitting focus restoration (`lastActiveElement = document.activeElement`) causes keyboard users to lose focus context upon modal dismissal. Furthermore, without a `Tab`/`Shift+Tab` focus cycle handler inside the modal container, keyboard navigation escapes into invisible backdrop elements behind the dialog.
**Action:** Always save the triggering `document.activeElement` on modal open, restore focus on modal close, and attach a `Tab` key listener on the modal container to trap focus within visible dialog boundaries.
