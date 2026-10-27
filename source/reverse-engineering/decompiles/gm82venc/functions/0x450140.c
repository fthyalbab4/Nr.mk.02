// rea decompile_all
// name: FUN_00450140
// address: 0x450140
// body: available
// range: 0x450140-0x4502dc inclusive
// range: 0x4502e4-0x4502fe inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450160 (push 0x4502ff followed by fs-segment stack chaining); handler 0x4502ff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4501b3 (push 0x4502dd followed by fs-segment stack chaining); handler 0x4502dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450140(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_EDX;
  int iVar8;
  int *in_FS_OFFSET;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_14;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_004502ff;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_2c;
  uStack_30 = 0;
  piStack_34 = &local_8;
  puStack_38 = (undefined1 *)0x450175;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  puVar2 = puStack_2c;
  if (local_8 != 0) {
    puStack_38 = (undefined1 *)0x45018d;
    cVar3 = FUN_004061f8(param_4,&LAB_004319cc);
    if (cVar3 == '\0') {
      puStack_38 = (undefined1 *)0x4501a5;
      local_14 = (int *)FUN_00405fac(&LAB_004319cc,1);
    }
    else {
      local_14 = param_4;
    }
    puStack_3c = &LAB_004502dd;
    iStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_40;
    puStack_38 = &stack0xfffffffc;
    FUN_0043c834(local_14);
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    uVar7 = 0;
    if (iVar4 != 0) {
      uVar7 = *(uint *)(iVar4 + -4);
    }
    iVar4 = (**(code **)*local_14)();
    iVar8 = (int)uVar7 >> 1;
    if (iVar8 < 0) {
      iVar8 = iVar8 + (uint)((uVar7 & 1) != 0);
    }
    (**(code **)(*local_14 + 4))(local_14,iVar4 + iVar8);
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    uVar7 = 0;
    if (iVar4 != 0) {
      uVar7 = *(uint *)(iVar4 + -4);
    }
    uVar5 = FUN_0043c834(local_14);
    uVar1 = local_14[1];
    uVar6 = FUN_00408220(local_8,((int)uVar1 >> 0x1f) + extraout_EDX + (uint)CARRY4(uVar1,uVar5));
    iVar4 = (int)uVar7 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar7 & 1) != 0);
    }
    FUN_00443b90(uVar6,uVar1 + uVar5,iVar4);
    FUN_0043c854(local_14);
    if (param_4 != local_14) {
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      uVar7 = 0;
      if (iVar4 != 0) {
        uVar7 = *(uint *)(iVar4 + -4);
      }
      iVar4 = (int)uVar7 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((uVar7 & 1) != 0);
      }
      FUN_0043caf8(param_4,local_14,uVar7,iVar4,iVar4 >> 0x1f);
    }
    (**(code **)*local_14)();
    puVar2 = puStack_38;
    *in_FS_OFFSET = iStack_40;
    puStack_38 = (undefined1 *)0x4502e9;
    if (param_4 != local_14) {
      puStack_3c = (undefined1 *)0x4502dc;
      FUN_00405fdc(local_14,iStack_40,puVar2);
    }
    return;
  }
  *in_FS_OFFSET = (int)piStack_34;
  puStack_2c = &LAB_00450306;
  uStack_30 = 0x4502fe;
  thunk_FUN_004072d8(&local_8,piStack_34,puVar2);
  return;
}
