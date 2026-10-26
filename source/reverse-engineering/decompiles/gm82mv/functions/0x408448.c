// rea decompile_all
// name: FUN_00408448
// address: 0x408448
// body: available
// range: 0x408448-0x4084f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40846d (push 0x4084fa followed by fs-segment stack chaining); handler 0x4084fa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408448(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_21c;
  undefined1 *puStack_218;
  undefined1 *puStack_214;
  undefined1 local_208 [512];
  int local_8;

  puStack_214 = (undefined1 *)0x408462;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_218 = &LAB_004084fa;
  uStack_21c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_21c;
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  puStack_214 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_214 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_214 = &stack0xfffffffc;
    FUN_00407488(&local_8,local_8);
  }
  iVar2 = FUN_00408514();
  if (param_3 <= iVar2) {
    iVar2 = param_3;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00407438(local_208,0x1ff,local_8,iVar2);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (param_3 < iVar2) {
      iVar2 = param_3;
    }
  }
  *param_1 = (char)iVar2;
  if (0 < iVar2) {
    FUN_00404514(local_208,param_1 + 1,iVar2);
  }
  puVar1 = puStack_214;
  *in_FS_OFFSET = uStack_21c;
  puStack_214 = &LAB_00408501;
  puStack_218 = (undefined1 *)0x4084f9;
  thunk_FUN_004072d8(&local_8,uStack_21c,puVar1);
  return;
}
