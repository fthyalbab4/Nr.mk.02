// rea decompile_all
// name: FUN_0051cdac
// address: 0x51cdac
// body: available
// range: 0x51cdac-0x51cf5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51cde0 (push 0x51cf5c followed by fs-segment stack chaining); handler 0x51cf5c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051cdac(int param_1)

{
  undefined1 *puVar1;
  BOOL BVar2;
  HFONT pHVar3;
  HGDIOBJ pvVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_270;
  undefined1 *puStack_26c;
  undefined1 *puStack_268;
  undefined4 local_25c [6];
  LOGFONTW local_244 [2];
  LOGFONTW local_17c;
  LOGFONTW local_120;
  LOGFONTW local_c4;
  LOGFONTW local_64;
  undefined1 local_5;

  puStack_268 = &stack0xfffffffc;
  local_5 = 0;
  if (DAT_007882ec != 0) {
    local_5 = *(undefined1 *)(DAT_007882ec + 0x88);
  }
  puStack_26c = &LAB_0051cf5c;
  uStack_270 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_270;
  puVar1 = &stack0xfffffffc;
  if (DAT_007882ec != 0) {
    FUN_005202a0(DAT_007882ec,0);
    puVar1 = puStack_268;
  }
  puStack_268 = puVar1;
  BVar2 = SystemParametersInfoW(0x1f,0x5c,&local_64,0);
  if (BVar2 == 0) {
    pvVar4 = GetStockObject(0xd);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x80),pvVar4);
  }
  else {
    pHVar3 = CreateFontIndirectW(&local_64);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x80),pHVar3);
  }
  local_25c[0] = FUN_0040ec84();
  BVar2 = SystemParametersInfoW(0x29,0,local_25c,0);
  if (BVar2 == 0) {
    FUN_0045b46c(*(undefined4 *)(param_1 + 0x7c),8);
    pvVar4 = GetStockObject(0xd);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x84),pvVar4);
    pvVar4 = GetStockObject(0xd);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x88),pvVar4);
    pvVar4 = GetStockObject(0xd);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x8c),pvVar4);
  }
  else {
    pHVar3 = CreateFontIndirectW(&local_120);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x7c),pHVar3);
    pHVar3 = CreateFontIndirectW(&local_17c);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x84),pHVar3);
    pHVar3 = CreateFontIndirectW(&local_c4);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x88),pHVar3);
    pHVar3 = CreateFontIndirectW(local_244);
    FUN_0045b33c(*(undefined4 *)(param_1 + 0x8c),pHVar3);
  }
  FUN_0045b0d0(*(undefined4 *)(param_1 + 0x7c),0xff000017);
  FUN_0045b0d0(*(undefined4 *)(param_1 + 0x84),0xff000007);
  FUN_0045b0d0(*(undefined4 *)(param_1 + 0x88),0xff000008);
  puVar1 = puStack_268;
  *in_FS_OFFSET = uStack_270;
  puStack_268 = &LAB_0051cf63;
  if (DAT_007882ec != 0) {
    puStack_26c = (undefined1 *)0x51cf5b;
    FUN_005202a0(DAT_007882ec,local_5,puVar1);
  }
  return;
}
