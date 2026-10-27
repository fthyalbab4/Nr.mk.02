// rea decompile_all
// name: FUN_004818e0
// address: 0x4818e0
// body: available
// range: 0x4818e0-0x48198d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481906 (push 0x4819cd followed by fs-segment stack chaining); handler 0x4819cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481922 (push 0x48199f followed by fs-segment stack chaining); handler 0x48199f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481939 (push 0x48198e followed by fs-segment stack chaining); handler 0x48198e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004818e0(int *param_1,uint param_2,undefined4 param_3,SIZE_T param_4)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  HANDLE pvVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x4818fb;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_004819cd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_30 = 0x481914;
  puStack_1c = &stack0xfffffffc;
  hMem = GlobalAlloc(0x2002,param_4);
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pvVar1 = GlobalLock(hMem);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_00404514(param_3,pvVar1,param_4);
  FUN_00481620(param_1);
  pvVar2 = SetClipboardData(param_2 & 0xffff,hMem);
  if (pvVar2 == (HANDLE)0x0) {
    FUN_0041be80(&LAB_0042db84,1,PTR_LAB_00688a34);
    FUN_00406ab4();
  }
  *in_FS_OFFSET = uStack_3c;
  uStack_3c = 0x48198d;
  GlobalUnlock(hMem);
  return;
}
