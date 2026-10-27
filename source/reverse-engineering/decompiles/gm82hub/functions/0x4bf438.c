// rea decompile_all
// name: FUN_004bf438
// address: 0x4bf438
// body: available
// range: 0x4bf438-0x4bf5bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf438(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1c;
  int local_18;
  char local_14;
  int local_c;
  int local_8;

  (**(code **)(**(int **)(param_4 + -0xc) + 8))();
  cVar4 = (char)param_1;
  if (((*(int *)(param_4 + -0x10) != 0) &&
      (((cVar4 == '\0' || (*(char *)(*(int *)(param_4 + -0x10) + 0x59) != '\0')) ||
       (((*(byte *)(*(int *)(param_4 + -0x10) + 0x1c) & 0x10) != 0 &&
        ((*(byte *)(*(int *)(param_4 + -0x10) + 0x51) & 4) == 0)))))) &&
     (cVar4 == *(char *)(*(int *)(param_4 + -0x10) + 0x5d))) {
    FUN_00438d04(*(undefined4 *)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x10));
  }
  local_c = FUN_004c00dc(*(undefined4 *)(param_4 + -4));
  if (-1 < local_c + -1) {
    local_8 = 0;
    do {
      iVar2 = FUN_004c00a0(*(undefined4 *)(param_4 + -4),local_8);
      if ((cVar4 == *(char *)(iVar2 + 0x5d)) &&
         ((((cVar4 == '\0' || (*(char *)(iVar2 + 0x59) != '\0')) ||
           ((*(uint *)(iVar2 + 0x50) & 0x401) == 0x401)) ||
          (((*(byte *)(iVar2 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar2 + 0x51) & 4) == 0)))))) {
        cVar1 = FUN_004061f8(iVar2,&PTR_LAB_004d9848);
        if (((cVar1 == '\0') || ((*(byte *)(iVar2 + 0x1c) & 0x10) == 0)) &&
           (iVar2 != *(int *)(param_4 + -0x10))) {
          for (iVar5 = 0; iVar5 < *(int *)(*(int *)(param_4 + -0xc) + 8); iVar5 = iVar5 + 1) {
            iVar6 = param_4;
            uVar3 = FUN_00438ec4(*(undefined4 *)(param_4 + -0xc),iVar5);
            cVar1 = FUN_004bf2c0(iVar2,uVar3,param_1,iVar6);
            if (cVar1 != '\0') break;
          }
          FUN_00438f7c(*(undefined4 *)(param_4 + -0xc),iVar5,iVar2);
        }
      }
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  local_c = *(int *)(*(int *)(param_4 + -0xc) + 8);
  if (-1 < local_c + -1) {
    local_8 = 0;
    do {
      local_1c = *(undefined4 *)(param_4 + -0xc);
      local_18 = local_8;
      iVar2 = param_4;
      local_14 = cVar4;
      uVar3 = FUN_00438ec4(*(undefined4 *)(param_4 + -0xc),local_8);
      FUN_004bf3f0(uVar3,param_1,&local_1c,iVar2);
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}
