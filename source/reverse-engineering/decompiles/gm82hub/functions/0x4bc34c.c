// rea decompile_all
// name: FUN_004bc34c
// address: 0x4bc34c
// body: available
// range: 0x4bc34c-0x4bc466 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bc3a9 (push 0x4bc467 followed by fs-segment stack chaining); handler 0x4bc467 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc34c(undefined4 param_1,int *param_2,char param_3)

{
  int x;
  int y;
  int h;
  HGDIOBJ h_00;
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  byte bVar2;
  int aiStackY_1800 [1515];
  undefined4 uVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  HGDIOBJ local_14;
  HDC local_10;
  HWND local_c;
  char local_5;

  bVar2 = 0;
  local_5 = param_3;
  h = (**(code **)(*param_2 + 0x38))();
  if (local_5 == '\0') {
    piVar1 = param_2 + (uint)bVar2 * -2 + 0x14;
    local_24 = param_2[0x13];
    *(int *)((int)&stack0xffffffe0 + (uint)bVar2 * -8) = *piVar1;
    *(int *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         piVar1[(uint)bVar2 * -2 + 1];
    ((int *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8))[(uint)bVar2 * -2 + 1] =
         (piVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  }
  else {
    piVar1 = param_2 + (uint)bVar2 * -2 + 0x1a;
    local_24 = param_2[0x19];
    *(int *)((int)&stack0xffffffe0 + (uint)bVar2 * -8) = *piVar1;
    *(int *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         piVar1[(uint)bVar2 * -2 + 1];
    ((int *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8))[(uint)bVar2 * -2 + 1] =
         (piVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  }
  local_c = GetDesktopWindow();
  local_10 = GetDCEx(local_c,(HRGN)0x0,0x402);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  h_00 = (HGDIOBJ)FUN_0045c344(param_2[0x12]);
  local_14 = SelectObject(local_10,h_00);
  y = local_20;
  x = local_24;
  PatBlt(local_10,local_24 + h,local_20,(local_1c - local_24) - h,h,0x5a0049);
  PatBlt(local_10,local_1c - h,y + h,h,(local_18 - y) - h,0x5a0049);
  PatBlt(local_10,x,local_18 - h,(local_1c - local_24) - h,h,0x5a0049);
  PatBlt(local_10,x,y,h,(local_18 - local_20) - h,0x5a0049);
  SelectObject(local_10,local_14);
  *in_FS_OFFSET = uVar3;
  ReleaseDC(local_c,local_10);
  return;
}
