// rea decompile_all
// name: FUN_0054c834
// address: 0x54c834
// body: available
// range: 0x54c834-0x54c904 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54c85c (push 0x54c905 followed by fs-segment stack chaining); handler 0x54c905 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054c834(undefined4 param_1,int param_2,byte param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x54c851;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_0054c905;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar4 = (param_3 & 2) == 0;
  if ((bool)cVar4) {
    puStack_1c = &stack0xfffffffc;
    FUN_0040891c(local_8,param_1);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    iVar2 = FUN_00415770(local_8,param_1);
    cVar4 = iVar2 == 0;
  }
  if ((cVar4 == '\0') && ((param_3 & 1) == 0)) {
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (0 < iVar3) {
      FUN_0054c704(local_8,&local_c);
      if ((param_3 & 2) == 0) {
        FUN_0040891c(local_c,param_1);
      }
      else {
        FUN_00415770(local_c,param_1);
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0054c90c;
  puStack_20 = (undefined1 *)0x54c904;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
