// rea decompile_all
// name: FUN_006077cc
// address: 0x6077cc
// body: available
// range: 0x6077cc-0x60787e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6077e7 (push 0x60787f followed by fs-segment stack chaining); handler 0x60787f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006077cc(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0060787f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_2;
  iVar2 = FUN_004171ac(&DAT_00607898,param_2);
  if (0 < iVar2) {
    puVar5 = &local_c;
    iVar4 = iVar2 + -1;
    if (SBORROW4(iVar2,1)) {
      FUN_00405944();
      iVar4 = extraout_ECX;
    }
    FUN_004086a8(local_8,1,iVar4,puVar5);
    (**(code **)(*param_1 + 0x50))(param_1,local_c);
    puVar5 = &local_14;
    iVar4 = iVar2 + 1;
    if (SCARRY4(iVar2,1)) {
      FUN_00405944(puVar5,iVar4);
      iVar4 = extraout_EDX;
    }
    FUN_004086a8(local_8,iVar4,0xff,puVar5);
    FUN_00415dd0(local_14,&local_10);
    uVar3 = FUN_005e2640(local_10,*(undefined2 *)((int)param_1 + 0xe6));
    (**(code **)(*param_1 + 0x54))(param_1,uVar3);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00607886;
  puStack_24 = (undefined1 *)0x60787e;
  thunk_FUN_00406e80(&local_14,3,puVar1);
  return;
}
