// rea decompile_all
// name: FUN_005897a0
// address: 0x5897a0
// body: available
// range: 0x5897a0-0x589978 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5897e9 (push 0x589979 followed by fs-segment stack chaining); handler 0x589979 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005897a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined1 *in_stack_ffffff04;
  int iStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  int local_d0;
  undefined1 local_c4 [168];
  undefined1 local_1c [24];

  puStack_e0 = (undefined1 *)0x5897d0;
  FUN_0040902c(local_c4,&DAT_00615f70,7);
  puStack_e0 = (undefined1 *)0x5897de;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_e4 = &LAB_00589979;
  iStack_e8 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_e8;
  if (*(int *)(param_3 + 0x14) == 1) {
    if (*(char *)(param_3 + 0x10) == '\0') {
      *PTR_PTR_00689170 = 0;
    }
    else {
      *PTR_PTR_00689170 = *(undefined1 *)(param_3 + 0x4c);
    }
    local_d0 = *(int *)(param_3 + 0x24);
    puStack_e0 = &stack0xfffffffc;
    if (-1 < local_d0 + -1) {
      iVar2 = 0;
      puVar1 = local_c4;
      puStack_e0 = &stack0xfffffffc;
      do {
        if (*(int *)(param_3 + 0x28 + iVar2 * 4) == -1) {
          FUN_00409360(puVar1,param_3 + 0x70 + iVar2 * 0x18,&DAT_00615f70);
        }
        else {
          FUN_0058866c(param_1,param_2,*(undefined4 *)(param_3 + 0x130 + iVar2 * 4),puVar1);
        }
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 0x18;
        local_d0 = local_d0 + -1;
      } while (local_d0 != 0);
    }
    iVar2 = *(int *)(param_3 + 0x18);
    if (iVar2 < 500000) {
      if (iVar2 < 100000) {
        if ((*PTR_DAT_00689498 == '\0') &&
           (*(char *)(*(int *)PTR_DAT_0068956c + 0x4c + *(int *)(param_3 + 0x18) * 0x50) != '\0')) {
          FUN_0061156c(&PTR_DAT_00589994,0);
        }
        else {
          (**(code **)(*(int *)PTR_DAT_0068956c + 0x44 + *(int *)(param_3 + 0x18) * 0x50))
                    (param_1,param_2,*(undefined4 *)(param_3 + 0x24),local_1c,6,local_c4);
        }
      }
      else {
        in_stack_ffffff04 = local_1c;
        FUN_00588af8(iVar2 + -100000,param_1,param_2,in_stack_ffffff04,1,6,local_c4,
                     *(undefined4 *)(param_3 + 0x24));
      }
    }
    else {
      in_stack_ffffff04 = (undefined1 *)0x5898af;
      FUN_00586134(iVar2 + -500000,param_1,param_2,local_1c,6,local_c4,
                   *(undefined4 *)(param_3 + 0x24));
    }
  }
  else {
    puStack_e0 = &stack0xfffffffc;
    FUN_005893bc(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = (int)in_stack_ffffff04;
  FUN_00409120(local_c4,&DAT_00615f70,7,&LAB_00589980);
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
