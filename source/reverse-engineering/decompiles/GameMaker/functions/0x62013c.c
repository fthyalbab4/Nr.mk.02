// rea decompile_all
// name: FUN_0062013c
// address: 0x62013c
// body: available
// range: 0x62013c-0x620226 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62016a (push 0x620227 followed by fs-segment stack chaining); handler 0x620227 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062013c(int param_1,undefined *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  undefined4 local_158;
  undefined1 local_152 [161];
  undefined1 local_b1 [161];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_168 = &stack0xfffffffc;
  local_158 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_16c = &LAB_00620227;
  uStack_170 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_170;
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_152;
    uVar2 = 0x6201c7;
    puVar3 = param_2;
    (*DAT_0077f034)();
    FUN_00417b3c(local_152,&local_10);
    FUN_004080e4(&local_8,local_10);
  }
  else {
    puStack_168 = &stack0xfffffffc;
    (*DAT_0077f034)();
    FUN_00417b3c(local_b1,&local_c);
    puVar3 = &DAT_00620244;
    FUN_004080e4(&local_158,local_c);
    uVar2 = local_158;
    FUN_00408480(&local_8,3);
  }
  iVar1 = (**(code **)(param_1 + 8))(param_1,1,local_8,uVar2,puVar3);
  *(undefined **)(iVar1 + 0x18) = param_2;
  FUN_00406618(iVar1);
  *in_FS_OFFSET = uVar2;
  thunk_FUN_00406e5c(&local_158,uVar2,param_3,&LAB_0062022e);
  FUN_00406e80(&local_10,2);
  thunk_FUN_00406e5c(&local_8);
  return;
}
