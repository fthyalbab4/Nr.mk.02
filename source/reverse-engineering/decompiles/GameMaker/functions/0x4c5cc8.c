// rea decompile_all
// name: FUN_004c5cc8
// address: 0x4c5cc8
// body: available
// range: 0x4c5cc8-0x4c5eed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c5ce8 (push 0x4c5eee followed by fs-segment stack chaining); handler 0x4c5eee lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c5cc8(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 local_116 [2];
  undefined2 auStack_114 [128];
  int local_14;
  int local_10;
  char local_9;
  int local_8;

  puStack_128 = &stack0xfffffffc;
  local_8 = 0;
  puStack_12c = &LAB_004c5eee;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_10 = 0;
  if (*(int *)(param_2 + 0xc) < *(int *)(*(int *)(param_1 + 0x288) + 8)) {
    local_10 = FUN_0043b048(*(int *)(param_1 + 0x288),*(undefined4 *)(param_2 + 0xc));
    local_9 = FUN_00405c98(local_10,&PTR_LAB_004a4a78);
  }
  else {
    local_9 = *(short *)(param_1 + 0x322) != 0;
    puStack_128 = &stack0xfffffffc;
    if ((bool)local_9) {
      local_14 = 0;
      puStack_128 = &stack0xfffffffc;
      (**(code **)(param_1 + 800))
                (*(undefined4 *)(param_1 + 0x324),param_1,
                 (*(int *)(param_2 + 0xc) - *(int *)(*(int *)(param_1 + 0x288) + 8)) +
                 *(int *)(param_1 + 0x2e8),&local_14);
      local_10 = local_14;
      local_9 = local_14 != 0;
      if ((bool)local_9) {
        *(int *)(local_14 + 0x1cc) = param_1;
        iVar3 = FUN_0043b0b0(*(undefined4 *)(param_1 + 0x288),local_14);
        if (iVar3 == -1) {
          FUN_0043b100(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_2 + 0xc),local_14);
          if (*(short *)(param_1 + 0x33a) != 0) {
            (**(code **)(param_1 + 0x338))(*(undefined4 *)(param_1 + 0x33c),param_1,local_14);
          }
        }
      }
    }
  }
  if (local_9 != '\0') {
    iVar3 = FUN_00405cbc(local_10,&PTR_LAB_004a4a78);
    if ((byte)(*(char *)(iVar3 + 0x1c6) - 3U) < 2) {
      FUN_0040b75c(PTR_PTR_007815e4,&local_8);
    }
    else {
      FUN_004ee6a0(iVar3,&local_8);
    }
    uVar4 = FUN_00407f44(local_8);
    FUN_00417754(*(undefined4 *)(param_2 + 0x28),uVar4,0x80);
    uVar4 = FUN_00417670(*(undefined4 *)(param_2 + 0x28));
    *(undefined4 *)(param_2 + 0x24) = uVar4;
    uVar4 = FUN_00407f44(local_8);
    FUN_00417754(local_116,uVar4,0x80);
    iVar5 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar5 = FUN_00407048(&local_8,local_8);
    }
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + -4);
    }
    auStack_114[iVar6] = 0;
    if ((*(char *)(param_1 + 0x2a8) == '\0') &&
       ((*(char *)(param_1 + 0x27c) == '\0' || (*(char *)(iVar3 + 0x1c6) != '\x05')))) {
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    }
    else {
      uVar4 = FUN_004efb90(param_1,0x44d,0,local_116);
      *(undefined4 *)(param_2 + 0x20) = uVar4;
    }
    uVar4 = FUN_004c056c(iVar3);
    *(undefined4 *)(param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar3 + 0x1b4);
    *(undefined *)(param_2 + 0x19) = (&DAT_007785dc)[(uint)*(byte *)(iVar3 + 0x1c6) * 2];
    uVar2 = FUN_004bffc8(iVar3);
    *(undefined1 *)(param_2 + 0x18) = uVar2;
    *(int *)(param_2 + 0x1c) = local_10;
  }
  puVar1 = puStack_128;
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_004c5ef5;
  puStack_12c = (undefined1 *)0x4c5eed;
  thunk_FUN_00406e5c(&local_8,uStack_130,puVar1);
  return;
}
