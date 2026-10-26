// rea decompile_all
// name: FUN_00613340
// address: 0x613340
// body: available
// range: 0x613340-0x6133ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613377 (push 0x613424 followed by fs-segment stack chaining); handler 0x613424 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613393 (push 0x613407 followed by fs-segment stack chaining); handler 0x613407 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6133ac (push 0x6133cf followed by fs-segment stack chaining); handler 0x6133cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613340(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = (undefined1 *)0x61335d;
  FUN_00409ce0(param_3,&DAT_004108f8);
  puStack_20 = (undefined1 *)0x613369;
  uVar2 = FUN_00405a4c(&LAB_00433630,1);
  puStack_24 = &LAB_00613424;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x613385;
  puStack_20 = &stack0xfffffffc;
  piVar3 = (int *)FUN_005e403c(param_1,1,0);
  puStack_30 = &LAB_00613407;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x6133a1;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*piVar3 + 0x38))(piVar3,uVar2);
  puStack_3c = &LAB_006133cf;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  FUN_006131dc(piVar3,param_2);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_006133d6;
  puStack_3c = (undefined1 *)0x6133ce;
  (**(code **)(*piVar3 + 0x3c))(piVar3,*piVar3,puVar1);
  return;
}
