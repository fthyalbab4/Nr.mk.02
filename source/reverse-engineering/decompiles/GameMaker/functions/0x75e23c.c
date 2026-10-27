// rea decompile_all
// name: FUN_0075e23c
// address: 0x75e23c
// body: available
// range: 0x75e23c-0x75e2b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75e264 (push 0x75e2b2 followed by fs-segment stack chaining); handler 0x75e2b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075e23c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x75e24c;
  local_8 = param_3;
  (**(code **)(*param_1 + 8))();
  puStack_18 = (undefined1 *)0x75e256;
  local_8 = FUN_0075d164(DAT_00826488);
  puStack_1c = &LAB_0075e2b2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar4 = 0;
  puStack_18 = &stack0xfffffffc;
  for (puVar3 = (undefined4 *)FUN_0075886c(); puVar1 = puStack_18,
      puVar3 != (undefined4 *)0xffffffff; puVar3 = (undefined4 *)*puVar3) {
    if (param_1[10] <= iVar4) {
      cVar2 = FUN_0075d328(puVar3[1],local_8);
      if (cVar2 != '\0') {
        FUN_0075e214(param_1,puVar3);
      }
    }
    iVar4 = iVar4 + 1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0075e2b9;
  puStack_1c = (undefined1 *)0x75e2b1;
  FUN_0075d254(DAT_00826488,&local_8,puVar1);
  return;
}
