// rea decompile_all
// name: FUN_004f59a0
// address: 0x4f59a0
// body: available
// range: 0x4f59a0-0x4f5a20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f59a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  HANDLE h;
  undefined4 uVar2;
  int c;
  undefined1 *pv;
  undefined1 local_84 [92];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_c;
  int local_8;

  uVar2 = 0;
  local_c = param_3;
  local_8 = param_2;
  FUN_004f76a8(param_1);
  iVar1 = FUN_004fdb48();
  if (iVar1 != 0) {
    local_28 = 2;
    local_24 = local_c;
    local_20 = param_4;
    FUN_004fdb74(iVar1,&local_28);
    if (local_8 != 0) {
      pv = local_84;
      c = 0x5c;
      h = (HANDLE)FUN_0045b10c(local_8);
      GetObjectW(h,c,pv);
      FUN_004fdba0(iVar1,local_84);
    }
    uVar2 = FUN_004f76a8(param_1);
    FUN_004fdb5c(uVar2,iVar1);
    uVar2 = 1;
  }
  return uVar2;
}
