// rea decompile_all
// name: FUN_0042bc38
// address: 0x42bc38
// body: available
// range: 0x42bc38-0x42bccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42bc4e (push 0x42bcd0 followed by fs-segment stack chaining); handler 0x42bcd0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bc38(char *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0042bcd0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (*param_1 == '\x01') {
    puStack_14 = &stack0xfffffffc;
    FUN_00416600(param_2);
  }
  else {
    iVar3 = FUN_0042ba48(param_1);
    if (*(int *)(iVar3 + 1) < 0) {
      cVar2 = FUN_00415880(param_2,PTR_u_False_0067cfbc);
      if ((cVar2 == '\0') && (cVar2 = FUN_00415880(param_2,PTR_u_True_0067cfc0), cVar2 == '\0')) {
        FUN_00416600(param_2);
      }
    }
    else {
      FUN_0040b4a8(param_2,&local_8);
      FUN_0042bbc0(param_1,local_8);
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042bcd7;
  puStack_18 = (undefined1 *)0x42bccf;
  FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
