// rea decompile_all
// name: FUN_0043a9c0
// address: 0x43a9c0
// body: available
// range: 0x43a9c0-0x43aa33 inclusive
// range: 0x43aa3d-0x43aa42 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43aa0f (push 0x43aa34 followed by fs-segment stack chaining); handler 0x43aa34 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a9c0(undefined4 param_1,HMODULE param_2,undefined4 *param_3)

{
  LPCWSTR lpName;
  HRSRC pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LPCWSTR lpType;
  undefined1 *puVar5;

  puVar5 = &stack0xfffffffc;
  if (param_2 == (HMODULE)0x0) {
    param_2 = DAT_00785c40;
  }
  lpType = (LPCWSTR)&DAT_0000000a;
  lpName = (LPCWSTR)FUN_00407f44(param_1);
  pHVar1 = FindResourceW(param_2,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    uVar2 = FUN_0044057c(&PTR_LAB_00433d68,1,param_2);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    uVar3 = FUN_0043f5ec(uVar2,*param_3);
    *param_3 = uVar3;
    *in_FS_OFFSET = uVar4;
    FUN_00405a7c(uVar2,uVar4,puVar5);
    return;
  }
  return;
}
