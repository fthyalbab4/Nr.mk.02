// rea decompile_all
// name: FUN_006cf96c
// address: 0x6cf96c
// body: available
// range: 0x6cf96c-0x6cfa0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cf9a0 (push 0x6cfa32 followed by fs-segment stack chaining); handler 0x6cfa32 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cf9c8 (push 0x6cfa0f followed by fs-segment stack chaining); handler 0x6cfa0f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cf96c(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_c;
  undefined4 local_8;

  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x6cf97f;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  puStack_30 = (undefined1 *)0x6cf995;
  FUN_00408d1c(&local_c,&DAT_005cc0b0);
  puStack_34 = &LAB_006cfa32;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_3c = param_4;
  puStack_40 = (undefined1 *)0x6cf9b3;
  puStack_30 = &stack0xfffffffc;
  FUN_006cf7c8(param_1,0,0);
  puStack_40 = (undefined1 *)0x6cf9ba;
  piVar2 = (int *)FUN_006cf2d4(param_3);
  puStack_44 = &LAB_006cfa0f;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_006cf2dc(piVar2);
    if (cVar1 == '\0') break;
    (**(code **)*piVar2)(piVar2,&local_c);
    FUN_006cfc98(param_1,local_c,local_8);
  }
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_006cfa16;
  if (piVar2 != (int *)0x0) {
    puStack_44 = (undefined1 *)0x6cfa0e;
    (**(code **)(*piVar2 + -4))(piVar2,1);
  }
  return;
}
