// rea decompile_all
// name: FUN_00560abc
// address: 0x560abc
// body: available
// range: 0x560abc-0x560b31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x560ae4 (push 0x560b32 followed by fs-segment stack chaining); handler 0x560b32 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560abc(int *param_1,undefined4 param_2,undefined4 param_3)

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

  puStack_18 = (undefined1 *)0x560acc;
  local_8 = param_3;
  (**(code **)(*param_1 + 8))();
  puStack_18 = (undefined1 *)0x560ad6;
  local_8 = FUN_0055f9e4(DAT_0071187c);
  puStack_1c = &LAB_00560b32;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar4 = 0;
  puStack_18 = &stack0xfffffffc;
  for (puVar3 = (undefined4 *)FUN_0055b0ec(); puVar1 = puStack_18,
      puVar3 != (undefined4 *)0xffffffff; puVar3 = (undefined4 *)*puVar3) {
    if (param_1[10] <= iVar4) {
      cVar2 = FUN_0055fba8(puVar3[1],local_8);
      if (cVar2 != '\0') {
        FUN_00560a94(param_1,puVar3);
      }
    }
    iVar4 = iVar4 + 1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00560b39;
  puStack_1c = (undefined1 *)0x560b31;
  FUN_0055fad4(DAT_0071187c,&local_8,puVar1);
  return;
}
