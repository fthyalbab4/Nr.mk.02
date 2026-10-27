// rea decompile_all
// name: FUN_00415b5c
// address: 0x415b5c
// body: available
// range: 0x415b5c-0x415bf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x415b7c (push 0x415bf7 followed by fs-segment stack chaining); handler 0x415bf7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415b5c(int param_1,undefined4 *param_2)

{
  DWORD cchLength;
  undefined4 uVar1;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_00415bf7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  if (DAT_0067cb84 == 2) {
    cchLength = 0;
    if (param_1 != 0) {
      cchLength = *(uint *)(param_1 + -4) >> 1;
    }
    puStack_20 = &stack0xfffffffc;
    uVar1 = FUN_00407fb8(param_1);
    FUN_00407ee0(local_c,uVar1,cchLength);
    if (cchLength != 0) {
      CharLowerBuffW((LPWSTR)*local_c,cchLength);
    }
  }
  else {
    FUN_0040840c(&local_14,param_1);
    FUN_00415934(local_14,&local_10);
    FUN_00408420(local_c,local_10);
  }
  *in_FS_OFFSET = puStack_24;
  puStack_20 = (undefined1 *)0x415bf6;
  thunk_FUN_004072fc(&local_14,2,unaff_ESI);
  return;
}
